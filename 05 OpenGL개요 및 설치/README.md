# 

# opengl 개요 및 설치

## 1.설치

### 1.1.OpenGL설치

해당 링크에서

[freeglut Windows Development Libraries](https://www.transmissionzero.co.uk/software/freeglut-devel/)
![image](https://github.com/Jiryeong29/LearnOpenGL-00/assets/52111476/95462ec8-d420-4913-85fd-6d30d582cdfc)


사진과 같은 부분을 다운 받는다

경로는 용이하게 찾기 위해서 C드라이브에 OpenGL폴더를 하나 생성해주었고  `C:/OpenGL/` 에 압축파일을 풀어주었다.

### 1.2. 컴파일러 설정

컴파일러는 visual studio를 사용한다. 버전은 2022버전을 사용하였다.

OpenGL을 실행하기 위해서 컴파일러도 설정을 진행해야한다.

![image](https://github.com/Jiryeong29/LearnOpenGL-00/assets/52111476/fb957f18-f883-4146-8d16-6469e6bf72f5)
`프로젝트 > LearnOpenGL속성(P) > VC++디렉터리` 로 들어가서
![image](https://github.com/Jiryeong29/LearnOpenGL-00/assets/52111476/a7ba95c2-f784-4be6-ad6c-3d2d2f3b3db8)


 `포함디렉터리` 와 `라이브러리 디렉터리` 의 속성을 변경해줘야 한다.

포함 디렉터리 → `C:/OpenGL/include` 

라이브러리 디렉터리 → `C:/OpenGL/lib/x64` 로 설정해주었다.

그리고 반드시 `C:\Windows\System32` 와 `C:\Windows\SysWOW64` 에 `C:\OpenGL\bin\x64` 에 들어있는 `freeglut.dll` 파일을 추가해줘야 한다. 추가해주지 않으면 파일을 실행시킬 때 에러가 날 수 있다.

해당 작업이 끝내면 OpenGL을 정상적으로 실행시킬 수 있다.

## 2. OpenGL구성요소

  

- **GL( OpenGL Core Library)**
    - 렌더링 기능을 제공하는 기본 라이브러리
    - 색상 설정, 정점 지정, 행렬 설정 등을 수행 , 기본 도형 그리기 , 변환, 조명 및 렌더링 덩의 함수를 포함
    - gl.h라는 헤더파일을 사용
    - 기본 라이브러리에서 제공되는 함수들에는 ‘gl’, 상수에는 ‘GL_’이라는 접두사가 붙음
    - gl Prefix로 시작함 : glColor, glVertex, glTranslate, glRotate, …
- **GLU(OpenGL Utility Library)**
    - 고수준의 그리는 함수들로 구성된 라이브러리
    - 시점 설정, 도형 그리는 함수
    - glu.h라는 헤더파일을 사용
    - GLU에서 제공되는 함수들에는 ‘glu’라는 접두사가 붙음
    - glu Prefix로 시작함 : gluLookAt, gluPerspective, gluSphere…
- **GLUT(OpenGL Utility Toolkit)**
    - 운영체제와 상호작용 기능을 제공하는 라이브러리
    - 윈도우 조작, 마우스 연동, 키보드 연동 등을 수행
    - glutPrefix로 시작함 : gluCreateWindow, gluMouseFunc, …
- **GLUAUX(OpenGL Auxiliary Library)**
    - 플랫폼 독립적 윈도우 제어 기능 및 그리는 기능 등을 포함한 라이브러리
    
![image](https://github.com/Jiryeong29/LearnOpenGL-00/assets/52111476/a26e8df7-fc0c-4153-b4c5-4d2aedbb2b32)
## 3. 기타

강의에서는 

```cpp
#include <glut.h>

#include <GL/gl.h>

#include <GL/glu.h>
```

으로 되어있는데 나는 헤더파일이 대문자 소문자가 변경되어있어서 아래와 같이 헤더파일을 추가해주었다. 문제없이 잘 작동한다.

```cpp
#include <glut.h>

#include <gl/GL.h>

#include <gl/GLU.h>
```

[참고 사이트]
[OpenGL 라이브러리](https://blog.naver.com/gongtong/150135569215)    
