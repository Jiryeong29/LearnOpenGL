.![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/4a89284a-cfb0-4d3c-94e2-0d4362ee3c40/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/d00765ff-92b9-4ee0-a50d-a3b08995d327/Untitled.png)

glVectex3f끝에 v가 있으면 vector

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/f50b9b0f-b9ad-45d7-8dcc-7a2db283d597/Untitled.png)

c++orC형식과 OpenGL형식은 상호호완적

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/7762f145-0145-438c-a12f-1bcdb956a786/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/88994fec-ab27-426a-9f42-521dd308061d/Untitled.png)

대문자의 경우 c++에서 미리정의되어있는 상수값

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/41ca955d-f38f-46e0-a17c-fb7de1c7f9c3/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/66f01bd8-5641-4a70-8b01-01b8a7ecc6a2/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/a1619455-9fe3-45df-b62c-49f4672bc5bd/Untitled.png)

```jsx
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
```

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/bbd088da-4f88-4f09-be36-67554c7f81fb/Untitled.png)

```jsx
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
```

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/0e44b354-1f17-46ee-8a76-0a9027dcfc0e/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/f0dbf8b3-72d0-4371-8c0e-0033dc56de7f/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/510a63f3-0b10-4aba-b990-33c1f917d43c/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/3192a890-c2db-4c4e-bcac-6ecbad68b2f1/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/2a93e748-c2b3-4e85-9cec-83d86195744b/Untitled.png)

```jsx
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
```