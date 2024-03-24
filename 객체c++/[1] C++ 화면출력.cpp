// 시작코드

#include <iostream>
#include "Myheader.h"

using namespace std; //std:: -> C++ 표준에서 정한 표준이름공간 (iostram 내의 모든 클래스/함수에 적용) 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

float CircleArea(int r); //3번 0

int main(void)
{
   //1번 
   cout << endl << endl;
   cout << "Hello";
   cout << endl << endl;
   ////////////////////////////////////////////////////
   //2번 
   int   iSample = 56231657;
   char  cSample = '#';
   float fSample = 432.12349345;

   cout << "int   = " << iSample << endl;
   cout << "char  = " << cSample << endl;
   cout << "float = " << fSample << endl;
    
   cout.precision(5);
   cout << "float = " << fSample << endl;
   ////////////////////////////////////////////////////
   //3번
//   int iRadious = 5;
//   float fArea = CircleArea(iRadious);
//   cout << "Area is " << fArea << endl; //cout << "Area is " << CircleArea(5) << endl; 이 한문장으로 위 세문장을 나타낼 수 있음. 
//   
//   cout.precision(4);
//   cout << "Area is " << fArea << endl;
   
   return 0;
}  
