#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glutWireTeapot(0.2);
	glFlush();
}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(250, 250); // 윈도우 크기
	glutInitWindowPosition(300, 300); // (300,300) 위치에 윈도우
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	
	glutCreateWindow("OpenGL Example");
	glutSetWindowTitle("Updated OpenGL Example");

	int screenWidth, screenHeight;
	int windowWidth, windowHeight;
	int windowX, windowY;

	// Properties
	screenWidth = glutGet(GLUT_SCREEN_WIDTH);	// 화면 너비
	screenHeight = glutGet(GLUT_SCREEN_HEIGHT);	// 화면 크기
	windowWidth = glutGet(GLUT_WINDOW_WIDTH);	// 윈도우 너비
	windowHeight = glutGet(GLUT_WINDOW_HEIGHT); // 윈도우 크기

	windowX = glutGet(GLUT_INIT_WINDOW_X); // 윈도우 X 좌표
	windowY = glutGet(GLUT_INIT_WINDOW_Y); // 윈도우 Y 좌표

	printf("Screen Size Info: %d %d \n", screenWidth, screenHeight);
	printf("Window Size Info: %d %d \n", windowWidth, windowHeight);
	printf("Window Pos : %d %d \n", windowX, windowY);

	glutDisplayFunc(MyDisplay);
	
	glutMainLoop();
	return 0;
}