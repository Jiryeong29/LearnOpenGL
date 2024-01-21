#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>


void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	GLushort pattern[] = { 0xaaaa, 0xaaaa, 0xaaaa,0xaaaa,0x33ff,0x33ff,0x33ff,0x57ff,0x57ff };
	GLint factor[] = { 1,2,3,4,1,2,3,1,2 };
	glEnable(GL_LINE_STIPPLE);
	GLint idx = 0;
	for (float y = 0.8; y > -0.8f; y -= 0.2) {
		glLineStipple(factor[idx], pattern[idx]);
		glBegin(GL_LINES);
		glVertex2f(-0.8, y);
		glVertex2f(0.8, y);
		glEnd();
		idx++;
	}

	glDisable(GL_LINE_STIPPLE);
	glFlush();

}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(512, 256);
	glutCreateWindow("OpenGL Example");

	glutDisplayFunc(MyDisplay);
	
	glutMainLoop();
	return 0;
}