#include <stdio.h>

void swap(int one, int two);

int main(void)
{
	int iOne = 100;
	int iTwo = 200;

	//swap 함수 호출
	printf("One = %d, Two = %d\n", iOne, iTwo);
	swap(iOne, iTwo);
	printf("One = %d, Two = %d\n", iOne, iTwo);

	return 0;
}

void swap(int one, int two)
{
	int Tmp = 0;
	Tmp = one;
	one = two;
	two = Tmp;
}
