#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glutWireTeapot(0.5);
	glFlush();
}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(100, 100);

	
	glutCreateWindow("OpenGL Example");
	glutSetWindowTitle("Updated OpenGL Example");

	glutDisplayFunc(MyDisplay);
	
	glutMainLoop();
	return 0;
}