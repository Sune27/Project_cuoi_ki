#include <bits/stdc++.h>
#include <GL/glut.h>

#include "Bird.h"
#include "Clock.h"
#include "House.h"
#include "SinglePendulum.h"
using namespace std;

void display() 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(5.0, 4.0, 5.0,  // eyeX, eyeY, eyeZ
			  0.0, 0.0, 0.0,  // centerX, centerY, centerZ
			  0.0, 0.0, 1.0);  // upX, upY, upZ
  
	setColor(GREEN);
	House house;
	house.drawRoof();
  
	glFlush();
	glutSwapBuffers(); 
}
  
void reshape(int w, int h) 
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 0.1, 100.0); 
  
}

void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
		case 27:
			exit(0);
			break;
		default:
			printf("phim %d duoc nhan\n", (int)key);
	}
}
  
int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); 
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutInitWindowPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);
	glutCreateWindow("Project");
	printf("%d, %d, %d, %d\n", WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_POSITION_X, WINDOW_POSITION_Y);
  
	glEnable(GL_DEPTH_TEST); 
  
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboardFunc);
	glutReshapeFunc(reshape);

	glutMainLoop();
  
	return 0;
}
	
