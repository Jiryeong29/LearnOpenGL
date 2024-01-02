#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <stdio.h>


float xShift = 0;
float yShift = 0;

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0); 
	glBegin(GL_POLYGON);

	glVertex3f(-0.5 + xShift, -0.5 + yShift, 0.0); 
	glVertex3f(0.5 + xShift, -0.5 + yShift, 0.0); 
	glVertex3f(0.5 + xShift, 0.5 + yShift, 0.0); 
	glVertex3f(-0.5 + xShift, 0.5 + yShift, 0.0);
	glEnd();
	glFlush();
}


void MyKeyboard(unsigned char KeyPressed, int X, int Y)
{
	switch (KeyPressed)
	{
	case 'Q':
		exit(0); break;
	case 'q':
		exit(0); break;
	case 'i':
		yShift += 0.1; break;
	case 'm':
		yShift -= 0.1; break;
	case 'j':
		xShift -= 0.1; break;
	case 'k':
		xShift += 0.1; break;
	}
	glutPostRedisplay(); // CHA
}


int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Example");

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutMainLoop();
	return 0;
}