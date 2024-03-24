//--------------------------------------------------------------------
// friend ���� �� friend �Լ� 
// - Ŭ������ �ı���Ű��.. 
// - Ŭ���� �ȿ� �ִ� ���� ������ ������� ����... 
// (23) Ŭ���� �ܺο� �ۼ��� �Լ� equal()�� friend �Լ��� ����
//
//(24) �ٸ� ũ������ ��� �Լ��� frienf �Լ��� ����
// (25) �ٸ� Ŭ������ ��� �Լ��� friend �Լ��� ���� 
//--------------------------------------------------------------------

#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

// (Step1) Ŭ���� �ܺο� �ۼ��� �Լ� equal()�� friend �Լ��� ���� 
class Rect
{
private:
	int width, height;
public:
	Rect(int x, int y) { width = x; height = y;} 
	friend bool equal(Rect r1, Rect r2);       // friend �Լ� ���� 
};

bool equal(Rect r1, Rect r2)
{
	if((r1.width == r2.width) && (r1.height == r2.height)) return true;
	return false;
}

int main(void)
{
	//Step1
	Rect R1(3, 4);
	Rect R2(3, 4);
	
	if (equal(R1, R2))  cout << "Equal" << endl;
	else				cout << "Not Equal" << endl;
	
	return 0;
}
