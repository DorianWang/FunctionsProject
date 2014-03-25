
#ifndef LAST_H
#define LAST_H 

#include <string>
#include <iostream>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

#define SMALL_NEG -2147483647 

using namespace std;




class objectLast
{
      
public:

int oneP(char* s, char c);

int twoP(char* s, char c);
int twoP(char* s, int deleted);

int threeP(int* inputInts, int key, int length);
int fourP(int* inputInts, int* output, int length);  
int fiveP(char* s, char* sub);
int sixP(char* s, char* sub);
int sevenP(int centValue);
int eightP(char* hexIn, char* output);
int nineP(int* arrayInt, int lo, int mid, int hi, int length);
int tenP(int* anArray, int* output, int length); 
};




#endif





