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


}
