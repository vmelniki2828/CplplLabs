#include “lib.h”
using namespace std;

int main(void)
{
FileHandler fileHandler;
	// Пошук студентів бригади за їх номером у списку
	string oleksandr = fileHandler.getBrigadeMemberName(14);
	string evgenii = fileHandler.getBrigadeMemberName(16);
	string maksym = fileHandler.getBrigadeMemberName(20);
	// Запис імен у файл бригади
	fileHandler.writeStudentNameIntoBrigadeFile(oleksandr);
	fileHandler.writeStudentNameIntoBrigadeFile(evgenii);
	fileHandler.writeStudentNameIntoBrigadeFile(maksym);
	return 0;
}
