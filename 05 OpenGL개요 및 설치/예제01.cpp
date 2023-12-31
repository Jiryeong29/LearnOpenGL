#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

void MyDisplay() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSolidTeapot(0.5);
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