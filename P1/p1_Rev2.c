#include<stdio.h>


int main()
{
  //This is project 1 of project Euler.
  //This is a simple program to find the sum of all the multiples of 3 or 5 below 1000.
  //The answer is 233168.
  

int sum = 0;




for(int i=0; i<1000;i++){
  if(i%3==0){
      sum=sum+i;
    }
  else if(i%5==0)
      sum=sum+i;
  };



/*for(int i=0; i<1000;i++){*/
/*  if(i%3==0 || i%5==0)*/
/*      sum=sum+i;*/
/*  };*/

/**/
/*for(int i=0; i<1000;i++){*/
/*  if(i%15==0)*/
/*      sum=sum-i;*/
/*  };*/
/**/

printf("The final sum is: %d\n", sum);
}
