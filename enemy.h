#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

#define FRW 0
#define BKW 1

#include "fighter.h"
#include "bullet.h"
#include "soundhandler.h"

class Enemy
{
  public:
    int life, shootInterval;
    bool dir, gotHit;
    int shootProbability;

    Fighter enemyFighter;
    SoundHandler makeSound;
    float dx, curX, curY;
    queue<Bullet> bullets;

    Enemy();
    void drawEnemy();
    void startRender();
    void shoot();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};

Enemy::Enemy()
{
  dx=0.001f; life=100;
  dir=false; gotHit=false;

  shootInterval=0;
  curX=MAX_X+2.0; curY=0.0;

  shootProbability=3;
  drawEnemy();
}

void Enemy::startRender()
{
  if(dir==FRW){curX-=dx; if(curX<MAX_X-3.0) dir=BKW;}
  else{curX+=dx; if(curX>MAX_X) dir=FRW;}

  drawEnemy();

  shootInterval++;
  if(shootInterval%2500==0)
  {
    bool decide=rand()%shootProbability;
    if(curX<=MAX_X && decide)
    {
      shoot();
      makeSound.enemyShoot();
    }
    shootInterval=0;
  }
}

void Enemy::drawEnemy()
{
  glPushMatrix();
    glTranslatef(curX,curY,-7.0);
    enemyFighter.drawEnemyRed();
  glPopMatrix();
}

void Enemy::shoot()
{
  Bullet thisBullet;
  thisBullet.posX=curX;
  thisBullet.posY=curY;
  bullets.push(thisBullet);
  //enemyBullets.push(thisBullet);
}
void Enemy::moveUp()
{
  curY+=0.3;
}
void Enemy::moveDown()
{
  curY-=0.3;
}
void Enemy::moveLeft()
{
  curX-=0.3;
}
void Enemy::moveRight()
{
  curX+=0.3;
}

#endif // ENEMY_H_INCLUDED
