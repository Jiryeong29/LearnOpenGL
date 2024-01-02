#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.8f, 0.1f);
	glVertex2f(-0.2f, 0.1f);
	glVertex2f(-0.2f, 0.7f);
	glVertex2f(-0.8f, 0.7f);


	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2f(-0.7f, -0.6f);
	glVertex2f(-0.1f, -0.6f);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.7f, 0.0f);

	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.9f, -0.7f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, -0.7f);
	glColor3f(0.2f, 0.2f, 0.2f);
	glVertex2f(-0.5f, -0.3f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.9f, -0.3f);
	glEnd();

	glBegin(GL_TRIANGLES); // Each set of 3 vertices form a triagle
	glColor3f(0.0f, 0.0f, 1.0f); // Blue 
	glVertex2f(0.1f, -0.6f);
	glVertex2f(0.7f, -0.61);
	glVertex2f(0.4f, -0.1f);
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.3f, -0.4f);
	glColor3f(0.0f, 1.0f, 0.0f); // Green
	glVertex2f(0.9f, -0.4f);
	glColor3f(0.0f, 0.0f, 1.0f); // Blue
	glVertex2f(0.6f, -0.9f);
	glEnd();

	glBegin(GL_POLYGON); // These vertices form a close polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.6f, 0.2f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.4f, 0.6f);
	glVertex2f(0.3f, 0.4f);

	glEnd();
	glFlush();
}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(300, 300);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutCreateWindow("OpenGL Example");

	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}