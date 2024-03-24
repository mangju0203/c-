#include <iostream>


using namespace std;

class Parent
{
private:
   int Private;
   
protected:
   int Protected;

public:
   int Public;
   
   Parent();
   
   void AccessMembers(int x, int y);
   void PrintParentMembers();   
 };

//private´Â °è½ÂºÒ°¡
 
class Child:public Parent
{
private :
   int x,y,z;
public :
   Child();
   void AccessParentMembers();
   void PrintChildMembers();

};
 
Parent :: Parent()
{
   Private = -10;
   Protected = -10;
   Public = -10;
}
//Parent:: ~Parent()
//{
//}
void Parent:: AccessMembers (int x, int y)
{
   Private = x;
   Protected = y;
}
void Parent :: PrintParentMembers()
{
   cout << "Parent Private: " << Private << endl;
   cout << "Parent Protected: " << Protected << endl;
   cout << "Parent Public: " << Public << endl;
}

Child :: Child()
{
   x = 0;
   y = 0;
   z = 0;
}
void Child::AccessParentMembers()
{
   //x=Private; ÀÌ°Ç ¾ÈµÊ 
   y = Protected;
   z= Public; 
}
void Child :: PrintChildMembers()
{
   cout << "Child X : " << x << endl;
   cout << "Child Y : " << y << endl;
   cout << "Child Z : " << z << endl;
   
}

int main()
{
//Step- 1
//   Parent P;
//   P.PrintParentMembers();
//   
//   cout << endl << endl ;
//   P.AccessMembers(3,4);
//   P.PrintParentMembers();
//   
//   cout << endl << endl ;
//   P.Public = 100;
//   P.PrintParentMembers();

//Step- 2
   Child C;
   C.PrintParentMembers();
   
   cout<<endl<<endl;
   C.PrintChildMembers();

   cout<<endl<<endl;
   C.AccessParentMembers();
   C.PrintChildMembers();
   
   C.Public = 3;
   C.AccessParentMembers();
   cout<<endl<<endl;
   C.PrintChildMembers();      
   
   
   return 0;
   
}
