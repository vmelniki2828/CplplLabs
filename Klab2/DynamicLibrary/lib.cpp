#include<iostream>
#include “lib.h”
#include <fstream>
using namespace std;
class FileHandler{

string getBrigadeMemberName(int groupNumber)
{

	ifstream fin("group_list.txt");
	char groupmateName[50];

	int i = 0;
	while(i != groupNumber && !fin.eof())
	{
		fin.getline(groupmateName, 51);
		i++;
	}

	if (fin.eof() && i != groupNumber)
		return "#Not found#";
	fin.close();

	return string(groupmateName);
}

void writeStudentNameIntoBrigadeFile(string studentName)
{

	ofstream fout("brigade_list.txt", ios_base::app);
	fout << studentName << endl;
	fout.close();
}}
