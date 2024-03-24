#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

class Rect;

class RectCheck
{
public:
	bool equal(Rect r1, Rect r2);
	void copy(Rect& dest, Rect& src); 
};

// (Step3) �ٸ� Ŭ������ "���" �ɹ� �Լ��� �� ���� friend �Լ��� ���� 
class Rect
{
private:
	int width, height;
public:
	Rect(int x, int y) { width = x; height = y;} 
	friend RectCheck;      // RectCheck Ŭ������ ��� �������� Reck Ŭ������ friend �Լ��� ���� 
};

bool RectCheck::equal(Rect r1, Rect r2)
{
	if((r1.width == r2.width) && (r1.height == r2.height)) return true;
	return false;
}

void RectCheck::copy(Rect& dest, Rect& src)
{
	dest.width = src.width;
	dest.height = src.height;
}

int main(void)
{
	//Step3
	Rect R1(3, 4);
	Rect R2(5, 6);
	RectCheck RC;
	
	if (RC.equal(R1, R2))  cout << "Equal" << endl;
	else				   cout << "Not Equal" << endl;	
	
	RC.copy(R1, R2);
	if (RC.equal(R1, R2))  cout << "Equal" << endl;
	else   				   cout << "Not Equal" << endl;	
	 
	return 0;
}
