#include <stdio.h>
int main(void) {
int n1,n2;
  
  printf("Enter an integer: ");
    scanf("%d",&n1);
  printf("Enter another integer: ");
    scanf("%d",&n2);
      if (n1 > n2)
        printf("The largest number is: %d",n1);
      else
        printf("The largest number is: %d",n2);
  return 0;
}
