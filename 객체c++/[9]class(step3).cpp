//public:
//
//public으로 선언된 멤버들은 클래스 외부에서도 접근이 가능합니다.
//클래스의 인스턴스 또는 객체를 통해 외부에서 해당 멤버에 직접 접근할 수 있습니다.
//주로 클래스의 인터페이스 부분에 사용되며, 외부에서 사용할 수 있는 인터페이스를 정의합니다.

//private:
//
//private으로 선언된 멤버들은 클래스 내부에서만 접근이 가능합니다.
//외부에서는 해당 멤버에 직접 접근할 수 없고, 클래스 내부의 멤버 함수를 통해서만 접근이 가능합니다.
//주로 구현의 세부사항을 숨기고, 외부에서의 오용을 방지하기 위해 사용됩니다.


//protected:
//
//protected로 선언된 멤버들은 해당 클래스와 그 클래스를 상속받은 파생 클래스에서 접근이 가능합니다.
//외부에서는 접근할 수 없지만, 파생 클래스에서는 해당 멤버에 접근이 가능합니다.
//상속 관계에서 사용되며, 기본적으로는 private과 유사한 성격을 가지지만, 
//파생 클래스에서 상속받은 멤버에 접근할 수 있도록 하는 용도로 사용됩니다.

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

int main()
{
	//복수개의 클래스 객체 생성/ 사용
	Circle Circle1;
	Circle1.iRadius = 1;
	cout << "Circle area is " <<  Circle1.GetArea() << endl;
	
	Circle Circle2;
	Circle2.iRadius = 10;
	cout << "Circle area is " <<  Circle2.GetArea() << endl;
	
	Rectangle Rec1;
	Rec1.iWidth = 10;
	Rec1.iHeight = 10;
	cout << "Rec1 area is " <<  Rec1.GetArea() << endl;

	
	Rectangle Rec2;
	Rec2.iWidth = 888;
	Rec2.iHeight = 98;
	cout << "Rec2 area is " <<  Rec2.GetArea() << endl;
	
//	Cube Cub1;
//	Cub1.iWidth = 12;
//	Cub1.iDepth = 99;
//	Cub1.iHeight = 1;
//	cout << "Cub1 area is " <<  Cub1.GetArea() << endl;

//
	cout << endl << endl;
	Cube Cube1;
	cout << "Cube1 volume is " <<  Cube1.GetVolume() << endl;

	cout << endl << endl;
	Cube1.SetSize(5, 7, 6);
	cout << "Changed Cube1 volume is " <<  Cube1.GetVolume() << endl;

	cout << endl << endl;
	Cube Cube2;
	cout << "Cube2 volume is " <<  Cube2.GetVolume() << endl;

	cout << endl << endl;
	Cube2.SetSize(2, 56, 3);
	cout << "Changed Cube2 volume is " <<  Cube2.GetVolume() << endl;	

}
