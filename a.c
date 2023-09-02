#include<stdio.h>

int main(){
  int a,b;
  int add(int a, int b){
    return a+b;
  }
  int subtract(int a, int b){
    return a-b;
  }
  int multiplication(int a, int b){
    return a*b;
  }
  int divide(int a, int b){
    return a/b;
  }
  
  printf("Enter a Number : \n");
  scanf("%d", &a);

  printf("Enter another Number : \n");
  scanf("%d", &b);

  printf("\n The Addition of %d and %d is : %d", a, b , add(a,b));
  printf("\n The Subtraction of %d and %d is : %d", a, b , subtract(a,b));
  printf("\n The Multiplication of %d and %d is : %d", a, b , multiplication(a,b));
  printf("\n The Division of %d and %d is : %d", a, b , divide(a,b));

  return 0;
}
