#ifndef BACKSCENE_H_INCLUDED
#define BACKSCENE_H_INCLUDED

#include <windows.h>
#include <MMSystem.h>
#include "imagehandler.h"

class BackScene
{
  public:
    ///INFO VAR
    float curX, curY;

    BackScene();
    void startRender();
    void drawClouds1();
    void drawClouds2();
    void drawBackImage();
    void drawCircle(float r);
};

BackScene::BackScene()
{
  curX=0.0;
  curY=0.0;
}

void BackScene::drawBackImage()
{
  drawImage();
}

void BackScene::drawCircle(float r)
{
  glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
    {
      float A=(i*2*PI)/50;
      float x = r * cos(A);
      float y = r * sin(A);
      glVertex3f(x,y,0.0);
    }
  glEnd();
}

void BackScene::startRender()
{
  //drawBackImage();
  curX-=0.002; if(curX<-40.0) curX=40.0;
  glTranslated(curX,curY,0.0);
  //glTranslated(-14,curY,-0.7);
  drawClouds1();
}

void BackScene::drawClouds1()
{
  glClearColor(0.529, 0.807, 0.980, 100.0);
  glColor3f(0.960, 0.960, 0.960);

glPushMatrix();
  glPushMatrix();///STRT-1
  glTranslatef(-2.0,-1.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.65);
  glPopMatrix();
  glPopMatrix();///END


  glPushMatrix();///STRT-2
  glTranslatef(-5.0,3.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,-0.5,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9,0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.75,-0.39,-7.0);
    drawCircle(0.60);
  glPopMatrix();
  glPopMatrix();///END

  ///NEW
  glPushMatrix();///STRT-3
  glTranslatef(3.0,2.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.60);
  glPopMatrix();
  glPopMatrix();///END

  glPushMatrix();///STRT-4
  glTranslatef(4.0,2.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.60);
  glPopMatrix();
  glPopMatrix();///END

  ///NEW
  glPushMatrix();///STRT-1
  glTranslatef(7.0,-2.5,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.65);
  glPopMatrix();
  glPopMatrix();///END


  glPushMatrix();///STRT-2
  glTranslatef(7.0,-2.5,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,-0.5,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9,0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.75,-0.39,-7.0);
    drawCircle(0.60);
  glPopMatrix();
  glPopMatrix();///END

  ///NEW
  ///NEW
  //glTranslatef(-13.0,-4.0,-7.0);
  glPushMatrix();
  glTranslatef(-13.0,-4.0,-7.0);
  glPushMatrix();///STRT-1
  glTranslatef(2.0,-0.5,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.65);
  glPopMatrix();
  glPopMatrix();///END


  glPushMatrix();///STRT-2
  glTranslatef(3.5,-1.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,-0.5,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9,0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.75,-0.39,-7.0);
    drawCircle(0.60);
  glPopMatrix();
  glPopMatrix();
  glPopMatrix();///END


  ///NEW

  glPushMatrix();///STRT-1
  glTranslatef(8.0,4.3,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.65);
  glPopMatrix();
  glPopMatrix();///END


  ///Last
  glTranslatef(7.0+6.0,0.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.90);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9,-0.6,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.65);
  glPopMatrix();
  glPopMatrix();///END

  ///NEW
  glTranslatef(7.0+12.0,-3.5,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.85);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,0.5,-7.0);
    drawCircle(0.60);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.75,-0.2,-7.0);
    drawCircle(0.50);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(0.75,0.2,-7.0);
    drawCircle(0.65);
  glPopMatrix();
  glPopMatrix();///END

  ///---------
  glTranslatef(5.0,7.0,-7.0);
  glPushMatrix();
    glTranslatef(0.0,0.0,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.0,-0.5,-7.0);
    drawCircle(0.9);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-0.9,0.2,-7.0);
    drawCircle(0.70);
  glPopMatrix();

  glPushMatrix();
    glTranslatef(-1.75,-0.39,-7.0);
    drawCircle(0.60);
  glPopMatrix();

glPopMatrix();
  //glTranslatef(-19.0,0.0,-7.0);
}

#endif // BACKSCENE_H_INCLUDED
