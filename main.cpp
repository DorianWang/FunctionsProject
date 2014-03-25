#include <cstdlib>
#include <iostream>

#include "firstTen.h"
#include "lastTen.h"

#define MIN_NUMS 20
#define MAX_NUMS 40
#define MIN_NUM 1
#define MAX_NUM 10
//int minNums, int maxNums, int minNum, int maxNum

#define MIN_CHARS 10
#define MAX_CHARS 20
#define MIN_CHAR 65
#define MAX_CHAR 125



using namespace std;

int main(int argc, char *argv[])
{
   char bromo[40];
   int calbuco[50];
   
   int esmi[6]={29,65,89,25,0,99};
   
   for (int i=0;i<50;i++){
   calbuco[i]=i*2;    
   }
   char dempo[30]; 
   
   objectFirst aso;
   objectLast lia;
   
   char Aliana[]="Test string";
   
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
   aso.seven(14,50,calbuco);
      
   int lengthEight=aso.eight(MIN_NUMS, MAX_NUMS, MIN_NUM, MAX_NUM, calbuco);
   aso.seven(4,lengthEight,calbuco);
   
   int lengthNine = aso.nine(MIN_CHARS, MAX_CHARS, MIN_CHAR, MAX_CHAR, dempo);
   aso.seven(lengthNine, lengthNine, dempo);
   
   int output;
   aso.ten(calbuco, &output, 50);
   cout<<output<<endl;
   
   cout<<lia.oneP(Aliana,'e')<<endl;
   cout<<lia.oneP(Aliana,'z')<<endl;
   
   cout<<lia.twoP(Aliana,'e')<<endl;
   cout<<Aliana<<endl;
   
   cout<<lia.threeP(esmi,33,6)<<endl;
   cout<<lia.threeP(esmi,25,6)<<endl;
   
   int fey =0;
   cout<<lia.fourP(calbuco,&fey,50)<<endl;
   cout<<fey<<endl;
   cout<<lia.fourP(calbuco,&fey,40)<<endl;
   cout<<fey<<endl;
   
   system("PAUSE");
   return EXIT_SUCCESS;
}


















