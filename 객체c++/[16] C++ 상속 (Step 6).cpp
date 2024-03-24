#include <iostream>


using namespace std;

class Base
{
private:
   int iTmp;
};

class Adder:public Base
{
protected:
   int add(int a, int b) {return a+b;}
};

class Subractor:public Base
{
protected:
   int minus(int a, int b) {return a-b;}
};

// 다중 상속
// class Calculator : public Adder,public Subtractor
class Calculator : virtual public Adder, virtual public Triangle
{
public:
   int calc(char opt, int a, int b);
};

//-----------------------------------------------------
// 클래스 멤버함수 구현
//-----------------------------------------------------
int Calculator::clac(char opt, int a, int b)
{
	int result = 0;
	switch(opt)
	{
		case '+': result = add(a,b); break;
		case '-': result = minus(a,b); break;
	}
	return result;
 }
 
 //---------------------------------------------------------
 
 int main()
 {
 	Calculator C;
 	cout << C.calc('+', 2, 4) << endl;
 	cout << C.calc('-', 100, 8) << endl;
 	
	return 0;
  } 

