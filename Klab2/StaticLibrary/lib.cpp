#include<iostream>
#include “lib.h”
#include <fstream>
using namespace std;
class FileHandler{
// Метод для знаходження імені студента за його номером у списку
string getBrigadeMemberName(int groupNumber)
{
	// Відкриття файлу зі списком групи для зчитування
	ifstream fin("group_list.txt");
	char groupmateName[50];
	// Зчитування файлу по рядку до позиції
	// з номером учасника бригади
	int i = 0;
	while(i != groupNumber && !fin.eof())
	{
		fin.getline(groupmateName, 51);
		i++;
	}
	//Записати у вихідний рядок, що студента не знайдено
	if (fin.eof() && i != groupNumber)
		return "#Not found#";
	fin.close();
	// Навіть якщо не було знайдено студента, виводиться
	// рядок з повідомленням про відсутність такого студента
	return string(groupmateName);
}
// Метод для запису імені студента у файл бригади
void writeStudentNameIntoBrigadeFile(string studentName)
{
	// Відкриття файлу для запису в кінець файла;
	// якщо файла не існує, його буде створено
	ofstream fout("brigade_list.txt", ios_base::app);
	fout << studentName << endl;
	fout.close();
}}
