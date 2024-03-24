 
#include <iostream>
#include <fstream>  // ofstream, ifstream

using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


//===============================================================
//사용자 함수 선언    
//===============================================================

int main(void)
{
	// [1] 변수 선언
	char cName[100], cDept[100];
	UINT uiStudentID = 0;
	float fGPA = 0.0;
	
	//화면 입출력 기반 변수에 데이터 삽입
	// getline 은 사용자가 엔터키를 입력하기 전까지의 한 줄을 읽어와서 변수에 저장함 
	cout << "Your name?: "; 
	cin.getline(cName, 100);
	
	cout << "Your department?: "; 
	cin.getline(cDept, 100);
	
	cout << "Your Student ID?: "; 
	cin >> uiStudentID ;
	
	cout << "Your GPA?: "; 
	cin >> fGPA ;
//	
//	// Debug
//	cout << endl;
//	cout.precision(3);
//	cout << "Name: " << cName << endl;
//	cout << "Dept: " << cDept << endl;
//	cout << "Student ID: " <<uiStudentID << endl;
//	cout << "Gpa: " << fGPA << endl;
	// ofstream 클래스를 사용하여 파일출력스트림 fout 을 연다  
	ofstream fout;  
	fout.open("Student.txt");
	//fout.open("student.txt", ios::app);
	// 파일이 성공적으로 열리지 않았을 경우에 File failed 출력 
	if(!fout)
	{
		cout << "File Failed\n";
		return 0;
	}
	
	// 소수점 이하 3자리까지 출력하도록 설정합니다. 
	fout.precision(3);
	fout  << cName << endl;
	fout <<  cDept << endl;
	fout << uiStudentID << endl;
	fout <<  fGPA << endl;
	
	fout.close();
	return 0;
}
