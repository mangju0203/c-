#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

// [a에서 b까지 합하기] 
int sum(int a, int b)
{
	int iResult = 0;
	for(int i=a; i<b; i++)
	{
		iResult += i;
	}
	return iResult;
}

// [0에서 a까지 합하기] 
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
