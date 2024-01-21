
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <stdio.h>
GLint countDown = 10;
void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); glFlush();
}
void MyTimer(int Value)
{
	printf("%d\n", countDown);
	if (countDown > 0)
		glutTimerFunc(1000, MyTimer, 1);
	countDown--;
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Example");
	glutDisplayFunc(MyDisplay);
	glutTimerFunc(1000, MyTimer, 1);
	glutMainLoop();
	return 0;
}
