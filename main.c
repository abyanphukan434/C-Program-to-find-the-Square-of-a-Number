#include <stdio.h>

int main() 
{
  int num, square;
  printf("Enter the number:");
  scanf("%d", &num);
  square = num * num;
  printf("Square of the given number: %d", square);
  
  return 0;
}
