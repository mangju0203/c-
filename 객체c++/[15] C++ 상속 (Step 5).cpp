#include <iostream>


using namespace std;

class Parent
{
private:
   int Private;
   void PrivateMsg() {cout << "Private Message\n";}  //Step 5
 
protected:
   int Protected;
   void ProtectedMsg() {cout << "Protected Message\n";}  // Step 5
   
public:
   int Public;
   
   Parent();
   int GetPrivate() {return Private;} //Step 3 
   void SetPrivate(int x) {Private = x;} //Step 4
   
   void AccessMembers(int x, int y);
   void PrintParentMembers();   
   
   void CallPrivateMsg(){PrivateMsg();} // Step 5
   
 };

//private는 계승불가
 
class Child:public Parent
{
private:
    int x,y,z;
public:
	void AccessParentMembers();
    void PrintChildMembers();
	void CallProtectedMsg() { ProtectedMsg(); }  // Step 5
	
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
   //x=Private; 이건 안됨 
   x = GetPrivate();
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

////Step- 2
//   Child C;
//   C.PrintParentMembers();
//   
//   cout<<endl<<endl;  
//   C.PrintChildMembers();
//
//   cout<<endl<<endl;
//   C.AccessParentMembers();
//   C.PrintChildMembers();
//   
//   C.Public = 3;
//   C.AccessParentMembers();
//   cout<<endl<<endl;
//   C.PrintChildMembers();      
//   
////Step- 3
//   Child C;
//   C.PrintParentMembers();
//   
//   cout << endl << endl;
//   C.PrintChildMembers();
//   
//   cout << endl << endl;
//   C.AccessParentMembers();
//   C.PrintChildMembers();
//   
//Step- 4
//   Child C;
//   cout << endl << endl;
//   C.AccessMembers(100,100);
//   C.Public = 100;
//   C.PrintParentMembers();
//   
//   cout << endl << endl;
//   C.SetPrivate(1000);
//   C.PrintParentMembers();
//   
//   cout << endl << endl;   
//   C.AccessParentMembers();
//   C.PrintChildMembers();
	
	//Step-5
	child C;
	
	C.PublicMsg();
//	C.ProtectedMsg();      // [주의] Error -> 부모protected 함수를 상속받아 사용하려면 자식 클래스에서 다시 한 번 감싸줘야함
						  // main ㅎ마수에서 자식 클래스 선언 후, 바로 부모 protected 
	
	C.CallProtectedMsg();
	C.CallPrivateMsg();
	
   
   return 0;
   
}
