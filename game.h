#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <bits/stdc++.h>
#define ACC 0.30
#define AC2 0.50

#include "backScene.h"
#include "bullet.h"
#include "imagehandler.h"
#include "hero.h"
#include "enemy.h"
#include "soundhandler.h"
#include "texthandler.h"

class Game
{
  public:
    bool paused;
    Hero myJet;
    BackScene scene;
    TextHandler makeTxt;
    SoundHandler makeSound;
    queue<Enemy>enemyList;
    queue<Bullet>enemyBullets;

    Game();
    void startRender();
    void createEnemy(float x, float y);
    bool makeFightWithEnemy(Bullet thisBullet);
    bool makeFightWithHero(Bullet thisBullet);
    void renderHero();
    void renderEnemies();
    void collectBullets();
    void renderBullets();
};

Game::Game()
{
  paused=false;
  //myJet.dead=true; return;
  ///Empty
  Enemy e1;
  e1.curX-=1.5;
  e1.curY+=2.18;
  enemyList.push(e1);

  Enemy e2;
  e2.curX-=0.0;
  e2.curY+=0.73;
  enemyList.push(e2);

  Enemy e3;
  e3.curX-=1.3;
  e3.curY-=0.75;
  enemyList.push(e3);

  Enemy e4;
  e4.curX-=-.2;
  e4.curY-=2.17;
  enemyList.push(e4);
  //makeSound.background();
}

void Game::startRender()
{
  if(paused) return;
  if(myJet.dead)
  {
    scene.startRender();
    glutSwapBuffers();
    return;
  }

  myJet.score+=0.0001;
  makeTxt.putScore(myJet.score);
  makeTxt.putLife(myJet.life);

  renderHero();
  renderEnemies();
  collectBullets();
  renderBullets();
  scene.startRender();

  glutSwapBuffers();
}

void Game::renderHero()
{
  myJet.startRender();
}

void Game::createEnemy(float x, float y)
{
  Enemy newEnemy;
  newEnemy.curY=y;
  newEnemy.curX=x+4.5;
  enemyList.push(newEnemy);
}

bool Game::makeFightWithEnemy(Bullet thisBullet)
{
  bool gotHit=false;

  int hasEnemy=0;
  hasEnemy=enemyList.size();

  while(hasEnemy--)
  {
    Enemy thisEnemy=enemyList.front();
    enemyList.pop();

    float dx=fabs(thisBullet.posX-thisEnemy.curX);
    float dy=fabs(thisBullet.posY-thisEnemy.curY);
    if(dx<ACC && dy<ACC) thisEnemy.life-=100;

    if(thisEnemy.life<=0) gotHit=true;
    if(gotHit) makeSound.enemyDead();
    if(gotHit) myJet.score+=2.5;

    if(thisEnemy.life<=0) createEnemy(thisEnemy.curX,thisEnemy.curY);
    if(thisEnemy.life<=0) break;

    else enemyList.push(thisEnemy);
  }

  if(gotHit) return true;
  else return false;
}

bool Game::makeFightWithHero(Bullet thisBullet)
{
  bool gotHit=true;

  float dx=fabs(thisBullet.posX-myJet.curX);
  float dy=fabs(thisBullet.posY-myJet.curY);

  if(dx<AC2 && dy<AC2 && dy>=ACC) myJet.life-=5;
  else if(dx<ACC && dy<ACC) myJet.life-=20;
  else gotHit=false;

  if(gotHit) makeSound.heroGotHit();

  if(gotHit) return true;
  else return false;
}

void Game::renderEnemies()
{
  int hasEnemy=0;
  hasEnemy=enemyList.size();

  while(hasEnemy--)
  {
    Enemy thisEnemy=enemyList.front();
    enemyList.pop();

    if(thisEnemy.life==0) continue;
    thisEnemy.startRender();
    enemyList.push(thisEnemy);
  }
}

void Game::collectBullets()
{
  int hasEnemy=0;
  hasEnemy=enemyList.size();

  while(hasEnemy--)
  {
    Enemy thisEnemy=enemyList.front();
    enemyList.pop();

    int hasEnemyBullet=0;
    hasEnemyBullet=thisEnemy.bullets.size();

    while(hasEnemyBullet--)
    {
      Bullet thisBullet=thisEnemy.bullets.front();
      thisEnemy.bullets.pop();
      if(thisBullet.posX<-(MAX_X+1.0)) continue;
      enemyBullets.push(thisBullet);
    }
    enemyList.push(thisEnemy);
  }
}

void Game::renderBullets()
{
  ///Hero Turn:
  int hasHeroBullet=0;
  hasHeroBullet=myJet.bullets.size();

  while(hasHeroBullet--)
  {
    Bullet thisBullet=myJet.bullets.front();
    myJet.bullets.pop();
    if(thisBullet.posX>MAX_X+1.0) continue;
    if(makeFightWithEnemy(thisBullet)) continue;

    thisBullet.drawHeroBullet();
    myJet.bullets.push(thisBullet);
  }

  ///Enemy Turn:
  int hasEnemyBullets=0;
  hasEnemyBullets=enemyBullets.size();

  while(hasEnemyBullets--)
  {
    Bullet thisBullet=enemyBullets.front();
    enemyBullets.pop();

    if(makeFightWithHero(thisBullet)) continue;

    thisBullet.drawEnemyBullet();
    enemyBullets.push(thisBullet);

    if(myJet.life<=0) myJet.dead=true;
    if(myJet.life<=0) break;
  }
}

#endif // GAME_H_INCLUDED
