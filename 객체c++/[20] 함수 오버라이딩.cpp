#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

class Parent
{
public:
	void message(void) { cout << "Parent 클래스의 message 함수 호출" << endl;}
 };
 
class Child : public Parent
{
public:
	void childmessage(void)
	{
		cout << "Child 클래스의 message 함수 호출!! " << endl;
	}
	 
	// 함수 오버라이딩: (1) 매개변수가 같아야 한다. (2) 리턴 타입이 같아야 한다. 
	void message(void)
	{
		Parent::message();
		childmessage();
	}
};
 
int main()
{
	Parent cParent;
	cParent.message();
	
	cout << endl << endl;
	Child cChild;
	cChild.childmessage();
	
	cout << endl << endl;
	cChild.message();
	return 0;
}
