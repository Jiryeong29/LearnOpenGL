# OpenGL 기본요소 및 도형

## 1. 그래픽스의 기본요소(Graphics Primitive)

---

- 점(Point), 선(Line), 삼각형(Triangle) ,다각형(Polygon), 문자(Character)
- 외양
    - 패턴 색상, 두께
        
        ![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/f3c2b067-add2-4cd8-9bb4-4cd4267bb7fb/Untitled.png)
        

## 1.1. GL Graphics Primitive

- void glBegin(GLenum mode);
    - 매개변수 mode :정점들로부터 생성할 GL Primitives를 명시
- void glEnd(void);

```cpp
	glBegin(GL_POINTS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0f, 0.0f, 0.0f); // point #1
```

| Primitives | 설명 |
| --- | --- |
| GL_POINTS | 독립적인 점 |
| GL_LINES | 두 개의 정점들을 연결한 선분 |
| GL_LINE_STRIP | 모든 정점들을 연결한 선분 (시작점과 끝점은 단절) |
| GL_LINE_LOOP | 모든 정점들을 연결한 선분 (시작점과 끝점을 연결) |
| GL_TRIANGLES | 세 개의 정점들을 연결한 삼각형 |
| GL_TRIANGLE_STRIP  | 연속된 세 개의 정점들을 연결한 연결된 삼각형 |
| GL_TRIANGLE_FAN  | 중심을 공유하는 삼각형 |
| GL_QUADS | 네 개의 정점들을 연결한 사각형 |
| GL_QUAD_STRIP | 연속된 네 개의 정점들을 연결한 연결된 사각형 |
| GL_POLYGON | 연결된 다각형 |

## 2. gl및 glut좌표계

---

### 2.1. 화면 좌표계

- 특별히 Viewport등 지정하지 않으면 윈도우 중앙이 원점
- x축의 범위는 -1~1까지
- y축의 범위는 -1~1까지
    
    ![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/0104449c-0dac-4ae2-8999-739ab3004a7e/9596bc93-c974-4611-834f-3eb401c6b6fc/Untitled.png)