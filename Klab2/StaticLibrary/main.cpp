// Робота виконана студентами групи ІТ-83 Мельником Владиславом та Білоусом Максимом
#include <string>
#include “lib.h”
using namespace std;

string getBrigadeMember(int groupNumber);
void writeBrigadeMemberIntoFile(string memberName);
int main(void)
{

string max = getBrigadeMember(9);
string vlad = getBrigadeMember(4);

writeBrigadeMemberIntoFile(max);
writeBrigadeMemberIntoFile(vlad);
return 0;
}
