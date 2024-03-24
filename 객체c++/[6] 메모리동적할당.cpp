#include <iostream>
//#include "MyHeader.h"
#define SIZE 10 
#define ROW 10
#define COL 10

using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

int main(void)
{
	//============================================================
	// [Step1] 1D �޸� �����Ҵ� (char, short, int, float)
	//============================================================
	
	// 1D �����޸� �Ҵ�
	int* piMem1D = new int [SIZE];
	
	// 1D �����޸𸮸� �迭�� ���� ���
	for (int i=0; i< SIZE; i++)
	{
		piMem1D[i] = i;
		cout << piMem1D[i] << endl;
	}
	
	// �����޸� ����
	delete [] piMem1D;
	
	//2D �����޸��Ҵ� 
	int**  piMem2D = new int*[ROW];
	for (int i = 0; i < ROW; i++)
	{
		piMem2D[i] = new int[COL];
	 } 
	
	//2D�����޸𸮸� �迭�� ���� ����Ͽ� ������ �� �ֱ�
	 for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			piMem2D[i][j] = i*COL + j;
	 	} 
	 } 
	// 2D �����޸𸮸� �迭�� ���� ����Ͽ� ���
	 for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout.width(5);
			cout << piMem2D[i][j]; 
	 	} 
	 	cout << endl;
	 }
	 
	//2D �����޸� ����
	for (int i = 0; i < ROW; i++)
	{
		delete [] piMem2D[i];
	 } 
	delete [] piMem2D;
	
	return 0;
}
