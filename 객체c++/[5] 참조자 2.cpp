#include <stdio.h>
#include <iostream>

using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
// swqp �Լ� ����: �� ���� ������  ������ ���� ȣǮ�� ���޹޾� ���� ��ȯ�ϴ� ���� 
void swap(int one, int two);

int main(void)
{

	int iNum1 = 10;
	int iNum2 = 20;

	cout << "<Before function>" << endl;
	cout << "iNum1" << iNum1 << endl;
	cout << "iNum2" << iNum2 << endl;
	
	// ������ ���� ȣ��
	// �� ���� ���ڸ� ��ȯ�Ѵ� 
	swap(iNum1, iNum2);
	cout << "<After function>" << endl;
	cout << "iNum1" << iNum1 << endl;
	cout << "iNum2" << iNum2 << endl;
	
	return 0;
}

// swap �Լ� ���� 
void swap(int &a, int &b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

