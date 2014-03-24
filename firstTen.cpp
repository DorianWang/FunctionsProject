
#include "firstTen.h"



int objectFirst::one(char* s1, char* s2)
{
int i = 0;
    while(true){
    
       if (*(s1+1)!=0&&*(s2+i)!=0){
          //cout<<"a"<<endl;
          //cout<<*(s1+i)<<" "<<*(s2+i)<<endl;
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
      
      
      //cout<<"b"<<endl;
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

//returns greatest common divisor, assumes numbers are positive non-zero integers. Returns zero if given zero.
int objectFirst::four(unsigned int numOne, unsigned int numTwo)
{
int maxDivisor;
if (numOne>numTwo){
   maxDivisor = numTwo;
}
else if(numOne==numTwo)
{
   return numOne;
}
else
{
   maxDivisor = numOne;
}

for (int i=maxDivisor; i>0;i--){
   if ((numOne%i==0)&&(numTwo%i==0)){
      return i;
   }
}

return 0;//Should only happen when it is passed in 0;

}

//PALINDROME function. strlen is size of array. For example, "abc" = 3.
int objectFirst::five(char* palString, int strLen)
{
 
   for(int i = 0;i<strLen;i++){
      //cout<<*(palString+i)<<*(palString+strLen-i-1)<<endl;
      if(*(palString+i)!=*(palString+strLen-i-1)){
      return 0;
      }        
   } 
return 1;
}

//6.	Write a function that obtains valid input from the user. Valid input in this case is any string of lowercase letters having between a and b characters.
//Do not give this negative numbers. Space must be allocated for the output string.
int objectFirst::six(int a, int b, char* outputs)
{   
int bigger; int smaller;
bool aBigger;
bool abSame;
if (a>=b){
   bigger=a; smaller=b;
}
else
{
   bigger=b; smaller=a; 
}

if (bigger<1){
return 0;//Can not have a string of length less than 1.
}

char aString[bigger+64];

   cout<<"Please input a string composed of lowercase letters with a length between "<<a<<" and "<<b<<"."<<endl;
   cin>>aString;

   int aStringLen = strlen(aString);
   
   if(aStringLen<smaller||aStringLen>bigger){
      return 0;//retry 
   }
   
   //aString = input.c_str();
   int j;
   for (j=0;j<aStringLen;j++){
      if (aString[j]<'a'||aString[j]>'z'){
      return 0;//retry   
      }
      outputs[j]=aString[j];
   }

outputs[j] =0;// strdup(aString);
return 1;
}

























