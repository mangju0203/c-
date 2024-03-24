#include <stdio.h>
#include <iostream>

using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
// swqp 함수 선언: 두 개의 정수를  참조에 의한 호풀로 전달받아 값을 교환하는 역할 
void swap(int one, int two);

int main(void)
{

	int iNum1 = 10;
	int iNum2 = 20;

	cout << "<Before function>" << endl;
	cout << "iNum1" << iNum1 << endl;
	cout << "iNum2" << iNum2 << endl;
	
	// 참조에 의한 호출
	// 두 개의 숫자를 교환한다 
	swap(iNum1, iNum2);
	cout << "<After function>" << endl;
	cout << "iNum1" << iNum1 << endl;
	cout << "iNum2" << iNum2 << endl;
	
	return 0;
}

// swap 함수 정의 
void swap(int &a, int &b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

