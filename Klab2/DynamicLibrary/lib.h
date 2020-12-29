#include <string>
namespace std{
class FileHandler 
{
 public:
  std::string getBrigadeMemberName(int groupNumber);
  void writeStudentNameIntoBrigadeFile(std::string memberName);
};}
