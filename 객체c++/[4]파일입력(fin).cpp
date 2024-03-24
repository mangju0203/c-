#include <iostream>
#include <fstream>  // ofstream, ifstream

using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


//===============================================================
//사용자 함수 선언
//===============================================================
//
//int main(void)
//{
//	// [1] 변수 선언
//	char cName[100], cDept[100];
//	UINT uiStudentID = 0;
//	float fGPA = 0.0;
//
//	// FILE 읽기 
//	ifstream fin;
//	fin.open("Student.txt");
//	//fout.open("student.txt", ios::app);
//	if(!fin)
//	{
//		cout << "File Failed\n";
//		return 0;
//	}
//	
//	// 파일읽기
//	fin.getline(cName, 100);
//	fin.getline(cDept, 100);
//	fin >> uiStudentID;
//	fin >> fGPA;
//	
//	// Debug
//	cout.precision(3);
//	cout << "Name: " << cName << endl;
//	cout << "Dept: " << cDept << endl;
//	cout << "Student ID: " <<uiStudentID << endl;
//	cout << "Gpa: " << fGPA << endl;
//	
//	fin.close();
//	return 0;
//}

int main()
{
	//string 변수 선언
	string sSentences;
	
	//file 객체 fin 선언 및 열기
	ifstream fin;
	fin.open("Text.txt");
	
	while(getline(fin,sSentences))
	{
		cout << sSentences << endl;
	}
	
	fin.close();
	return 0;
 } 
