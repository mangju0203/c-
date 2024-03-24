#include <iostream>
using namespace std;

#define PI 3.14
//[Step1] Circle  Ŭ���� ���� �� ����
//--------------------------------------------
// Ŭ������ �������/����Լ� ����(������ ";") 
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
// Ŭ���� ����Լ� ����(�ݵ�� Ŭ����::�Լ���) 
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
	//�������� Ŭ���� ��ü ����/ ���
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
