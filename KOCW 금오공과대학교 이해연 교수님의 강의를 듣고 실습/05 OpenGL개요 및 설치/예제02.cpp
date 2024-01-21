#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

void MyDisplay() 
{
	// gl 헤더파일에 들어가 있는 함수를 호출
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	// float 타입의 정점들의 값을 넣어줌
	// 원래는	glColor3f(1.0f, 0.0f, 0.0f);이런식으로f를 붙여줘야 함
	// 붙여주지 않으면 컴파일러는 double타입으로 인식
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glEnd();
	glFlush();
}



int main(int argc, char* argv[])
{
	// glu 헤더파일에 들어가 있는 함수를 호출 주로 window와 관련됨 키보드 마우스 관련 처리
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Example");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}