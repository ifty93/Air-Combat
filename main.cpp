#include <GL/glu.h>
#include <GL/glut.h>
#include <Windows.h>
#include <Mmsystem.h>
/*-------END Of OpenGL Libs------*/

#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define PI acos(-1.0)
#define EPS 0.000005
#define FL float
#define NL "\n"
#define REP(_i,_n) for(int _i=0;_i<_n;_i++)
#define FOR(_i,_v,_n) for(int _i=_v;_i<=_n;_i++)
#define ALL(typ) typ.begin(),typ.end()
#define READ(tag) freopen(tag,"r",stdin)
#define RITE(tag) freopen(tag,"w",stdout)
using namespace std;

#define MAX_X 5.20
#define MAX_Y 2.90
#define SPACEBAR 32

#include "game.h"
#include "imagehandler.h"
#include "soundhandler.h"
Game game;
SoundHandler gameSound;

/******************************/

/******************************/


///Called when the window is resized
void windowResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

///Draws the 3D scene
void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective

  game.startRender();
  //glutSwapBuffers();
}

void myTimer(int value)
{
	//cout<<"*******is any update?*******\n";
	///Something..
	glutPostRedisplay(); //Tell GLUT that the display has changed

	///Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, myTimer, 0);
}

void enterFullScreen()
{
  glutGameModeString("1024x600:32@60");
	glutEnterGameMode();
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_BLEND);
}

void renderScene(void)
{
	///NOT USED
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//control.renderStart();
	glutSwapBuffers();
}

void processSpecialKeys(int key, int x, int y)
{
	if(game.paused) return;
	switch(key)
	{
    case GLUT_KEY_UP: game.myJet.moveUp(); break;
    case GLUT_KEY_DOWN: game.myJet.moveDown(); break;
    case GLUT_KEY_LEFT: game.myJet.moveLeft(); break;
    case GLUT_KEY_RIGHT: game.myJet.moveRight(); break;
    default: break;
	}
}

static void processKeys(unsigned char key, int x, int y)
{
  if((int)key==SPACEBAR) game.paused^=1;

  if(game.paused) return;
  switch(key)
  {
    case 'q': exit(0); break;
    case 's':
      if(game.myJet.dead) break;
      game.myJet.shoot();
    break;
    default: break;
  }
  glutPostRedisplay();
}

void processMouse(int button, int state, int x, int y)
{
	//if(button == GLUT_LEFT_BUTTON) control.clicked((float)((x/currentWidth)-1), (float) ((y/currentHeight)-1));
}

static void idle(void)
{
    //cout<<"----------NOPE---------\n";
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1280,720);
  glutInitWindowPosition(50,50);

  //enterFullScreen();
	glutCreateWindow("Air Combat");
	glEnable(GL_DEPTH_TEST);
	initializeTexture();


  glutDisplayFunc(display);
	glutReshapeFunc(windowResize);
	glutIdleFunc(idle);
  glutKeyboardFunc(processKeys);
  glutSpecialFunc(processSpecialKeys);
  glutMouseFunc(processMouse);
	//glutTimerFunc(30, myTimer, 0);

	srand(time(0));
	glutMainLoop();
	return 0;
}
