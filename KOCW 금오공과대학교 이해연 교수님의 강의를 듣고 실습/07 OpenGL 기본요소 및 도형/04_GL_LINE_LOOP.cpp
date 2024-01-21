g#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(2.0); 
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.0f, 0.5f, 0.0f); // point #1
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(-0.5f, -0.5f, 0.0f); // point #2
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(0.5f, -0.5f, 0.0f); // point #3
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