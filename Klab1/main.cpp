// Робота виконана студентами групи ІТ-83 Мельником Владиславом Білоусом Максимом
#include <string>
using namespace std;
// Заголовки методів, що описані у файлі lib.cpp
string getBrigadeMember(int groupNumber);
void writeBrigadeMemberIntoFile(string memberName);
int main(void)
{
// Визначення імен учасників бригади
// на основі їх позиції в списку групи
string max = getBrigadeMember(9);
string vlad = getBrigadeMember(4);
// Запис імен у файл
writeBrigadeMemberIntoFile(max);
writeBrigadeMemberIntoFile(vlad);
return 0;
}

