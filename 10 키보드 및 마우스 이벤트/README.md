## 1. GLUT 콜백
---
### 1.1 GLUT Callback
1. 이벤트 처리 함수정의
2. 이벤트 처리 함수 등록
  
| 함수명  | 설명 |
| --- | --- |
| glutDisplayFunc() | 현재 윈도우에 Display 처리를 위한 콜백 설정 |
| glutMouseFunc() | 현재 윈도우에 Mouse 클릭 처리를 위한 콜백 설정 |
| glutMotionFunc() | 현재 윈도우에 Mouse 이동 처리를 위한 콜백 설정(마우스 이동시 발생)
 |
| glutKeyboardFunc() | 현재 윈도우에 Keyboard 입력 처리를 위한 콜백 설정 |
| glutSpecialFunc() | 현재 윈도우에 특수 Keyboard 입력 처리를 위한 콜백 설정 |
| glutReshapeFunc() | 현재 윈도우의 크기 변경에 대한 Reshape 콜백 설정 |
| glutidleFunc() | 현재 윈도우에 Idle 상태 처리를 위한 콜백 설정 (Idle 상태 처리) |
| glutEntryFunc() | 현재 윈도우에 Mouse Enter / Leave 처리를 위한 콜백 설정 |
| glutTimerFunc() | 현재 윈도우에 타이머 처리를 위한 콜백 설정 |
| glutSetMenu() | 메뉴 설정과 관련된 콜백 기능도 지원
glutAddMenuEntry(), glutAttachMenu(), glutAddSubMenu() 등 |


## 2. 사용자 키보드 입력 jkim에 따라서 좌우상하 사각형을 이동시키는 예제 구현해보기
---
1. j : 좌측이동
2. k : 우측 이동
3. i : 상향 이동
4. m : 하향 이동
5. 소문자만 처리함

## 3. 힌트
---
1. 현재 위치를 지정하는 shift변수 정의하여 활용
2. 화면에 다시 그리는 glutPostRedisplay()활용