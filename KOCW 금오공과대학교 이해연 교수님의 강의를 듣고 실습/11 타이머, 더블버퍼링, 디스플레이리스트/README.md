## 1. 타이머 콜백 등록 함수

```cpp
void glutTimerFunc(unsigned int msecs, void (*func)(int value), value);

```

**매개변수**

- msecs : 타이머 콜백 호출 전에 경과해야 하는 밀리초(milliseconds) 시간
- func : 호출할 타이머 이벤트 처리 콜백 함수
- value : 타이머 이벤트 처리시에 전달할 값
- 리턴값 없음

**특징**

- 1회성 타이머로 반복적으로 호출할 필요가 있음
- 1000msec= 1초
- cvalue: Timer 번호 구분에 활용

## 2. 숫자 카운트 다운 (10~0까지) 코드

```cpp

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

```

## 3. 사각형 우측 이동 코드

- 문제설명 : 사각형을 좌측에서 우측으로 0.005씩,0.1초마다 이동
- HINT :
    - 0.1초 : 100msec
    - Delta변수 활용하여 0.005씩 증가

```cpp
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <stdio.h>

GLfloat Delta = 0.0;
void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); 
	glColor3f(0.0, 0.5, 0.8);
	glBegin(GL_POLYGON);
	glVertex3f(-1.0 + Delta, -0.5, 0.0);
	glVertex3f(0.0 + Delta, -0.5, 0.0);
	glVertex3f(0.0 + Delta, 0.5, 0.0);
	glVertex3f(-1.0 + Delta, 0.5, 0.0);

	glEnd();
	glFlush();
}

void MyTimer(int Value){

	Delta =  Delta + 0.005;
	glutPostRedisplay();
	glutTimerFunc(100, MyTimer, 1);
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Example");
	glutDisplayFunc(MyDisplay);
	glutTimerFunc(100, MyTimer, 1);
	glutMainLoop();
	return 0;
}
```

## 4. Bunny모델 z축 회전

- 문제설명 : bunny 모델을 0.1초마다 5도씩 회전
- 힌트 :
    - 0.1초 : 100msec
    - zRotate 변수 활용하여 5씩 증가
    - 
    
    ```cpp
    bunny.h가 없음..
    ```
    

## 5. 단일버퍼링

**단일버퍼링**

- GLUT SINGLE
- 프레임버퍼 읽고 쓰는 장치 및 속도가 다름
- 미완성 그림, 화면출력지연

## 6. 더블버퍼링

- GLUT DOUBLE
- 프레임 버퍼를 2개 활용하여 문제 해결 (Front Buffer, Back Buffer)
- 두 프레임 버퍼 접근을 교환하는 방법 : glutSwapBuffers()

## 7. OpenGl실행모드

### 7.1. 즉시 모드 (Immediate mode)

- 물체를 화면에 렌더링한 후에 모든 정보를 즉시 파기함
- 화면을 다시 그리려면 모든 코드를 처음부터 다시 실행 필요

### 7.2. 보류 모드 (Retained mode)

- 사전에 정의된 물체 정보를 컴파일하여 메모리에 유지하여 사용
- 화면을 그릴때 이미 메모리에 정의된 물체 정보를 재사용하여 속도 향상 c OpenGL의 보류 모드는 디스플레이 리스트를 활용

## 8. 디스플레이 리스트

### 8.1. 디스플레이 리스트

- 반복적으로 실행할 그리는 요소들을 정의하여 컴파일된 형태로 재사용
- 프로그램 속도 향상에 필수적
- 포함사항 : 기본요소, 상태변수(색상, 선두께 등), 영상, 이동, 회전, 조명 등 관련 명령어

### 8.3. 디스플레이 활용 순서

- glGenLists(): ID 생성
- glNewList(): 디스플레이 리스트 생성
- glEndList(): 디스플레이 리스트 생성 종료
- cglCallList(): 디스플레이 리스트 실행 (호출)

```cpp
GLuint glGenLists (GLsizei range)
```

**매개변수**

- range : 생성할 연속적인 디스플레이 리스트 ID 개수 → 보통 1을 넣어서 하나의 ID를 생성함

**리턴값**
생성한 디스플레이 리스트 ID들의 시작값 (작은값) - 0: 디스플레이 리스트 생성 실패를 의미

```cpp

void glNewList(GLuint list, GLenum mode)
```

**매개변수**

- list : 새롭게 생성할 디스플레이 리스트 ID를 지정 (glGenLists 리턴값을 지정_)
- mode : 생성 과정에서 컴파일 모드를 지정
- GL_COMPILE : 명령어를 단지 컴파일만 수행
GL_COMPILE_AND_EXECUTE: 명령어를 컴파일하고 실행도 수행
- **리턴값 없음**

```cpp
 void glEndList(); // 매개변수 x 리턴값 x
```

```cpp
 void glCallList(GLuint list);
```

**매개변수**

- list : 실행할 디스플레이 리스트 ID 를 지정
- 리턴값 없음

```cpp
- 리턴값 없음

void glDeleteLists(GLuint list, GLsizei range)
```

**매개변수**

- list : 삭제할 디스플레이 리스트의 최초 ID를 지정 (glGenLists 리턴값을 지정)
- range : 해당 ID부터 증가하는 방향으로 삭제할 개수 지정
- 리턴값 없음

### 디스플레이 리스트 사각형 출력 예

```cpp
#include <glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <stdio.h>

GLuint g_objectID = -1;
GLint GenerateCalIList()
{
	GLint lid = glGenLists(1);
	glNewList(lid, GL_COMPILE);
	glColor3f(1.0f, 1.0f, 0.0f); 
	glBegin(GL_POLYGON);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
		glEnd();
	glEndList();
	return lid;
}
void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	// Call Display Lists 
	glCallList(g_objectID);
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL. Example");
	g_objectID = GenerateCalIList();
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}
```