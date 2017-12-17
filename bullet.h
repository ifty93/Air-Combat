#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

class Bullet
{
  public:
    float heroSpeed;
    float enemySpeed;
    float posX, posY;

    Bullet();
    void drawHeroBullet();
    void drawEnemyBullet();
};

Bullet::Bullet()
{
  posX=posY=0.0;
  heroSpeed=0.015;
  heroSpeed=0.020;
  //heroSpeed=0.006;
  enemySpeed=0.015;
}

void Bullet::drawHeroBullet()
{
  posX+=heroSpeed;

  glPushMatrix();
    glTranslatef(posX,posY,-7.0);
    glColor3f(0.133, 0.545, 0.133);
      glBegin(GL_POLYGON);
      glVertex3f(0.0,+0.07,0.0);
      glVertex3f(0.0,-0.07,0.0);
      glVertex3f(0.30,+0.0,0.0);
    glEnd();
  glPopMatrix();
}

void Bullet::drawEnemyBullet()
{
  posX-=enemySpeed;
  glPushMatrix();
    glTranslatef(posX,posY,-7.0);

    glColor3f(1, 0.270, 0);
    glBegin(GL_POLYGON);
      glVertex3f(0.0,+0.07,0.0);
      glVertex3f(0.0,-0.07,0.0);
      glVertex3f(-0.30,+0.0,0.0);
    glEnd();
  glPopMatrix();
}

#endif // BULLET_H_INCLUDED
