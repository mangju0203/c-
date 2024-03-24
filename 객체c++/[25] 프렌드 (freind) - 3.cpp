#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

class Rect;

class RectCheck
{
public:
	bool equal(Rect r1, Rect r2);
	void copy(Rect& dest, Rect& src); 
};

// (Step3) 다른 클래스의 "모든" 맴버 함수를 한 번에 friend 함수로 선언 
class Rect
{
private:
	int width, height;
public:
	Rect(int x, int y) { width = x; height = y;} 
	friend RectCheck;      // RectCheck 클래스의 모든 ㅏㅁ수를 Reck 클래스의 friend 함수로 선언 
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
