
#include "firstTen.h"



int objectFirst::one(char* s1, char* s2)
{
int i = 0;
    while(true){
    
       if (s1!=0&&s2!=0){
          
          if((s1+i)!=(s2+i)){
             return i;                   
          }
          i++;
       }
       else
       {
       return -1;    
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
      
      
      cout<<"a"<<endl;
      answer+=i;  
      i++; 
   }while(i<maxNum+1);

   

return answer;  
}
