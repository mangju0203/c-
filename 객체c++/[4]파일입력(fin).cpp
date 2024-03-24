#include <iostream>
#include <fstream>  // ofstream, ifstream

using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


//===============================================================
//����� �Լ� ����
//===============================================================
//
//int main(void)
//{
//	// [1] ���� ����
//	char cName[100], cDept[100];
//	UINT uiStudentID = 0;
//	float fGPA = 0.0;
//
//	// FILE �б� 
//	ifstream fin;
//	fin.open("Student.txt");
//	//fout.open("student.txt", ios::app);
//	if(!fin)
//	{
//		cout << "File Failed\n";
//		return 0;
//	}
//	
//	// �����б�
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
	//string ���� ����
	string sSentences;
	
	//file ��ü fin ���� �� ����
	ifstream fin;
	fin.open("Text.txt");
	
	while(getline(fin,sSentences))
	{
		cout << sSentences << endl;
	}
	
	fin.close();
	return 0;
 } 
