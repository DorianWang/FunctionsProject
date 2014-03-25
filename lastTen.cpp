

#include "lastTen.h"


//11.	Write a function that searches for the first occurrence of a given character c in a given string s. 
//Return the index of the first occurrence or -1 if not found.
int objectLast::oneP(char* s, char c)
{
   for (int i=0; i<strlen(s);i++){
      if (*(s+i)==c){
         return i;
      }
   }
    
return -1;
}
    
//12.	Write a function that deletes the first occurrence of a given character c from a given string s. 
//Return 1 if the deletion took place or 0 if no deletion occurred.
    
int objectLast::twoP(char* s, char c)
{
    
int deleted = oneP(s, c);      
int arrayLen = strlen(s);
char tempStr[arrayLen+1];
int tempStrI=0;
bool deletedSomething = false;

if (deleted<0){
   return 0;
}
   
   for (int i=0;i<arrayLen;i++){
   
      if (i==deleted){
         deletedSomething=true;
         //cout<<"hello"<<endl;
         continue;
         //cout<<"bye"<<endl;
      }
      tempStr[tempStrI] = *(s+i);
      tempStrI++;
   }
   
   for (int j=0;j<arrayLen-1;j++){
      *(s+j)=tempStr[j];    
   }   
   
   if (deletedSomething){
      return 1;
   }
   else
   {
      return 0;    
   }

}

int objectLast::twoP(char* s, int deleted) //more overloading, specifically for question 6P.
{
    
//int deleted = oneP(s, c);      
int arrayLen = strlen(s);
char tempStr[arrayLen+1];
int tempStrI=0;
bool deletedSomething = false;

if (deleted<0||deleted>arrayLen){
   return 0;
}
   
   for (int i=0;i<arrayLen;i++){
   
      if (i==deleted){
         deletedSomething=true;
         continue;
      }
      tempStr[tempStrI] = *(s+i);
      tempStrI++;
   }
   
   for (int j=0;j<arrayLen-1;j++){
      *(s+j)=tempStr[j];    
   }   
   
   if (deletedSomething){
      return 1;
   }
   else
   {
      return 0;    
   }

}

//13.	Write a function that searches an unsorted array of integers for the first occurrence of the value key. 
//If key is found then return the index in the array where it was found else return -1 to indicate that key was not found.

int objectLast::threeP(int* inputInts, int key, int length)  
{
   for (int i=0;i<length;i++){
      if (*(inputInts+i)==key){
         return i;   
      }
   }
   
   
   return -1;
}
   
   
   
//14.	Repeat question 10 only now you will be given a sorted array of integers.   

//10.	Write a function that determines the third largest value in an array of integers. Your function must return 1 if it succeeds and 0 if it does not succeed. 
//The function will not succeed if there are less than 3 elements in the array. Note that the calling function has every intention of using this third largest value! Also, YOU ARE NOT ALLOWED TO SORT THE ARRAY!

int objectLast::fourP(int* inputInts, int* output, int length)  
{
      if (length<3){
         return 0;   
      }
      
   *output = inputInts[length-3];   

return 1;
}
   
//15.	Write a function that searches a string s for a substring sub. 
//If sub is found in s then return the index of the first char of sub occurring in s, otherwise return -1 to indicate that the substring was not found.
int objectLast::fiveP(char* s, char* sub)
{
int lenOne = strlen(s);   
int lenTwo = strlen(sub);

bool found = false;

int i,j,k;

if (lenOne<lenTwo){
   return -1;
}
   j=0;
   for (int i=0;i<(lenOne-lenTwo);i++){
      for (j=0;j<lenTwo;j++){
         found =true;
         if(*(s+i+j)!=*(sub+j)){
            found=false;                       
         }
      }
      
      if (found){
      return i;   
      }
      
   }
   
   
   
return -1;
}
   
   
   
//16.	Write a function that deletes the first occurrence of the substring sub in the given string s.
//If sub is deleted then return 1, otherwise return 0 to indicate that the substring was not deleted.
   
int objectLast::sixP(char* s, char* sub)
{
int lenOne = strlen(s);   
int lenTwo = strlen(sub); 
int deleted = fiveP(s, sub);
int deleteTrue = 0;

   for (int i=0;i<lenTwo;i++){
      deleteTrue=twoP(s, deleted);
      if (deleteTrue==0){
         return 0;
      }
   }
return 1;
}

//17.	Write a function that returns the minimum number of coins required to make up a certain money amount given in cents. 
//Assume that you can use loonies, quarters, dimes, nickels, and pennies. For example, if you pass a money total of 789 cents to your function then your function should return 15. 
//It takes a minimum of 15 these coins to make up 789 cents.
int objectLast::sevenP(int centValue)
{
int valueRemaining=centValue;
int numCoins=0;
int coinSize[5]={100,25,10,5,1};
int numTypeCoin=5;

   for (int i=0;i<numTypeCoin;i++){
      while (valueRemaining>coinSize[i]){
         valueRemaining-=coinSize[i];
         numCoins++;
      }
   }
   
return numCoins;
}
   
//18.	Write a function that takes a 32-bit binary number in the form of an eight digit hex number (stored as a string) 
//and returns the two's complement of the number also as an eight digit hex number.   
//Will reject anything that contains invalid characters, NOT 0-9, a-f, A-F
//output is a 9 character long array.
int objectLast::eightP(char* hexIn, char* output) //Slightly overengineered...
{
char tempArray[8+1];
unsigned char tempArrayInt[8+1];
unsigned char tempInt=0;
char temp;

   for (int i=0;i<8;i++){
      temp= *(hexIn+i);
      if (temp>='a'&&temp<='f'){
         tempInt=temp-'a'+10;  
         tempArrayInt[i]=tempInt; 
         continue;
      }    
      
      if (temp>='A'&&temp<='F'){
         tempInt=temp-'A'+10;
         tempArrayInt[i]=tempInt; 
         continue;
      }
      
      if (temp>='0'&&temp<='9'){
         tempInt=temp-'0';
         tempArrayInt[i]=tempInt; 
         continue;
      }
   return 0; //failure, invalid character
   }
   tempInt=0;
   
   for (int j=0;j<8;j++){
      tempInt=(tempArrayInt[j]^0xF);
      //tempInt = (~tempArrayInt[j]); Will this work?
      if (tempInt<=9){
         tempArray[j]='0'+tempInt;
      }
      
      if (tempInt>9&&tempInt<=15){
         tempArray[j]='A'+tempInt-10;
      }
       
   }

   for (int k=0;k<8;k++){
      *(output+k) = tempArray[k];    
   }

return 1;
}
   
//19.	Write a function that takes a single array of integers in which the values from index lo to mid 
//are sorted AND the values from index mid + 1 to hi are sorted. After the function call the values from lo to hi must be sorted.   
   
int objectLast::nineP(int* arrayInt, int lo, int mid, int hi, int length)
{
int tempArray[length+4];
int tempArrayPart[hi-lo];
int tempArraySorted[hi-lo];

int midTempArray = mid - lo;
int hiTempArray = hi - lo;

int j=0;

int* P_lo = tempArrayPart;
int* P_mid = tempArrayPart+(mid-lo+1);
   
for (int a=0;a<length;a++){
   tempArray[a]=*(arrayInt+a); 
}

for (int b=lo;b<hi;b++){
   tempArrayPart[b-lo]=tempArray[b]; 
}

bool P_loEnd =false;

while (true){

   if (P_lo==tempArrayPart+(mid-lo+1)){
      P_loEnd=true;//P_lo has ended
      break;   
   }
   
   if (P_mid==tempArrayPart+(hi-lo+1)){
      
      break;   
   }

   if (*P_lo>*P_mid){
      tempArraySorted[j]=*P_lo;
      P_lo++;   
      j++;
   }
   
   if (*P_lo<*P_mid){
      tempArraySorted[j]=*P_mid;
      P_mid++;   
      j++;
   }

}
   while (P_loEnd==true){
      tempArraySorted[j]=*P_mid;
      j++;
      P_mid++;
      if (P_mid==tempArrayPart+(hi-lo+1)){
         break;   
      }
   }
   
   while (P_loEnd!=true){
      tempArraySorted[j]=*P_lo;
      j++;
      P_lo++;
      if (P_mid==tempArrayPart+(mid-lo+1)){
         break;   
      }   
         
   }
   
   j=0;
   for (int k=lo;k<hi;k++){
      tempArray[k]=tempArraySorted[j];
      j++;
   }
   

   for (int l=0;l<length;l++){
      *(arrayInt+l)=tempArray[l];
   }
return 1;
}
   
   
//20.	Write a function that takes an array of integers, randomly selects an integer in the array and then processes the array 
//so that this randomly selected integer is placed in the array into an index in the array such that all of the numbers at lower indices 
//are less than or equal to this number and all of numbers at higher indices are greater than this number.    
   
int objectLast::tenP(int* anArray, int* output, int length)   
{
//Could use quicksort or binary tree?
srand (time(NULL));

int randNumValue=0;
int randNumPos=0;
int randNumPos = rand ()%(length);
int randNumValue =*(anArray+ randNumPos);

int outputArray[length];
int l=0;//counter for the above array;
    
int smallArray[length];//contains numbers smaller than the selected number.
int largeArray[length];//contains numbers bigger than the selected number.
int j,k;//j is for small array, k is for large array.
j=0;k=0;
    
   for (int i=0;i<length;i++){   
      if (*(anArray+i)>randNumValue){
         largeArray[k]=*(anArray+i);
         k++;
      }
      
      if (*(anArray+i)<=randNumValue){
         smallArray[j]=*(anArray+i);
         j++;
      }
   }
    
   for (int a = 0;a<j;a++){
      outputArray[a]=smallArray[a];
   }
   outputArray[j+1]=randNumValue;
    
   for (int a = j+2;a<length;a++){
      outputArray[a]=smallArray[a];
   }
    
    for (int a = 0;a<length;a++){
      output[a]=outputArray[a];
   }
return 1;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
