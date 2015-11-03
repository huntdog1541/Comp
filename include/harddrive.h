#include <iostream>
#include <string>

using namespace std;

class HardDrive
{
public:
  void formatHardDrive();
  void readHardDrive();

private:
  string hdFileName;
  bool isFormatted;
  FILE * hd;

};
