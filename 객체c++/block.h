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


