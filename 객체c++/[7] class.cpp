#include <iostream>
using namespace std;

#define PI 3.14
//[Step1] 
//--------------------------------------------
// Ŭ������ �������/����Լ� ����(������ ";") 
class Circle
{
public:
	int iRadius;
	float GetArea(); 
};
//---------------------------------------------

//---------------------------------------------
// Ŭ���� ����Լ� ����(�ݵ�� Ŭ����::�Լ���) 
float Circle::GetArea()
{
	return PI*iRadius*iRadius;
}
//---------------------------------------------

int main()
{
	//�������� Ŭ���� ��ü ����/ ���
	// Circle Ŭ������ �� ���� ��ü�� ������ 
	Circle Circle1;
	// �� ��ü�� ��� ������ ���� �Ҵ�˴ϴ� 
	Circle1.iRadius = 1;
	cout << "Circle area is " <<  Circle1.GetArea() << endl;
	
	Circle Circle2;
	Circle2.iRadius = 10;
	cout << "Circle area is " <<  Circle2.GetArea() << endl;
}
