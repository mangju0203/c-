#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

// [a���� b���� ���ϱ�] 
int sum(int a, int b)
{
	int iResult = 0;
	for(int i=a; i<b; i++)
	{
		iResult += i;
	}
	return iResult;
}

// [0���� a���� ���ϱ�] 
int sum(int a)
{
	int iResult = 0;
	for(int i=0; i<=a; i++)
	{
		iResult += i;
	}
	return iResult;
}

int main()
{
	cout << sum(3,5) << endl;
	cout << sum(10000) << endl;

	return 0;
}
