#include "../common.h" 

int raw_string()
{
  string s = "(a\t\b\tc)\n";
  string rs = R"(a\t\b\tc\n)";

  cout << s << endl;
  cout << rs << endl;

  return 0;
}
