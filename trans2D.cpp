
#include <stdlib.h>
#include <iostream>
#include<stdio.h>
using namespace std;
#include <GL/glut.h>
#include<math.h>
#include "a.h"
//#include "ogl.h"
void display();
void idle();
void display1();
void keyboard( unsigned char key, int x, int y );
void mouse( int button, int state, int x, int y );

int	WIDTH = 512;
int	HEIGHT = 512;
int	FILLED = 1;
float	rotatetyre = 0.0;
float	movingfactorx = 0.01, movingfactory = 0.01, movingcirclex=-9.0, movingcircley = 0.0;
float	tmx = 0.0, tmy = 0.0;

int main( int argc, char **argv )
{
	//Initializations related to GLUT
	glutInit( &argc, argv );
//	glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
//	glutInitWindowSize( WIDTH, HEIGHT );
	glutCreateWindow( "Transformations in 2D" );
	//Telling Glut about which function does what
	glutDisplayFunc( display );
	glutIdleFunc( display );
	glutKeyboardFunc( keyboard );
	glutMouseFunc( mouse );
	//glViewport( 0, 0, WIDTH, HEIGHT );
		//For Time being assume this is Magic
		glMatrixMode( GL_PROJECTION );
			glLoadIdentity();
			gluOrtho2D ( 0, 512, 0, 512 );
			glMatrixMode( GL_MODELVIEW );
				glLoadIdentity();

	//Setting the OpenGL Init State.

	//Following command decides how much part of window to be used for rendering.
	oglViewport( 0, 0, WIDTH, HEIGHT );
	//For Time being assume this is Magic
//	glMatrixMode( GL_PROJECTION );
	oglMLoadIdentity();
	oglOCamera ( -10.0, 10.0, -10.0, 10.0,-10.0,10.0 );

	//Your transformation are controlled by the following Matrix
//	glMatrixMode( GL_MODELVIEW );
	oglVLoadIdentity();
	display();
//	sleep(100);	
//	sleep(100);	
	glutMainLoop();

	return 0;
}
void display()
{
	oglMLoadIdentity();
	oglVLoadIdentity();

	oglMPushMatrix();
	oglMTranslate(2,4,0);
	oglMScale(1.5,1);
	oglClear( 0.0f, 0.0f, 0.0f);
	oglColour ( 1.0, 0.0, 0.0 );
	oglMRotate(90,3);
	oglBegin(OGL_TRIANGLES);
	oglVertex ( 0.0, 5,0.0 );
	oglVertex ( -5, 0.0,0.0 );
	oglVertex ( 5, 0.0,0.0 );
	oglEnd ();
	oglMPopMatrix();
	oglColour ( 0.0, 1.0, 0.0 );
	oglBegin(OGL_TRIANGLES);
	oglVertex ( 0.0, 5,0.0 );
	oglVertex ( -5, 0.0,0.0 );
	oglVertex ( 5, 0.0,0.0 );
	oglEnd ();
	oglMRotate(-90,3);
	oglColour ( 0.0, 0.0, 1.0 );
	oglBegin(OGL_TRIANGLES);
	oglVertex ( 0.0, 5,0.0 );
	oglVertex ( -5, 0.0,0.0 );
	oglVertex ( 5, 0.0,0.0 );
	oglEnd ();
	oglShow();
	glutSwapBuffers();
}

void keyboard( unsigned char key, int x, int y )
{
	if( key==27 )
		exit( 0 );
	else if ( key == '1' )
		FILLED = 1 - FILLED;
}

void mouse( int button, int state, int x, int y )
{
    if ( state == GLUT_UP  )
    {
	tmx = ((float) x / (float) WIDTH)*20.0 - 10.0;
	tmy = -1 * (((float) y / (float) HEIGHT )*20.0  - 10.0);
	//oglPrint();
	//cout << x << " " << y << endl;
    }
    
   // glutPostRedisplay();
}

