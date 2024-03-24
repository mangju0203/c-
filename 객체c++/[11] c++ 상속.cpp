#include <iostream>
using namespace std;
//==========================================
//
//==========================================
class Parent
{
private:
	int Private;

protected:
	int Protected;

public:
	int Public;
	
	Parent();
//  ~Parent();

	void AeccessMembers(int x, int y);
	void PrintParentMembers();
};

//=========================================
// 클래스 멤버 함수 구현 
//==========================================
Parent::Parent()
{
	Private  = - 10;
	Protected = - 10;
	Public = - 10;
}

void Parent::AeccessMembers(int x, int y)
{
	Private = x;
	Protected = y;
}

void Parent::PrintParentMembers()
{
	cout << "Parent Private: " << Private << endl;
	cout << "Parent Protected: " << Protected << endl;
	cout << "Parent Public: " << Public << endl;
}

int main()
{
	Parent P;
	P.PrintParentMembers();
	
	cout << endl << endl;
	P.AeccessMembers(3, 4);
	P.PrintParentMembers();
	
	cout << endl << endl;
	P.Public = 100;
	P.PrintParentMembers();
	
	return 0;
} 
