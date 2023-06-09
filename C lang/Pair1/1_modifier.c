#include<stdio.h>

int main(void)
{ 
     int no1;
     short int no2;
     long int no3;
     long long int no4;

     char ch1;
 //  short char ch2;    
 //  long char ch3;     

     float fno1;
 //  short float fno2;  
     long float fno3;                  // nonstandard extension used : long float

     double dno1;
 //  short double dno2; 
     long double dno3;
 

     printf("\n%d",sizeof(no1));       //4
     printf("\n%d",sizeof(no2));       //2
     printf("\n%d",sizeof(no3));       //4
     printf("\n%d",sizeof(no4));       //8
     
     printf("\n\n%d",sizeof(ch1));     //1
 //  printf("\n%d",sizeof(ch2));       //Error
 //  printf("\n%d",sizeof(ch3));       //Error
     
     printf("\n\n%d",sizeof(fno1));    //4
 //  printf("\n%d",sizeof(fno2));      //Error
     printf("\n%d",sizeof(fno3));      //8
     
     printf("\n\n%d",sizeof(dno1));    //8
 //  printf("\n%d",sizeof(dno2));      //Error
     printf("\n%d",sizeof(dno3));      //8
     

     return 0;
}







