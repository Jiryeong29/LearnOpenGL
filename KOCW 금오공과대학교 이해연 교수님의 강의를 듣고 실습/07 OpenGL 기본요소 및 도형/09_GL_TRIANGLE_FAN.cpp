#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_FLAT);

	glBegin(GL_TRIANGLE_FAN);

	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.0, 0.5, 0.0);
	glVertex3f(-0.35, 0.35, 0.0);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-0.5, 0.0, 0.0);


	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-0.35, -0.35, 0.0);


	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(0.0, -0.5, 0.0);

	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(0.35, -0.35, 0.0);



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