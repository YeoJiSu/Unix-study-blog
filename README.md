# 🦄 Unix-study-blog
> ### 부산대학교 2학년 1학기 권준호 교수님의 『유닉스기초』 강의의 실습 내용을 정리한 저장소입니다.

<br>


# 📁 1. C 프로그래밍 : 구조체의 배열
### 📌 내용
리눅스에 들어가기에 앞서, C 언어로 프로그램을 구현했다. 

학생들의 성적 순위를 알려주는 프로그램을 구현한다. 한 학생은 한국어, 수학, 영어 및 컴퓨터등 4 개의 과목 성적을 가진다. 이를 위해 각 학생의 과목별 성적을 프로그램에 입력하고, 총점을 계산한다. 학생의 총점에 따라 내림차순으로 정렬하여 학생들의 순위를 계산한다.

<br><br>

# 📁 2. 리눅스 설치 및 명령어 실습
### 📌 내용
본격적으로 리눅스에 대해 학습을 시작한다.

UNIX 시스템 환경을 학습하기 위해서 리눅스를 설치하여 사용한다. 
VMware(나 가상머신 지원 소프트웨어는 다 가능)에 리눅스를 설치한다. 
- ssh 클라이언트를 이용하여 VMWare 에 설치한 리눅스에 접속.
- ssh 서버 등의 설정.
- ssh 클라이언트로 Xshell 사용.

<br><br>


# 📁 3. 리눅스 명령어 실습
### 📌 내용
수업 때 배운 리눅스 명령어를 실습하여 보고서에 내용을 첨부한다.

<br><br>


# 📁 4. 분할 컴파일과 Makefile 실습 
### 📌 내용
리눅스 환경에서 Makefile을 사용하여 분할 컴파일 방법을 실습해 본다.

각 파일에 대해 설명해보면 아래와 같다.
- Add.c: implement Addfunc()
- Minus.c : implement Minusfunc()
- Multi.c : implement Multifunc()
- Divide.c : implement Dividefunc()
- Calculator.h: header file
- Calculator.c: it is a main file including main() and test codes

### 🎥 영상
해당 코드를 어떻게 리눅스에서 실행했는지에 대해 본인이 직접 설명하는 영상이다.
* [코드 설명에 대한 영상](https://photos.app.goo.gl/2eLAFPniiHoaTaJb8)

<br><br>


----
> ### 5번 과제 부터는 [datalab-pnu](https://github.com/datalab-pnu) organization의 GitHub Classroom 으로 부터 생성된 template을 clone 받아 과제를 수행했다. 5,6,7 과제 모두 전화번호 관리 프로그램을 만드는데 7차시로 갈수록 더 upgrade 된 프로그램을 작성해나간다.
----

<br><br>


# 📁 5. 구조체 배열
### 📌 주요 코드 디렉토리 구조 

```bash
├── makefile
├── phone.h
├── phoneBookMain.c
├── register.c
├── search.c
├── print.c
└── delete.c
``` 
### 📌 설명
[전화번호 관리 프로그램의 동작 설명](https://github.com/YeoJiSu/Unix-study-blog/blob/main/5/README.md)

### 📌 포크한 해당 GitHub Classroom 
[unix-hw5-YeoJiSu](https://github.com/YeoJiSu/unix-hw5-YeoJiSu)

<br><br>

# 📁 6. 함수 포인터와 void 포인터
### 📌 주요 코드 디렉토리 구조 

```bash
├── makefile
├── phone.h
├── hw6Main.c
├── register.c
├── search.c
├── print.c
├── delete.c
└── sort.c # 추가된 부분.
``` 
### 📌 설명
전화번호 분류 기능이 추가 된 [전화번호 관리 프로그램의 동작 설명](https://github.com/YeoJiSu/Unix-study-blog/blob/main/6/README.md)

### 📌 포크한 해당 GitHub Classroom 
[unix-hw6-YeoJiSu](https://github.com/YeoJiSu/unix-hw6-YeoJiSu)

<br><br>

# 📁 7. 자기 참조 구조체와 공유 라이브러리
### 📌 주요 코드 디렉토리 구조 

```bash
├── makefile
├── phone.h
├── hw7Main.c
├── register.c
├── search.c
├── print.c
├── delete.c
└── Test # 공유라이브러리 테스트를 위해 추가된 디렉토리와 그 하위 코드들ㄴ
    ├── Makefile
    ├── main.c
    ├── div.c
    ├── div.h
    ├── mult.c
    ├── multi.h
    ├── sum.c
    └── sum.h 
``` 

### 📌 설명
공유라이브러리를 활용한 [전화번호 관리 프로그램의 동작 설명](https://github.com/YeoJiSu/Unix-study-blog/blob/main/7/README.md)

### 📌 포크한 해당 GitHub Classroom 
[unix-hw7-YeoJiSu](https://github.com/YeoJiSu/unix-hw7-YeoJiSu)

