#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED

#include "bullet.h"
#include "fighter.h"
#include "soundhandler.h"

class Hero
{
  public:
    int life, shootInterval;
    bool dead, gotHit;

    Fighter heroFighter;
    SoundHandler gameSound;
    float speed, score, curX, curY;
    queue<Bullet> bullets;

    Hero();
    void drawHero();
    void startRender();
    void shoot();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
};

Hero::Hero()
{
  speed=0.3; life=100.0;
  shootInterval=0;

  dead=false; gotHit=false;
  curX=-(MAX_X-1.3); curY=0.0;
  drawHero();
}

void Hero::startRender()
{
  drawHero();
  if(shootInterval<100) shootInterval++;
}

void Hero::drawHero()
{
  glPushMatrix();
    glTranslatef(curX,curY,-7.0);
    heroFighter.drawHeroGreen();
  glPopMatrix();
}

void Hero::shoot()
{
  if(shootInterval<100) return;
  shootInterval=0;

  Bullet thisBullet;
  thisBullet.posX=curX;
  thisBullet.posY=curY;
  bullets.push(thisBullet);
  gameSound.heroShoot();
}
void Hero::moveUp()
{
  if(curY<(MAX_Y-0.95)) curY+=speed;
}
void Hero::moveDown()
{
  if(curY>-(MAX_Y-0.95)) curY-=speed;
}
void Hero::moveLeft()
{
  if(curX>-(MAX_X-0.95)) curX-=speed;
}
void Hero::moveRight()
{
  float lim=2.0;
  if(curX<-(lim-0.3)) curX+=speed;
}
#endif // HERO_H_INCLUDED
