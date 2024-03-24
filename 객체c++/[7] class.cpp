#include <iostream>
using namespace std;

#define PI 3.14
//[Step1] 
//--------------------------------------------
// 클래스의 멤버변수/멤버함수 선언(마지막 ";") 
class Circle
{
public:
	int iRadius;
	float GetArea(); 
};
//---------------------------------------------

//---------------------------------------------
// 클래스 멤버함수 구현(반드시 클래스::함수명) 
float Circle::GetArea()
{
	return PI*iRadius*iRadius;
}
//---------------------------------------------

int main()
{
	//복수개의 클래스 객체 생성/ 사용
	// Circle 클래스의 두 개의 객체가 생성됨 
	Circle Circle1;
	// 각 객체의 멤버 변수에 값이 할당됩니다 
	Circle1.iRadius = 1;
	cout << "Circle area is " <<  Circle1.GetArea() << endl;
	
	Circle Circle2;
	Circle2.iRadius = 10;
	cout << "Circle area is " <<  Circle2.GetArea() << endl;
}
