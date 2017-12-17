#ifndef FIGHTER_H
#define FIGHTER_H

class Fighter
{
  public:
    Fighter();
    void drawHeroGreen();
    void drawEnemyRed();
};

Fighter::Fighter()
{
  ///Empty
}

void Fighter::drawEnemyRed()
{
// Fighter 02 begins
    glRotated(90, 0, 0, 1);

    glPushMatrix();
    //glTranslatef(X, Y, 0.0);
    glScaled(0.25, 0.25, 0.0);

    glPushMatrix();

	/// EXTRA TWEAK

	glPushMatrix();

    glTranslatef(-0.37, 0.4, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.37, 0.37, 0.37);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();


    glTranslatef(-0.03, 0.43, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.37, 0.37, 0.37);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.06, 0.0, 0.0);
	glVertex3f(-0.00, 0.17, 0.0);
	glVertex3f(-0.06, 0.17, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslatef(-0.39, 0.43, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.37, 0.37, 0.37);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.06, 0.0, 0.0);
	glVertex3f(-0.00, 0.17, 0.0);
	glVertex3f(-0.06, 0.17, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslatef(-0.31, 0.47, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.35, 0.35, 0.35);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.25, 0.13, 0.0);
	glVertex3f(-0.05, 0.13, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.21, 0.33, 0.0);

    glBegin(GL_POLYGON);
    glColor3f(0.2, 0.2, 0.2);
	for(int i = 0; i < 200 ; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 100;
		float x = .17 * cos(A);
		float y = .17 * sin(A);
		glVertex2f(x, y );
	}
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.21, 0.33, 0.0);

    glBegin(GL_POLYGON);
    glColor3f(0.56, 0.55, 0.55);
	for(int i = 0; i < 200 ; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 100;
		float x = .2 * cos(A);
		float y = .2 * sin(A);
		glVertex2f(x, y );
	}
	glEnd();

	glPopMatrix();

	/// EXTRA TWEAK ENDS

	// overall tweaks

	glPushMatrix();

    glTranslatef(-1.47, 0.57, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.96, 0.51, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.96, 0.57, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.02 ,1.68, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.71, 1.68, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.29, 1.29, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.4, 0.0);
	glVertex3f(0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.99, 1.29, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.4, 0.0);
	glVertex3f(0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.38, 1.29, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.4, 0.0);
	glVertex3f(0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.71, 1.29, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.4, 0.0);
	glVertex3f(0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.41, 1.29, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.45, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.29, 1.29, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.45, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.09, -1.95, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.35, 0.31, 0.0);
	glVertex3f(0.3, 0.31, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.54, -1.95, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.35, 0.31, 0.0);
	glVertex3f(0.3, 0.31, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.81, -1.92, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.53, 0.5, 0.0);
	glVertex3f(0.48, 0.5, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.29, -1.95, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.53, 0.5, 0.0);
	glVertex3f(0.48, 0.5, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.29, -1.95, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(0.8, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.03, -1.95, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(0.8, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.42, 0, 0.0);
	glRotated(180, 0, 1, 0);

	glPushMatrix();

    glTranslated(0.27, 0.57, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.3, 0.54, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.33, 0.51, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.36, 0.48, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.39, 0.45, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.55, 0.0, 0.0);
	glVertex3f(0.55, 0.049, 0.0);
	glVertex3f(0.0, 0.049, 0.0);
	glEnd();

	glPopMatrix();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.27, 0.57, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.3, 0.54, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.33, 0.51, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.36, 0.48, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.39, 0.45, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.55, 0.0, 0.0);
	glVertex3f(0.55, 0.049, 0.0);
	glVertex3f(0.0, 0.049, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.44, 0.45, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 0.049, 0.0);
	glVertex3f(0.0, 0.049, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.41, -1.34, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.84, 0.26, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.07, 0.0, 0.0);
	glVertex3f(0.12, 0.15, 0.0);
	glVertex3f(0.05, 0.15, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.38, 0.26, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.07, 0.0, 0.0);
	glVertex3f(0.12, 0.15, 0.0);
	glVertex3f(0.05, 0.15, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.14, 0.26, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.32, 0.0, 0.0);
	glVertex3f(1.32, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.9, 0.26, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.32, 0.0, 0.0);
	glVertex3f(1.32, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.1, -1.8, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(-0.64, 0.7, 0.0);
	glVertex3f(-0.69, 0.7, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.64, -1.8, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(-0.6, 0.7, 0.0);
	glVertex3f(-0.65, 0.7, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0, -1.3, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(-0.16, 1.9, 0.0);
	glVertex3f(-0.21, 1.9, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.42, -1.3, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(-0.16, 1.9, 0.0);
	glVertex3f(-0.21, 1.9, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.68, 0.44, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(-0.03, 0.82, 0.0);
	glVertex3f(-0.08, 0.82, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-2.14, 0.44, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(-0.03, 0.82, 0.0);
	glVertex3f(-0.08, 0.82, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslated(-0.48, 0, 0.0);
	glRotatef(180, 0.0, 1.0, 0.0);

	glPushMatrix();  /// TO

    glTranslated(0.96, 0.42, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.92, 0.46, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.88, 0.5, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.84, 0.54, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.8, 0.56, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.76, 0.58, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();      /// from here

	glPopMatrix();

	glPushMatrix();  /// TO

    glTranslated(0.96, 0.42, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.92, 0.46, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.88, 0.5, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.84, 0.54, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.8, 0.56, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.76, 0.58, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();      /// from here

	glPushMatrix();

    glTranslated(-1.24, 0.6, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(2, 0.0, 0.0);
	glVertex3f(2, 0.05, 0.0);
	glVertex3f(0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-2.22, 1.26, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(3.98, 0.0, 0.0);
	glVertex3f(3.981, 0.05, 0.0);
	glVertex3f(-0.01, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-2.16, 0.4, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.7, 0.0, 0.0);
	glVertex3f(0.7, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1, 0.4, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.7, 0.0, 0.0);
	glVertex3f(0.7, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.68, 0.44, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.35, 0.0, 0.0);
	glVertex3f(0.35, 0.05, 0.0);
	glVertex3f(0.007, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-2.12, 0.44, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.35, 0.0, 0.0);
	glVertex3f(0.35, 0.05, 0.0);
	glVertex3f(0.007, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-2.16, 0.8, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.32, 0.0, 0.0);
	glVertex3f(0.32, 0.05, 0.0);
	glVertex3f(0.005, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(1.7, 0.8, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.32, 0.0, 0.0);
	glVertex3f(0.32, 0.05, 0.0);
	glVertex3f(0.005, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-2.52, 0.5, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.3, 0.0);
	glVertex3f(0.0, 0.3, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(2.02, 0.5, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.3, 0.0);
	glVertex3f(0.0, 0.3, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.76, 1.44, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.32, 0.0);
	glVertex3f(0.0, 0.32, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.28, 1.44, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.05, 0.0, 0.0);
	glVertex3f(0.05, 0.32, 0.0);
	glVertex3f(0.0, 0.32, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.72, 1.389, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.72, 1.76, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	// ends

	// head

	glPushMatrix();

    glTranslated(-1.05, 1.87, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.5, 0.25, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(0.8, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.18, 1.87, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.5, 0.25, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(0.8, 0.05, 0.0);
	glVertex3f(0.0, 0.05, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.25, 1.8, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.4, 0.2, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.07, 0.0, 0.0);
	glVertex3f(0.07, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.72, 1.4, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.9, 0.9, 0.9);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.62, 1.31, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(0.8, .08, 0.0);
	glVertex3f(0.0, .08, 0.0);
	glEnd();

	glPopMatrix();

	// head end

	// wing part

	glPushMatrix();

    glTranslated(0.8, 0.45, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.85, 0.0, 0.0);
	glVertex3f(0.9, .4, 0.0);
	glVertex3f(0.2, .4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-1.26, 0.46, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.85, 0.0, 0.0);
	glVertex3f(0.9, .4, 0.0);
	glVertex3f(0.2, .4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.23, 0.61, 0.0);
    glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.9, 0.0, 0.0);
	glVertex3f(2.0, .7, 0.0);
	glVertex3f(0.0, .7, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.23, 0.61, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.55, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.9, 0.0, 0.0);
	glVertex3f(2.0, .7, 0.0);
	glVertex3f(0.0, .7, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.87, 0.45, 0.0);
    glRotated(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.6, 0.0, 0.0);
	glVertex3f(1.6, .4, 0.0);
	glVertex3f(0.0, .4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(2.02, 0.45, 0.0);
    glRotated(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.6, 0.0, 0.0);
	glVertex3f(1.6, .4, 0.0);
	glVertex3f(0.0, .4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(-0.58, 0.3, 0.0);
    glRotated(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.42, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.3, 0.0, 0.0);
	glVertex3f(1.4, .4, 0.0);
	glVertex3f(0.04, .4, 0.0);
	glEnd();

	glPopMatrix();

	glPushMatrix();

    glTranslated(0.14, 0.3, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.42, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.3, 0.0, 0.0);
	glVertex3f(1.4, .4, 0.0);
	glVertex3f(0.04, .4, 0.0);
	glEnd();

	glPopMatrix();


	// wing part ends

    // tail

     glPushMatrix();

    glTranslated(-0.42, -1.3, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.6, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.6, 2.0, 0.0);
	glVertex3f(-0.2, 2.0, 0.0);
	glEnd();

	glPopMatrix();

    glPushMatrix();

    glTranslated(-0.7, -1.35, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.56, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.96, 0.0, 0.0);
	glVertex3f(0.48, 0.5, 0.0);
	glEnd();

	glPopMatrix();

    glPushMatrix();

    glTranslated(0.85, -1.95, 0.0);
    glRotated(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.56, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(1.4, 0.6, 0.0);
	glVertex3f(0.6, 0.6, 0.0);
	glEnd();

	glPopMatrix();

    glPushMatrix();

    glTranslated(-1.3, -1.95, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(0.56, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.8, 0.0, 0.0);
	glVertex3f(1.4, 0.6, 0.0);
	glVertex3f(0.6, 0.6, 0.0);
	glEnd();

	glPopMatrix();
    // tail ends

    glPushMatrix();

    glTranslatef(-0.26, -1.69, 0.0);
    //glRotatef(180, 0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.05, -0.5, 0.0);
	glEnd();

	glPopMatrix();

    glPopMatrix();

    glPopMatrix();

// Fighter 02 ends
}


void Fighter::drawHeroGreen()
{
// Jet Fighter Drawing Begins
// --------------------------
  glRotated(90, 0, 0, -1);

    glPushMatrix();

    //glTranslatef(X, Y, 0.0);
	glScaled(0.25, 0.25, 0.0);
	//glRotated(ANGLE, 0.0, 1.0, 0.0);

	glPushMatrix();

	/// wing tweaks

	glPushMatrix();

	glTranslatef(-1.49, 0.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.53, 0.0, 0.0);
	glVertex3f(1.53, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2, 0.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(2.55, 0.0, 0.0);
	glVertex3f(2.55, 1, 0.0);
	glVertex3f(0.0, 1, 0.0);

	glEnd();

	glPopMatrix();


	/// wing tweaks end

	/// smoother

	glPushMatrix();
	glTranslatef(-0.21, 0, 0.0);
	glRotated(180, 0.0, 1.0, 0.0);

	glPushMatrix();

	glTranslatef(-0.36, 2.31, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.39, 2.28, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.43, 2.23, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.48, 2.19, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.51, 2.13, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.54, 2.07, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.57, 2.01, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.6, 1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.63, 1.91, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.63, 1.86, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();
    glPopMatrix();



	glPushMatrix();
	glPushMatrix();

	glTranslatef(-0.36, 2.31, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.39, 2.28, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.43, 2.23, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.48, 2.19, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.51, 2.13, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.54, 2.07, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.57, 2.01, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.6, 1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.63, 1.91, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.63, 1.86, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();
    glPopMatrix();




	glPushMatrix();
	glTranslatef(-0.18, 0, 0.0);
	glRotated(180, 0.0, 1.0, 0.0);

	glPushMatrix();

	glTranslatef(-0.27, 1.83, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.33, 1.77, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.45, 1.59, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.3, 1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.36, 1.74, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.39, 1.68, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();
	glPopMatrix();


    glPushMatrix();
	glPushMatrix();

	glTranslatef(-0.27, 1.83, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.33, 1.77, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.45, 1.59, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.3, 1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.36, 1.74, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.39, 1.68, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();
	glPopMatrix();





	glPushMatrix();
	glTranslatef(-0.21, 0, 0.0);
	glRotated(180, 0.0, 1.0, 0.0);

	glPushMatrix();

	glTranslatef(-0.69, -0.39, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.63, -0.63, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.54, -0.87, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.45, -1.08, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.36, -1.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();


	glPopMatrix();




	glPushMatrix();

	glPushMatrix();

	glTranslatef(-0.69, -0.39, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.63, -0.63, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.54, -0.87, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.45, -1.08, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.36, -1.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();


	glPopMatrix();


	/// smoother ends

	/// Extra polish

	glPushMatrix();

	glTranslatef(-0.5, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.45, -1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.55, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.6, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.65, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.7, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.75, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.8, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.85, -1.75, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.9, -1.75, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.95, -1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.4, -1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.35, -1.55, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();


	glPushMatrix(); /// secret
	glTranslatef(-0.2, 0, 0.0);
	//glScalef(0.5, 0.5, 0.0);
    glRotated(180.0, 0.0, 1.0, 0.0);

    //sdsdasd

    glPushMatrix();

	glTranslatef(-0.5, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.45, -1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.55, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.6, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.65, -1.65, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.7, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.75, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.8, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.85, -1.75, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.9, -1.75, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.95, -1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.4, -1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.35, -1.55, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

    //sdadsds

	glPushMatrix();

	glTranslatef(-1, -1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.05, -1.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.1, -1.9, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.15, -1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.2, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();  /// secret ends



	glPushMatrix(); /// secret

	glPushMatrix();

	glTranslatef(-1, -1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.05, -1.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.1, -1.9, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.15, -1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.2, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();  /// secret ends

	glPushMatrix();

	glTranslatef(-1.24, -2.06, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(2, 0.0, 0.0);
	glVertex3f(2, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.03, -2.06, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(2, 0.0, 0.0);
	glVertex3f(2, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();


	/// Extra polish ends

	// cannon tweaks

	glPushMatrix();

	glTranslatef(1.15, 1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.65, 1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(1.44, 0.96, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(1.12, 0.96, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.36, 0.96, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.68, 0.96, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	// cannon tweaks end

	// cannons

	glPushMatrix();

	glTranslatef(-1.64, 0.97, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.49, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(1.16, 0.97, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.35, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();


	// cannons end

	//center 4

	glPushMatrix();

	glTranslatef(0.28, 2.04, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.16, 1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.42, 1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.06, 2.46, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.32, 2.46, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.96, 2.44, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.25, 0.0);
	glVertex3f(0.0, 0.25, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.72, 2.44, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.25, 0.0);
	glVertex3f(0.0, 0.25, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.92, 2.52, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glVertex3f(1.5, 0.11, 0.0);
	glVertex3f(0.0, 0.11, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.02, 2.52, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.5, 0.0, 0.0);
	glVertex3f(1.5, 0.11, 0.0);
	glVertex3f(0.0, 0.11, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.92, 2.4, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.2, 0.0, 0.0);
	glVertex3f(1.2, 0.11, 0.0);
	glVertex3f(0.0, 0.11, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.12, 2.4, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.2, 0.0, 0.0);
	glVertex3f(1.2, 0.11, 0.0);
	glVertex3f(0.0, 0.11, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.22, 1.86, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.55, 0.0, 0.0);
	glVertex3f(0.55, 0.11, 0.0);
	glVertex3f(0.0, 0.11, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.36 ,2.36, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 0.11, 0.0);
	glVertex3f(0.0, 0.11, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.2,-1.68, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.35, 0.0, 0.0);
	glVertex3f(0.35, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.24, -2.19, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.54, 0.0, 0.0);
	glVertex3f(0.54, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.03, -2.16, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

    glPushMatrix();

	glTranslatef(-0.24, -2.16, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

	//center 4 ends

	//wings 3

	glPushMatrix();

	glTranslatef(2.1, 0.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.25, 0.0);
	glVertex3f(0.0, 1.25, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.34 ,0.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.25, 0.0);
	glVertex3f(0.0, 1.25, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.24, 0.86, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(3.05, 0.0, 0.0);
	glVertex3f(3.05, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.49, 0.86, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(3.1, 0.0, 0.0);
	glVertex3f(3.1, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.59, 0.15, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.75, 0.0, 0.0);
	glVertex3f(1.75, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.5, 0.15, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.75, 0.0, 0.0);
	glVertex3f(1.75, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	// wings 3 ends

	// centre 2

	glPushMatrix();

	glTranslatef(-0.32, -1.52, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.45, 0.0);
	glVertex3f(0.0, 0.45, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.06, -1.52, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.45, 0.0);
	glVertex3f(0.0, 0.45, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.24, -1.06, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.45, 0.0);
	glVertex3f(0.0, 0.45, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.34, -0.84, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.4, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.51, 0.0);
	glVertex3f(0.0, 0.51, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.12, -1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.51, 0.0);
	glVertex3f(0.0, 0.51, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.4, -1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.51, 0.0);
	glVertex3f(0.0, 0.51, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.5, -1.06, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.45, 0.0);
	glVertex3f(0.0, 0.45, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.58, -0.84, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.51, 0.0);
	glVertex3f(0.0, 0.51, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.36, -0.84, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.1, 0.0, 0.0);
	glVertex3f(1.1, 0.13, 0.0);
	glVertex3f(0.0, 0.13, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.16, -0.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.13, 0.0, 0.0);
	glVertex3f(0.13, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.24, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.55, 0.0);
	glVertex3f(0.0, 0.55, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.42, -0.78, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.13, 0.0, 0.0);
	glVertex3f(0.13, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.22, 1.32, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.6, 0.0);
	glVertex3f(0.0, 0.6, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.48, 1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.6, 0.0);
	glVertex3f(0.0, 0.6, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.48, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.55, 0.0);
	glVertex3f(0.0, 0.55, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.66, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.54, -0.34, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 3.35, 0.0);
	glVertex3f(0.0, 3.35, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.3, -0.34, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 3.35, 0.0);
	glVertex3f(0.0, 3.35, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.38, 1.38, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.66, 1.38, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.44, -0.34, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 3.5, 0.0);
	glVertex3f(0.0, 3.5, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-0.72, -0.34, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 3.5, 0.0);
	glVertex3f(0.0, 3.5, 0.0);

	glEnd();

	glPopMatrix();

	// centre 2 ends


	// wing tweaks 2

	glPushMatrix();

	glTranslatef(2.04, 0.32, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.3, 0.0);
	glVertex3f(0.0, 1.3, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.3, 0.32, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.3, 0.0);
	glVertex3f(0.0, 1.3, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.34, 0.92, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(3.3, 0.0, 0.0);
	glVertex3f(3.3, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.5, 0.92, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(3.3, 0.0, 0.0);
	glVertex3f(3.3, 0.12, 0.0);
	glVertex3f(0.0, 0.12, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.4, 0.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.3, 0.0);
	glVertex3f(0.0, 1.3, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(2.14, 0.28, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.12, 0.0, 0.0);
	glVertex3f(0.12, 1.3, 0.0);
	glVertex3f(0.0, 1.3, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(2.1, 0.2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.34, 0.22, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(1.38, 0.16, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.45, 0.0, 0.0);
	glVertex3f(1.45, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-2.3, 0.16, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.45, 0.0, 0.0);
	glVertex3f(1.45, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(0.5, 0.1, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.8, 0.0, 0.0);
	glVertex3f(1.8, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslatef(-1.6, 0.1, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0, 0, 0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.8, 0.0, 0.0);
	glVertex3f(1.8, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	// wing tweaks ends

	// front tweaks.....

	glPushMatrix(); //////////////////

	glTranslatef(-0.92, 2.44, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.65, .65, .65);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.3, 0.0, 0.0);
	glVertex3f(1.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.08, 2.44, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.5, .5, .5);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.3, 0.0, 0.0);
	glVertex3f(1.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix();

	glTranslated(-0.2, 0.0, 0.0);
	glRotatef(180, 0.0, 1.0, 0.0);

	glPushMatrix(); //////////////////

	glTranslatef(-0.34, 2.36, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.5, .5, .5);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.28, 2.4, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.5, .5, .5);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.3, 0.0);
	glVertex3f(0.0, 0.3, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.18, 2.4, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.5, .5, .5);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPopMatrix();

	glPushMatrix(); //////////////////

	glTranslatef(-0.34, 2.36, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.65, .65, .65);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.28, 2.4, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.65, .65, .65);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.3, 0.0);
	glVertex3f(0.0, 0.3, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.18, 2.4, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.63, .63, .63);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	// from tweaks ends....

	// CENTER TWEAK glColor3f(.16, .48, .16);  glColor3f(.04, .28, .04);

	glPushMatrix(); //////////////////

	glTranslatef(-0.1, 1.64, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.32, .6, .68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.18, 1.76, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.24, 1.48, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.28, 1.32, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.14, 1.72, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.6, 1.48, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.54, 1.6, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.64, 1.32, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.48, 1.72, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.42, 1.78, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.36, 1.86, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.24, 1.9, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.1, 1.9, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.02, 1.86, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.16, 1.64, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.08, 1.78, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.22, 1.32, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.04, .28, .04);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.58, 1.32, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(.16, .48, .16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.24, 0.24, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.3, 0.0);
	glVertex3f(0.0, 0.3, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.24, 1, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.14, 1.08, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.14, 0.32, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.26, 0.0, 0.0);
	glVertex3f(0.26, 0.23, 0.0);
	glVertex3f(0.0, 0.23, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

    glPushMatrix(); //////////////////

	glTranslatef(0.0, 0.94, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.26, 0.0, 0.0);
	glVertex3f(0.26, 0.23, 0.0);
	glVertex3f(0.0, 0.23, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, 0.18, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.25, 0.0, 0.0);
	glVertex3f(0.25, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, 0.88, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, 0.1, 0.0); //0 0.88
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.1, -0.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.5, 0.55, 0.0);
	glVertex3f(0.0, 0.55, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.5, 0.55, 0.0);
	glVertex3f(0.0, 0.55, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, -0.34, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 0.95, 0.0);
	glVertex3f(0.0, 0.95, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, 0.38, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 1.06, 0.0);
	glVertex3f(0.0, 1.06, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.0, 1.15, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.32, 0.6, 0.68);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 1.5, 0.0);
	glVertex3f(0.0, 1.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.5, 1.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.47, 0.71, 0.78);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.6, 0.0, 0.0);
	glVertex3f(1.6, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.7, -0.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 3.5, 0.0);
	glVertex3f(0.0, 3.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.3, -0.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.25, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 3.5, 0.0);
	glVertex3f(0.0, 3.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix();

	glPushMatrix(); //////////////////

	glTranslatef(-0.65, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.55, -0.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.45, -1.05, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.35, -1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.3, -1.55, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.4, -1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.6, -1.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.75, -1.9, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.85, -1.9, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-1, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.25, -1.7, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.25, -1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.25, -1.1, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.6, 0.0);
	glVertex3f(0.0, 0.6, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.75, -1.75, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.95, -1.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-1.1, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-1.05, -1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-1.15, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix(); //////////////////


	glPopMatrix();

	//////////////////you want me here

	glPushMatrix();

	glTranslated(-0.2, 0, 0.0);

	glRotated(180, 0.0, 1.0, 0.0);

	glPushMatrix(); //////////////////

	glTranslatef(-0.65, -0.6, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.55, -0.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.45, -1.05, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.35, -1.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.3, -1.55, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.4, -1.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.6, -1.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 0.5, 0.0);
	glVertex3f(0.0, 0.5, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.75, -1.9, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-0.85, -1.9, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(-1, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.4, 0.0);
	glVertex3f(0.0, 0.4, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPopMatrix();

	glPushMatrix(); //////////////////

	glTranslatef(0.8, -2, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.75, -1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.4, -1.75, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.6, -1.85, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //////////////////

	glTranslatef(0.7, -1.95, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.3, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.3, 0.2, 0.0);
	glVertex3f(0.0, 0.2, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPopMatrix();

	// CENTER TWEAK ENDS

	// WINGS TWEAK

	glPushMatrix(); //.......................

	glPushMatrix();

	glTranslatef(-2.3, 0.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //.......................

	glTranslatef(-0.5, 0.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 3.6, 0.0);
	glVertex3f(0.0, 3.6, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPopMatrix();

	glPushMatrix(); //.......................

	glTranslated(-0.2, 0, 0.0);
	glRotated(180, 0.0, 1.0, 0.0);

	glPushMatrix();

	glTranslatef(-2.3, 0.35, 0.0);
	glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.35, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.6, 0.0, 0.0);
	glVertex3f(0.6, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPushMatrix(); //.......................

	glTranslatef(-0.5, 0.8, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.03, 0.35, 0.03);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 3.6, 0.0);
	glVertex3f(0.0, 3.6, 0.0);

	glEnd();

	glPopMatrix(); //////////////////

	glPopMatrix();

	glPushMatrix(); // ...............

	glPushMatrix();

	glTranslatef(-0.5, 0.25, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 2.0, 0.0);
	glVertex3f(0.0, 2.0, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix(); // ...............

	glTranslatef(-1.5, 0.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 1.6, 0.0);
	glVertex3f(0.0, 1.6, 0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();

	glPushMatrix(); // right wings tweak

	glTranslated(-0.2, 0, 0.0);
	glRotated(180.0, 0.0, 1.0, 0.0);

	glPushMatrix();

	glTranslatef(-0.5, 0.25, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 2.0, 0.0);
	glVertex3f(0.0, 2.0, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix(); // ...............

	glTranslatef(-1.5, 0.3, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 1.6, 0.0);
	glVertex3f(0.0, 1.6, 0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();


	// WINGS TWEAK ENDS

	// AJAIRA BEGINS......

	glPushMatrix();//.................

	glTranslated(0.0, 0.0, 0.0);

	glPushMatrix();

	glTranslatef(0.14, 1.05, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

    glPushMatrix();//....................

	glTranslatef(0.14, 0.98, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	 glPushMatrix();//....................

	glTranslatef(0.21, 0.91, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();//....................

	glTranslatef(-0.42, 0.98, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();//....................

	glTranslatef(-0.49, 0.91, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();

	// AJAIRA ENDS


	// AJAIRA 2 Begins

	glPushMatrix();//.................

	glTranslated(0, -0.77, 0.0);

	glPushMatrix();

	glTranslatef(0.14, 1.05, 0.0);
	glScalef(0.5, 0.5, 0.0);
	glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

    glPushMatrix();//....................

	glTranslatef(0.14, 0.98, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	 glPushMatrix();//....................

	glTranslatef(0.21, 0.91, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();//....................

	glTranslatef(-0.42, 0.98, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPushMatrix();//....................

	glTranslatef(-0.49, 0.91, 0.0);
	//glScalef(0.5, 0.5, 0.0);
	//glRotated(90.0, 0.0, 0.0, 1.0);

	glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.0, 0.1, 0.0);

	glEnd();

	glPopMatrix();

	glPopMatrix();

	// AJAIRA 2 ends

	// tail part3 begins...............

	glPushMatrix();

	glTranslatef(-0.21, -2.17, 0.0);
	glScalef(0.5, 0.5, 0.0);

	glBegin(GL_POLYGON);

	glColor3f(0.16, 0.48, 0.16);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.2, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);;

	glVertex3f(0.2, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 1.0, 0.0);
	glVertex3f(0.2, 1.0, 0.0);

	glEnd();

	glPopMatrix();


	// tail part 3 ends

	// tail part.......................

	glPushMatrix();

	glTranslatef(-0.3, -1.8, 0.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.4, 0.0, 0.0);
	glVertex3f(0.4, 1.0, 0.0);
	glVertex3f(0.0, 1.0, 0.0);

	glEnd();

	glPopMatrix();

	// tail part ends

	// tail part2.............................

	glPushMatrix();

	glTranslatef(-1.2, -2.0, 0.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(2.1, 0.0, 0.0);
	glVertex3f(1.1, 0.6, 0.0);

	glEnd();

	glPopMatrix();

	// tail part2 ends.



	// center ..............................

	glPushMatrix();
	glTranslatef(-0.5, -0.8, 0.0);
	glScaled(0.8, 0.8, 0.0);

	glBegin(GL_POLYGON);

	glColor3f(0.46, 0.71, 0.78);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0);
	glVertex3f(1.0, 3.0, 0.0);
	glVertex3f(0.0, 3.0, 0.0);

	glEnd();
	glPopMatrix();

	// center ends.......

	// left wing..........................

	glPushMatrix();
	glTranslatef(0.3, 0.2, 0.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.8, 0.0, 0.0);
	glVertex3f(1.8, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	// left wing ends here

	// right wing..........................

	glPushMatrix();
	glTranslatef(-2.3, 0.2, 0.0);

	glBegin(GL_POLYGON);

	glColor3f(0.06, 0.33, 0.06);

	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.8, 0.0, 0.0);
	glVertex3f(1.8, 0.7, 0.0);
	glVertex3f(0.0, 0.7, 0.0);

	glEnd();

	glPopMatrix();

	// right wing ends here

	glPopMatrix();
// Jet Fighter Drawing Ends
// --------------------------
}

#endif // FIGHTER_H

