#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.25f, 0.25f);
	glVertex2f(0.5f, 0.0f);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(-0.5f, 0.0f);
	glVertex2f(-0.75f, 0.5f);
	glVertex2f(-0.25f, 0.0f);

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