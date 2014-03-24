#include <cstdlib>
#include <iostream>

#include "firstTen.h"

using namespace std;

int main(int argc, char *argv[])
{
   objectFirst aso;
   
   cout<<aso.one("abcdefghijk","abcdefghi")<<endl; //A negative number signifies that the end of the array was reached.
   cout<<aso.two(2,5)<<endl;
   aso.three(4);
   
   system("PAUSE");
   return EXIT_SUCCESS;
}
