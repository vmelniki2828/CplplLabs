#include<iostream>
#include <string>
#include <fstream>
using namespace std;
// Опис методу для знаходження назви учасника бригади
// за номером у списку
string getBrigadeMember(int groupNumber){
// Відкриття файлу зі списком групи для зчитування
ifstream fin("group_list.txt");
char groupmateName[100];
// Зчитування файлу по рядку до позиції
// з номером учасника бригади
int i = 0;
while(i != groupNumber && !fin.eof())
{
fin.getline(groupmateName, 101);
i++;
}
if (fin.eof() && i != groupNumber)
return "#Not found#";
fin.close();
// Навіть якщо не було знайдено студента, виводиться
// рядок з повідомленням про відсутність такого студента
return string(groupmateName);
}
// Опис методу для виведення імені члена бригади у файл
void writeBrigadeMemberIntoFile(string memberName)
{
// Відкриття файлу для запису в кінець файла;
// якщо файла не існує, його буде створено
ofstream fout("brigade_list.txt", ios_base::app); 
fout << memberName << endl;
fout.close();
}
