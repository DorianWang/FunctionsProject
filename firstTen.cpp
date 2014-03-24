
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

//7.	Write a function that takes an array of integers and outputs the array numsPerLine integers per line.
int objectFirst::seven(int numsPerLine, int arraySize, int *inputArray)
{
int i,j,k;
j=1;k=1;

cout<<endl;

for (i=0;i<arraySize;i++){
   cout<<*(inputArray+i)<<" ";    
   if (i==(j*numsPerLine)-1){
   cout<<endl;
   j++;
   }
}
cout<<endl;
return 1;
}

int objectFirst::seven(int numsPerLine, int arraySize, char *inputArray)
{
int i,j,k;
j=1;k=1;

cout<<endl;

for (i=0;i<arraySize;i++){
   cout<<*(inputArray+i);  
   if (numsPerLine!=arraySize){
      cout<<" ";
   }
   
   if (i==(j*numsPerLine)-1){
   cout<<endl;
   j++;
   }
}
cout<<endl;
return 1;
}


//8.	Write a function that creates a random array of integers containing between minNums and maxNums integers with each integer being between minNum and maxNum. Note that I am using the word between to mean inclusive here. 
//min numbers must be smaller than max numbers. output must be large enough to hold all the numbers. It returns the amount of numbers made. 0 for failure.
int objectFirst::eight(int minNums, int maxNums, int minNum, int maxNum, int* output)
{
   srand (time(NULL));
   int temp;
   int length = rand ()%(maxNums-minNums)+ minNums;
   
   for (int i=0;i<length;i++){
   temp = rand() % (maxNum-minNum)+minNum;
   *(output+i) = temp;
   }
return length;
}    
    

//9.	Write a function that creates a random string containing between minChars and maxChars characters with each character being between minChar and maxChar. Note that I am using the word between to mean inclusive here. 
//Same restrictions as 8.
int objectFirst::nine(int minChars, int maxChars, int minChar, int maxChar, char* output)
{
   int temp;
   int inputInts[maxChars];
   int length = eight(minChars,maxChars,minChar,maxChar,inputInts);
   
   for (int i=0;i<length;i++){
   *(output+i) = inputInts[i];
   }
return length;
}    

//10.	Write a function that determines the third largest value in an array of integers. Your function must return 1 if it succeeds and 0 if it does not succeed. 
//The function will not succeed if there are less than 3 elements in the array. Note that the calling function has every intention of using this third largest value! Also, YOU ARE NOT ALLOWED TO SORT THE ARRAY!

int objectFirst::ten(int *inArray, int* output, int aLen)
{
int i=0;

int a=0;int b=0;int c=0;//1st, 2nd, and 3rd slots.

if (aLen<3){
return 0;//failure, there is no 3rd value   
}

while(true){
temp = *(inArray+i);            

            
}


}


















