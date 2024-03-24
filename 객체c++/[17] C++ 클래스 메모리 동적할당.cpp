#include <iostream>
using namespace std;
#include <memory.h>

#define SIZE 10
#define ROW 10
#define COl 10
#define PI 3.14

class Circle
{
private:
	int iRadius;

public:
	Circle() 						{iRadius = 1;}
	Circle(int iRadius)				{this->iRadius = iRadius;}
	~Circle()						{iRadius = 0;}
	
	void SetRadius(int iRadius )	{this->iRadius = iRadius;}
	int GetRadius()					{return iRadius;}
	float GetArea()					{return PI*iRadius*iRadius;}
 };
 
int main()
{
	// Ŭ���� �� ���� ���� �޸� �����Ҵ� 
	Circle* C1 = new Circle;
	Circle* C2 = new Circle(10);
	
	//[����] �����ͷ� Ŭ���� �Ѱ��� ���� �޸� �����Ҵ��� �� ���� "." 
	cout << C1->GetArea() << endl;
	cout << C2->GetArea() << endl;
	
	delete C1;
	delete C2;
	
	// Ŭ���� �������� ���� �޸� �����Ҵ��� �� ���� �迭ó�� ��� 
	// (����) �迭�� ����� Ŭ���� �޸� "����" �Ҵ� 
	cout << endl << endl;
	Circle cArray [10];
	for ( int i=0; i<SIZE; i++ )
	{
		cArray[i].SetRadius(10*i);
		cout << cArray[i].GetArea() << endl;
	}
	
	cout << endl << endl;
	Circle* cPointer = new Circle[10];
	for ( int i=0; i<SIZE; i++ )
	{
		cPointer[i].SetRadius(10*i);
		cout << cPointer[i].GetArea() << endl;
	}
	delete[] cPointer;
	
	return 0;
}
