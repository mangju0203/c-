// �����ڵ�

#include <iostream>
#include "Myheader.h"

using namespace std; //std:: -> C++ ǥ�ؿ��� ���� ǥ���̸����� (iostram ���� ��� Ŭ����/�Լ��� ����) 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

float CircleArea(int r); //3�� 0

int main(void)
{
   //1�� 
   cout << endl << endl;
   cout << "Hello";
   cout << endl << endl;
   ////////////////////////////////////////////////////
   //2�� 
   int   iSample = 56231657;
   char  cSample = '#';
   float fSample = 432.12349345;

   cout << "int   = " << iSample << endl;
   cout << "char  = " << cSample << endl;
   cout << "float = " << fSample << endl;
    
   cout.precision(5);
   cout << "float = " << fSample << endl;
   ////////////////////////////////////////////////////
   //3��
//   int iRadious = 5;
//   float fArea = CircleArea(iRadious);
//   cout << "Area is " << fArea << endl; //cout << "Area is " << CircleArea(5) << endl; �� �ѹ������� �� �������� ��Ÿ�� �� ����. 
//   
//   cout.precision(4);
//   cout << "Area is " << fArea << endl;
   
   return 0;
}  
