#include <stdio.h>

int main(void)
{
	// [1] 변수 선언 
	char cFirst = 0;
	char cScecond = 0;
	char cThird = 0;
	
	int iFirst = 0;
	int iScecond = 0;
	int iThird = 0;
	
	float fFirst = 0.0;
	float fScecond = 0.0;
	float fThird = 0.0;
	
	// [2]파일 열기 "r" = 파일을 읽겠다는 뜻 
	FILE* fp_char = fopen("char.txt", "r"); 
	FILE* fp_int = fopen("int.txt", "r"); 
	FILE* fp_float = fopen("float.txt", "r"); 
	
	// [3] 데이터 읽어와서 값 출력 
	fscanf(fp_char, "%c %c %c", &cFirst, &cScecond, &cThird);
	printf("Fisrt: %c\t, Second: %c\t, Third: %c\n",cFirst, cScecond, cThird);
	
	fscanf(fp_int, "%d %d %d", &iFirst, &iScecond, &iThird);
	printf("Fisrt: %d\t, Second: %d\t, Third: %d\n", iFirst, iScecond, iThird);
	
	fscanf(fp_float, "%f %f %f", &fFirst, &fScecond, &fThird);
	printf("Fisrt: %.2f\t, Second: %.2f\t, Third: %.2f\n", fFirst, fScecond, fThird);
	
	
	//[4] 파일 종료 
	fclose(fp_char);
	fclose(fp_int);
	fclose(fp_float);
	
	return 0;
}

//5번을 8번처럼 파일출력하기  

