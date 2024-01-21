#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0, 0.5);
	glVertex2f(-0.5, 0.0);
	glVertex2f(0.0, -0.5);
	glVertex2f(0.5, 0.0);

	glEnd();
	glFlush();
}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Example");

	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}