#include <stdio.h>

void swap(int *pOne, int *pTwo);

int main(void)
{
	int iOne = 100;
	int iTwo = 200;
	
	int *pOne = &iOne;
	int *pTwo = &iTwo;

	//swap 함수 호출
	printf("One = %d, Two = %d\n", iOne, iTwo);
	swap(pOne, pTwo);
	printf("One = %d, Two = %d\n", iOne, iTwo);

	return 0;
}

void swap(int *pOne, int *pTwo)
{
	int Tmp = 0;
	Tmp = *pOne;
	*pOne = *pTwo;
	*pTwo = Tmp;
}
