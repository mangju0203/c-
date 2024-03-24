// 시작코드
 
#include <iostream>
#include "block.h"

using namespace std; //std:: -> C++ 표준에서 정한 표준이름공간 (iostram 내의 모든 클래스/함수에 적용) 
typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;

int main()
{
   Circle Circle1;
   Circle1.iRadius = 1;
   cout << "Circle1 area is " << Circle1.GetArea() << endl;
   
   Circle Circle2;
   Circle2.iRadius = 10;
   cout << "Circle2 area is " << Circle2.GetArea() << endl;
   
   cout << endl;
   
   Rectangle Rectangle1;
   Rectangle1.iWidth = 3;
   Rectangle1.iHeight = 6;
   cout << "Rectangle1 area is " << Rectangle1.GetArea() << endl;
   
   Rectangle Rectangle2;
   Rectangle2.iWidth = 34;
   Rectangle2.iHeight = 62;
   cout << "Rectangle2 area is " << Rectangle2.GetArea() << endl;
   
   cout << endl;
   
   Cube Cube1;
   cout << "Cube1 volume is " << Cube1.GetVolume() << endl;
   
   Cube1.SetSize(5,7,10);
   cout << "Changed Cube1 volume is " << Cube1.GetVolume() << endl;
   
   cout << endl;
   
   Cube Cube2(5,8,10);
   cout << "Cube2 volume is " << Cube2.GetVolume() << endl;
   
   Cube2.SetSize(3,8,10);
   cout << "Changed Cube2 volume is " << Cube2.GetVolume() << endl;
   

// ●◎ 위와 같은 기호가 있는 곳과 세트 
//   Cube Cube1;
//   Cube1.iWidth = 4;
//   Cube1.iHeight = 7;
//   Cube1.iDepth = 9;
//   cout << "Cube1 volume is " << Cube1.GetVolume() << endl;
//   
//   Cube Cube2;
//   Cube2.iWidth = 42;
//   Cube2.iHeight = 23;
//   Cube2.iDepth = 16;
//   cout << "Cube2 volume is " << Cube2.GetVolume() << endl;
   
   return 0;
}  
