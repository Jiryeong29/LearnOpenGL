![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/0b85830f-d495-44d2-860f-ee20b4ee7d04/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/f2acd625-d24d-48db-82a7-02681c1b56d4/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/39ee4f9b-b781-4805-a54e-3a4c680e0ec5/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/15f7cbfe-892b-477c-984b-c052fd2f0680/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/70dd6dd4-2b95-4932-bc26-3cfbfa5b015d/Untitled.png)

```jsx
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0f, 0.0f, 0.0f); // point #1
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.5f, 0.0f, 0.0f); // point #2
	glColor3f(0.0, 0.0, 3.0);
	glVertex3f(0.0f, 0.5f, 0.0f); // point #3

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

```

```jsx
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(2.0); //선의 두께 설정
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0f, 0.0f, 0.0f); // point #1
	glVertex3f(0.5f, 0.0f, 0.0f); // point #2
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.0f, 0.5f, 0.0f); // point #3
	glVertex3f(0.5f, 0.5f, 0.0f); // point #3

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
```

```jsx
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(2.0); 
	glBegin(GL_LINE_STRIP);
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
```

```jsx
#include <glut.h>
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
```

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/884de616-9a0e-482a-a61e-4bc3ce0cdb0c/Untitled.png)

```jsx
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include <stdio.h>

void drawOneLine(float x1, float y1, float x2, float y2) {
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glLineWidth(2.0); 

	glEnable(GL_LINE_STIPPLE);
	glLineStipple(1, 0x0101);
	drawOneLine(-0.8, 0.8, 0.8, 0.8);
	glLineStipple(1, 0x00FF);
	drawOneLine(-0.8, 0.6, 0.8, 0.6);
	glLineStipple(1, 0x1C47);
	drawOneLine(-0.8, 0.4, 0.8, 0.4);

	glLineWidth(5.0);
	glLineStipple(1, 0x0101);
	drawOneLine(-0.8, 0.1, 0.8, 0.1);
	glLineStipple(1, 0x00FF);
	drawOneLine(-0.8, -0.1, 0.8, -0.1);
	glLineStipple(1, 0x1C47);
	drawOneLine(-0.8, -0.3, 0.8, -0.3);

	glLineStipple(5, 0x1C47);
	drawOneLine(-0.8, -0.7, 0.8, -0.7);

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
```

```jsx
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
```

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/0835088d-ccb5-4414-bd03-568bba3bb751/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/474721b5-0cdb-4fb7-82a5-367d5288c207/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/358c899a-e038-4e9e-a574-cde9e0b14af6/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/80beecf4-477a-4d5d-aa24-3fad0c02b755/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/475db3af-f402-4376-9d38-02fdd1f6412e/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/912fea40-2a42-44b8-95e4-3f7163ed2fa0/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/6d7164b0-67aa-4512-84f7-aecda935bf37/Untitled.png)