#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	GLfloat valuef[4] = { 0.0, };
	GLint valuei[4] = { 0, };

	printf("Before\n");
	glGetFloatv(GL_CURRENT_COLOR, valuef);
	printf("Color %.2f %.2f %.2f\n", valuef[0], valuef[1], valuef[2]);
	
	glGetIntegerv(GL_POINT_SIZE	, valuei);
	printf("Point Size %d \n", valuei[0]);

	glGetIntegerv(GL_LINE_WIDTH	, valuei);
	printf("Line Width %d \n", valuei[0]);

	glColor3f(1.0, 1.0, 0.0);
	glLineWidth(2);
	glPointSize(2);

	printf("After\n");
	glGetFloatv(GL_CURRENT_COLOR, valuef);
	printf("Color %.2f %.2f %.2f\n", valuef[0], valuef[1], valuef[2]);


	glGetIntegerv(GL_POINT_SIZE, valuei);
	printf("Point Size %d \n", valuei[0]);

	glGetIntegerv(GL_LINE_WIDTH, valuei);
	printf("Line Width %d \n", valuei[0]);


	glutWireTeapot(0.2);
	glFlush();

}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(300, 300); // 윈도우 크기
	glutInitWindowPosition(300, 300); // (300,300) 위치에 윈도우
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	
	glutCreateWindow("OpenGL Example");

	glutDisplayFunc(MyDisplay);
	
	glutMainLoop();
	return 0;
}