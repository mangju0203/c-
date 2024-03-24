#include <stdio.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main(void)
{
   
   char  cCharacter;
   int   iNumber=0;
   float fNumber=0;

   // [1] 파일 생성 w:write, a:add, r:read
   FILE* fp = fopen("Sample.txt", "w");
   FILE* fp1 = fopen("Text.txt", "w");
   
   fprintf(fp, "\n");
   fprintf(fp, "\n");
   fprintf(fp, "\n");
   
   // 문자출력
   printf("You are the best!! \n");
   fprintf(fp1, "You are the best!! \n");
      
   //문자에 대한 화면입출력 실습 
   printf("Your favoriate charactor?\n");
   fprintf(fp, "Your favoriate charactor?\n");
   scanf("%c", &cCharacter);
   printf("Your character is %c\n", cCharacter);
   fprintf(fp, "Your character is %c\n", cCharacter);
   
   //문자에 대한 화면입출력 실습 
   printf("\n");
   fprintf(fp, "\n");
   printf("Your favoriate small number?\n");
   fprintf(fp, "Your favoriate small number?\n");
   scanf("%d", &cCharacter);
   printf("Your small number is %d\n", cCharacter);
   fprintf(fp, "Your small number is %d\n", cCharacter);
   
   // 숫자(정수)에 대한 화면입출력 실습 
   printf("\n");
   fprintf(fp, "\n");
   printf("Your favoriate integer number?\n");
   fprintf(fp, "Your favoriate integer number?\n");
   scanf("%d", &iNumber);
   printf("Your interger number is %d\n", iNumber);
   fprintf(fp, "Your interger number is %d\n", iNumber);
   
   // 숫자(실수)에 대한 화면입출력 실습 
   printf("\n");
   fprintf(fp, "\n");
   printf("Your favoriate floating number?\n");
   fprintf(fp, "Your favoriate floating number?\n");
   scanf("%f", &fNumber);
   printf("Your floating number is %.1f\n", fNumber);
   fprintf(fp,"Your floating number is %.1f\n", fNumber);
   
   // [3] 파일 종료
   fclose(fp); 
   fclose(fp1);  

   return 0;
    
}  
