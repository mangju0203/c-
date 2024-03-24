#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

class Rect;

class RectCheck
{
public:
	bool equal(Rect r1, Rect r2);
};

// (Step1) 클래스 외부에 작성된 함수 equal()를 friend 함수로 선언 
class Rect
{
private:
	int width, height;
public:
	Rect(int x, int y) { width = x; height = y;} 
	friend bool RectCheck::equal(Rect r1, Rect r2);       // friend 함수 선언 
};

bool RectCheck::equal(Rect r1, Rect r2)
{
	if((r1.width == r2.width) && (r1.height == r2.height)) return true;
	return false;
}

int main(void)
{
	//Step2
	Rect R1(3, 4);
	Rect R2(3, 5);
	RectCheck RC;
	
	if (RC.equal(R1, R2))  cout << "Equal" << endl;
	else				cout << "Not Equal" << endl;	
	
	return 0;
}
