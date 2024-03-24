 
#include <iostream>
#include <fstream>  // ofstream, ifstream

using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


//===============================================================
//����� �Լ� ����    
//===============================================================

int main(void)
{
	// [1] ���� ����
	char cName[100], cDept[100];
	UINT uiStudentID = 0;
	float fGPA = 0.0;
	
	//ȭ�� ����� ��� ������ ������ ����
	// getline �� ����ڰ� ����Ű�� �Է��ϱ� �������� �� ���� �о�ͼ� ������ ������ 
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
	// ofstream Ŭ������ ����Ͽ� ������½�Ʈ�� fout �� ����  
	ofstream fout;  
	fout.open("Student.txt");
	//fout.open("student.txt", ios::app);
	// ������ ���������� ������ �ʾ��� ��쿡 File failed ��� 
	if(!fout)
	{
		cout << "File Failed\n";
		return 0;
	}
	
	// �Ҽ��� ���� 3�ڸ����� ����ϵ��� �����մϴ�. 
	fout.precision(3);
	fout  << cName << endl;
	fout <<  cDept << endl;
	fout << uiStudentID << endl;
	fout <<  fGPA << endl;
	
	fout.close();
	return 0;
}
