
#include "firstTen.h"



int objectFirst::one(char* s1, char* s2)
{
int i = 0;
    while(true){
    
       if (*(s1+1)!=0&&*(s2+i)!=0){
          cout<<"a"<<endl;
          cout<<*(s1+i)<<" "<<*(s2+i)<<endl;
          if(*(s1+i)!=*(s2+i)){
             return i;                   
          }
          i++;
       }
       else
       {
       return -i;    
       }
    }
    
}

int objectFirst::two(int minNum, int maxNum)//good
{
int answer=0;
int i;
   if ((maxNum - minNum)<1){
      cout<<"You fail!"<<endl;
      return -1;//failure   
   }
   i=minNum;
   do{
      
      
      cout<<"b"<<endl;
      answer+=i;  
      i++; 
   }while(i<maxNum+1);

   

return answer;  
}

int objectFirst::three(int factorNum)
{
int i=0;
int factors[factorNum+1];//100% chance to not overflow!
int j=0;
int asdf = factorNum;
//cout<<"asdf";
//system("PAUSE");

   for(i=1; i<(asdf)+2;i++){//remember not to divide by 0...
      if (asdf % i == 0){
         //system("PAUSE");
         factors[j]=i;
         j++;
      }
   }
//system("PAUSE");
   if (j==1||j==2){
      cout<<"It appears your number is prime"<<endl;
      return 1;   
   }
   
   cout<<"There are "<<j<<" factors."<<endl;
   cout<<"These are the factors of the number: "<<factorNum<<endl;
   for (int k=0;k<j;k++){
   cout<<factors[k]<<" ";
   }
   cout<<endl;
   return 1;


}


int objectFirst::four(int numOne. int numTwo)
{





}























