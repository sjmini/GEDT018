#include "../common.h"

void auto_test()
{
  // The 'auto' keyword has been supported since c++11
  // automatic type deduction
  auto x = 10;
  auto y = "Ten";
  cout << x << " is " <<  y << endl;
}
