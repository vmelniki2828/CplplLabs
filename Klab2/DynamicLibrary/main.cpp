#include “lib.h”
using namespace std;

int main(void)
{
FileHandler fileHandler;

	string oleksandr = fileHandler.getBrigadeMemberName(14);
	string evgenii = fileHandler.getBrigadeMemberName(16);
	string maksym = fileHandler.getBrigadeMemberName(20);

	fileHandler.writeStudentNameIntoBrigadeFile(oleksandr);
	fileHandler.writeStudentNameIntoBrigadeFile(evgenii);
	fileHandler.writeStudentNameIntoBrigadeFile(maksym);
	return 0;
}
