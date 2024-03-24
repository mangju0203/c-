#include <iostream>
//#include "MyHeader.h"
#define SIZE 10 
#define ROW 10
#define COL 10

using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

int main(void)
{
	//============================================================
	// [Step1] 1D 메모리 동적할당 (char, short, int, float)
	//============================================================
	
	// 1D 동적메모리 할당
	int* piMem1D = new int [SIZE];
	
	// 1D 동적메모리를 배열과 같이 사용
	for (int i=0; i< SIZE; i++)
	{
		piMem1D[i] = i;
		cout << piMem1D[i] << endl;
	}
	
	// 동적메모리 해제
	delete [] piMem1D;
	
	//2D 동적메모리할당 
	int**  piMem2D = new int*[ROW];
	for (int i = 0; i < ROW; i++)
	{
		piMem2D[i] = new int[COL];
	 } 
	
	//2D동적메모리를 배열과 같이 사용하여 임의의 값 넣기
	 for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			piMem2D[i][j] = i*COL + j;
	 	} 
	 } 
	// 2D 동적메모리를 배열과 같이 사용하여 출력
	 for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout.width(5);
			cout << piMem2D[i][j]; 
	 	} 
	 	cout << endl;
	 }
	 
	//2D 동적메모리 해제
	for (int i = 0; i < ROW; i++)
	{
		delete [] piMem2D[i];
	 } 
	delete [] piMem2D;
	
	return 0;
}
