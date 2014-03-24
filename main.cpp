#include <cstdlib>
#include <iostream>

#include "firstTen.h"

using namespace std;

int main(int argc, char *argv[])
{
    char bromo[40];
   objectFirst aso;
   
   cout<<aso.one("abcdefghijk","abcdefghi")<<endl; //A negative number signifies that the end of the array was reached.
   cout<<aso.two(2,5)<<endl;
   aso.three(4);
   cout<<aso.four(100,35)<<endl;
   cout<<aso.five("yuuy",4)<<endl;
   if (aso.six(20,30,bromo)){
   cout<<bromo<<endl;
   }
   else
   {
   cout<<"INVALID STRING"<<endl; 
   }
   system("PAUSE");
   return EXIT_SUCCESS;
}
