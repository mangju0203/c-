#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

class Parent
{
public:
	void message(void) { cout << "Parent Ŭ������ message �Լ� ȣ��" << endl;}
 };
 
class Child : public Parent
{
public:
	void childmessage(void)
	{
		cout << "Child Ŭ������ message �Լ� ȣ��!! " << endl;
	}
	 
	// �Լ� �������̵�: (1) �Ű������� ���ƾ� �Ѵ�. (2) ���� Ÿ���� ���ƾ� �Ѵ�. 
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
