# 

# OpenGL 기본

## 1. OpenGL명령어 기본적인 구조

**ex) glVertex3f(x,y,z)**

- gl : GL함수
- Vertex :함수/ 명령종류
- 3 : 매개변수 수
- f : 매개변수 타입
- (x,y,z) : 매개변수

### OpenGl API종류에 따른 함수명

- GL OpenGL Core Library       :    glColor3f(1.0, 1.0, 1.0)
- GLU OpenGL Utility Library   :    gluSphere(obj, 1.0, 50, 50)
- GLUT OpenGL Utility ToolKit :    glutCreateWindow(”OpenGL Example”)

## 2. OpenGL 데이터 형식

- OpenGL 데이터 타입 : C++/C와 OpenGL형식 상호 호환

| suffix | 설명 | C++ / C형식 | OpengGL 형식 |
| --- | --- | --- | --- |
| i | 32비트 | int | GLint |
| f | 32비트 부동소수점 | float | GLfloat |
| d | 64비트 부동소수점 | double | GLdouble |
| b | 8비트 정수 | char | GLbyte |
| ub | 8비트 양의 정수 | unsigned char | GLubyte |
| ui | 32비트 양의 정수 | unsigned int | GLuint |

## 3. gl함수

---

### 3.1. Vertex

```cpp
void glVertex2i ( GLint x, GLint y );
void glVertex2f ( GLfloat x, GLfloat y );
...
void glVertex3i ( GLint x, GLint y, GLint z );
void glVertex3f ( GLfloat x, GLfloat y, GLfloat z );
...
```

- 매개 변수
    
    
    | 변수명 | 설명 |
    | --- | --- |
    | x, y, z, w | x, y, z, w 점의 좌표를 지정합니다. |

```cpp
void glVertex2iv ( const GLint *v );
void glVertex2fv ( const GLfloat *v );
...
void glVertex3iv ( const GLint *v );
void glVertex3fv ( const GLfloat *v );
...
void glVertex4iv ( const GLint *v );
void glVertex4fv ( const GLfloat *v );
```

- 매개변수
    
    
    | 변수명 | 설명 |
    | --- | --- |
    | v | 2~4개의 요소를 갖고 있는 배열의 포인터를 지정합니다.요소가 2개일 경우는 x·y, 3개일 경우는 x·y·z, 4개일 경우는 x·y·z·w에 해당합니다. |

### 3.2. 색상(color) 지정

```cpp
void glColor3i ( GLint red, GLint green, GLint blue );
void glColor3f ( GLfloat red, GLfloat green, GLfloat blue );
...
void glColor4f ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
void glColor4d ( GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha );
...
```

- 매개변수
    
    
    | 변수명 | 설명 |
    | --- | --- |
    | red, green, blue | 변경할 색의 red, green, blue 값을 지정합니다. |
    | alpha | 변경할 색의 투명도를 지정합니다. |

### 3.3. 프레임 버퍼 및 배경 색

```cpp
void glClear ( GLbitfield mask );
```

- 매개변수
    
    
    | 변수명 | 설명 |
    | --- | --- |
    | mask | 초기화할 버퍼들을 OR 비트 연산으로 입력합니다.버퍼의 종류에는 
    GL_COLOR_BUFFER_BIT, GL_DEPTH_BUFFER_BIT, GL_STENCIL_BUFFER_BIT 3가지가 있습니다. |
- GL_COLOR_BUFFER_BIT : 현재 활성화된 컬러 버퍼
- GL_DEPTH_BUFFER_BIT : 깊이 버퍼
- GL_STENCIL_BUFFER_BIT  : 스텐실 버퍼

```cpp
void glClearColor ( GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha );
```

- 매개변수
    
    
    | 변수명 | 설명 |
    | --- | --- |
    | red, green, blue, alpha | 색상 버퍼가 초기화된 상태일 때 각각 red, green, blue, alpha 값을 지정합니다.기본값은 0입니다. |

```cpp
void glFlush ( void );
```

⇒ 요청된 모든 명령을 즉시 실행하고 프레임 버퍼등을 비움

## 4. glut 함수

---

### 4.1. 윈도우 초기화 및 기본 관리 함수

####  **윈도우 초기화**

| glutInit() | GLUT 라이브러리 초기화 및 윈도우와 운영체제를 세션 연결 |
| --- | --- |
| glutInitDisplayMode() | 윈도우 컬러 모드 설정 |
| glutlnitWindowPosition() | 윈도우 위치 설정 (x,y) |
| glutlnitWindowSize() | 윈도우 크기 설정 (가로 ,세로 크기) |

#### 윈도우 관리

| glutCreateWindow() | 새로운 윈도우 생성 |
| --- | --- |
| glutSetWindowTitle  | 윈도우 타이틀 생성 |
| glutReshapeWindow | 크기 변경에 따른 윈도우 조정 |
| glutMainLoop | GLUT 이벤트 반복 처리 시작 |
| glutPostRedisplay | 현재 창 또는 지정된 창의 디스플레이를 재호출 |
| glutSwapBuffers | 이중 버퍼 모드에서 현재 창의 사용 버퍼를 교체 |

#### 윈도우 정보

| glutGet() | GLUT 상태값을 획득 |
| --- | --- |

### 4.2. glut 윈도우 초기화 함수

- glutInitDisplayMode()
    - 매개변수 : mode “디스플레이모드”의 종류값
- glutInitDisplayMode()의 mode
    - 색상 모델 상수
        - GLUT_RGBA : RGPA창을 생성하며, glut의 기본 색상 모드
        - GLUT_INDEX : 인덱스 색상모드로 설정
    - 버퍼모드
        - GLUT_SINGLE : 단일버퍼 창을 생성
        - GLUT_DOUBLE : 이중버퍼 창을 생성. 부드러운 애니메이션을 위해 활용
    - 특정버퍼활용
        - GLUT_ACCUM : 누적 버퍼
        - GLUT_STENCIL : 스텐실 버퍼
        - GLUT_DEPTH : 깊이 버퍼
    - 활용 : OR 연산을 적용
        - glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH  );

### 4.3 윈도우 정보

```cpp
int gluGet(GLenum state);
```

### 4.5. 이벤트 기반 프로그래밍

- Event :키보드 타이핑, 마우스 클릭, 마우스 이동, 네트워크 패킷 도착
- EventHadler : Callback (콜백)

### 4.6. glut 콜백 등록 함수
| 함수명  | 설명 |
| --- | --- |
| glutDisplayFunc() | 현재 윈도우에 Display 처리를 위한 콜백 설정 |
| glutMouseFunc() | 현재 윈도우에 Mouse 클릭 처리를 위한 콜백 설정 |
| glutMotionFunc() | 현재 윈도우에 Mouse 이동 처리를 위한 콜백 설정(마우스 이동시 발생) |
| glutKeyboardFunc() | 현재 윈도우에 Keyboard 입력 처리를 위한 콜백 설정 |
| glutSpecialFunc() | 현재 윈도우에 특수 Keyboard 입력 처리를 위한 콜백 설정 |
| glutReshapeFunc() | 현재 윈도우의 크기 변경에 대한 Reshape 콜백 설정 |
| glutidleFunc() | 현재 윈도우에 Idle 상태 처리를 위한 콜백 설정 (Idle 상태 처리) |
| glutEntryFunc() | 현재 윈도우에 Mouse Enter / Leave 처리를 위한 콜백 설정 |
| glutTimerFunc() | 현재 윈도우에 타이머 처리를 위한 콜백 설정 |
| glutSetMenu() | 메뉴 설정과 관련된 콜백 기능도 지원 glutAddMenuEntry(), glutAttachMenu(), glutAddSubMenu() 등 |

## 5. gl 함수 : 상태 변수 정보 획득

- glGet..()함수
    - 상태 머신(State Machine) 내부의 상태 테이블 값을 변경 (색상, 점 크기, 선 너비 등
    - 상태 테이블 값은 그래픽스 파이프라인의 처리 과정에서 참조하여 활용
- 상태변수 설정
    - glColor3f(R,G, B);
    - glPointSize(0.5);
    - cglLineWidth(2);
- 상태변수 검색
    - GLfloat value[3];
    - glGetFloatV(GL_CURRENT_COLOR, value);
- 기능 활성화
    - glEnable(GL_LIGHTING);
    - glDisable(GL_LIGHTING);

```cpp
void glGetFloatv(GLenum pname, GLfloat *data);
```

```cpp
void glGetIntegerv(GLenum pname, GLint *data); 
```

- 매개변수
    - pname :획득하기 위한 파라미터 값의 종류를 명시
    - data : 지정한 파라미터 값 또는 값들을 반환받을 변수의 주소
- pname
    - GL_CURRENT_COLOR : 현재 설정된 색상의 RGBA값 (4채널)
    - GL_COLOR_CLEAR_VALUE: 프레임 버퍼를 초기화하기 위한 색상의 RGBA값 (4채널)
    - GL_CULL FACE: C++ Culling Enable/Disable(Boolean)
    - GL_CULL_FACE_MODE: Culling 모드 (GL_BACK, GL_FRONT, GL_FRONT_AND_BACK)
    - L_DOUBLEBUFFER : 더블 버퍼링을 지원하는지 여부 (Boolean)
    - L_LINE_WIDTH: Line의 Width를 나타내는 값
    - GL_POINT_SIZE : Point의 Size를 나타내는 값

## 기타

---

https://monochromelux.github.io/opengl/#GLUT
