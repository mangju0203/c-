#include <stdio.h>
#include <iostream>

using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
void swap(int one, int two);

int main(void)
{

	int iNum1 = 10;
	int iNum2 = 20;

	cout << "<Before function>" << endl;
	cout << "iNum1" << iNum1 << endl;
	cout << "iNum2" << iNum2 << endl;
	
	// ������ ���� ȣ��
	swap(iNum1, iNum2);
	cout << "<After function>" << endl;
	cout << "iNum1" << iNum1 << endl;
	cout << "iNum2" << iNum2 << endl;
	
	return 0;
}

void swap(int &a, int &b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

