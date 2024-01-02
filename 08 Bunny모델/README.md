## 1. Stanford Bunny 모델

- 미국 Stanford 대학교에서 만든 데이터
- https://en.wikipedia.org/wiki/Stanford
- BunnyModel.h 사용해서 실습코드 진행
    - short face_indiies[16301][6] = {}; //삼각형 정점 인덱스 [0][1][2] 및 법선 인덱스 [3] [4] [5]
    - Glfloat normal [8127][3] = {...} // 법선벡터(xy, z)
    - lfloat vertices [8146][3] = { ... }; // 정점 정보(xy, z)
    - 점(vertices) 개수는 총 8146개가 존재하고 (xy, z) 좌표로 구성
    - 법선 벡터(nomals) 개수는 8126개가 존재하며 (x, y, z) 좌표로 구성
    - 총 16,301개의 삼각형 면이 존재
 
## 기타
BunnyModel.h 이 없어서.. 실습을 못했다..
