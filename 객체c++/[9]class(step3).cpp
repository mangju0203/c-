//public:
//
//public���� ����� ������� Ŭ���� �ܺο����� ������ �����մϴ�.
//Ŭ������ �ν��Ͻ� �Ǵ� ��ü�� ���� �ܺο��� �ش� ����� ���� ������ �� �ֽ��ϴ�.
//�ַ� Ŭ������ �������̽� �κп� ���Ǹ�, �ܺο��� ����� �� �ִ� �������̽��� �����մϴ�.

//private:
//
//private���� ����� ������� Ŭ���� ���ο����� ������ �����մϴ�.
//�ܺο����� �ش� ����� ���� ������ �� ����, Ŭ���� ������ ��� �Լ��� ���ؼ��� ������ �����մϴ�.
//�ַ� ������ ���λ����� �����, �ܺο����� ������ �����ϱ� ���� ���˴ϴ�.


//protected:
//
//protected�� ����� ������� �ش� Ŭ������ �� Ŭ������ ��ӹ��� �Ļ� Ŭ�������� ������ �����մϴ�.
//�ܺο����� ������ �� ������, �Ļ� Ŭ���������� �ش� ����� ������ �����մϴ�.
//��� ���迡�� ���Ǹ�, �⺻�����δ� private�� ������ ������ ��������, 
//�Ļ� Ŭ�������� ��ӹ��� ����� ������ �� �ֵ��� �ϴ� �뵵�� ���˴ϴ�.

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

class Cube
{
private:
	int iWidth;
	int iHeight;
	int iDepth;
public:
	// ������ (1) ���� �� ���� ����
	//		  (2) ���� ���� ������ �Լ� ��� ����
	//        (3) Ŭ������� ���� �̸�/ ����Ÿ�� ����
	//        (4) ��ü �ʱ�ȭ(������� �ʱ�ȭ/Ư����, �޸� ���� �Ҵ�)
	Cube();
	Cube(int x, int y, int z);
	
	// �Ҹ��� (1) ���� �� ���� ����
	//		  (2) ���� �� ���� �Ҹ��� �Լ� ��밡�� 
	//        (3) "~Ŭ������"�� ���� �̸�/ ����Ÿ�� ����
	//        (4) ��ü ������ ���� ������(������� �ʱ�ȭ/Ư����, �޸� ���� �Ҵ�����)
	~Cube();
	
	int GetVolume();	 
	void SetSize(int x, int y, int z);
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
