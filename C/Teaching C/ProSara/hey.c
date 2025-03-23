/*father age is 5 times of son's age 
and mother's age is 3 times of son's age. 
mother's age is X years. 
then what is the father's age?*/
//show father's age.
//user will inpot mother's age

#include <stdio.h>

int main(){
  int   sonAge, fatherAge, motherAge ;
  printf(" what's your mother's age  \n");
  scanf("%d",&motherAge);
  sonAge = motherAge /3 ;
  fatherAge = sonAge*5 ;
 printf("father's age is %d ",fatherAge);
}