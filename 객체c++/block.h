#include <iostream>
using namespace std;

#define PI 3.14
//[Step1] Circle  클래스 선언 및 구현
//--------------------------------------------
// 클래스의 멤버변수/멤버함수 선언(마지막 ";") 
class Circle
{
public:
	int iRadius;
	float GetArea(); 
};

class Rectangle
{
public:
	int iWidth, iHeight;
	int GetArea();
};

class Cube
{
private:
	int iWidth;
	int iHeight;
	int iDepth;
public:
	// 생성자 (1) 오직 한 번만 실행
	//		  (2) 여러 개의 생성자 함수 사용 가능
	//        (3) 클래스명과 동일 이름/ 리턴타입 없음
	//        (4) 객체 초기화(멤버변수 초기화/특정값, 메모리 동적 할당)
	Cube();
	Cube(int x, int y, int z);
	
	// 소멸자 (1) 오직 한 번만 실행
	//		  (2) 오직 한 개의 소멸자 함수 사용가능 
	//        (3) "~클래스명"과 동일 이름/ 리턴타입 없음
	//        (4) 객체 해제에 따른 마무리(멤버변수 초기화/특정값, 메모리 동적 할당해제)
	~Cube();
	
	int GetVolume();	 
	void SetSize(int x, int y, int z);
};
//---------------------------------------------

//---------------------------------------------
// 클래스 멤버함수 구현(반드시 클래스::함수명) 
float Circle::GetArea()
{
	return PI*iRadius*iRadius;
}
//---------------------------------------------

int Rectangle::GetArea()
{
	return iWidth*iHeight;
}

int Cube::GetVolume()
{
	return iWidth*iHeight*iDepth;
}

Cube::Cube()
{
	iWidth = 10;
	iHeight = 10;
	iDepth = 10;
}

Cube::Cube(int x, int y, int z)
{
	iWidth = x;
	iHeight = y;
	iDepth = z;
}

Cube::~Cube()
{
	iWidth = 0;
	iHeight = 0;
	iDepth = 0;
}


void Cube::SetSize(int x, int y, int z)
{
	iWidth = x;
	iHeight = y;
	iDepth = z;
}


