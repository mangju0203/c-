#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

//(Step1)
//template <typename T>
//T sum(T a, T b)
//{
//	return a+b;
//} 

//(Step2) 
template <typename T>
class Point
{
private:
	T x, y;
public:
	Point(T x, T y) { this->x = x; this ->y = y;}
	T GetAdd()		{return x+y;}
};
int main()
{
//	cout << sum(3, 5) << endl;
//	cout << sum(30000, 500000) << endl;
//	cout << sum(3.55, 5.99) << endl;

	//
	cout << endl << endl;
	
	Point<int> Point1(10, 20);
	cout << Point1.GetAdd() << endl;

	Point<float> Point2(10.25, 20.25);
	cout << Point2.GetAdd() << endl;
	
	return 0;
}
