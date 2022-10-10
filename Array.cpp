
// arrays example
#include <iostream>
using namespace std;

int foo [] = {16, 2, 77, 40, 12071};
int i, result=0;

int main ()
{
  for ( i=0 ; i<5 ; i++ )
  {
    result += foo[i];
  }
  cout << result;
  return 0;
}
