#include <stdio.h> 
int main() {
  int a,b,choice;
  printf("Enter two numbers: ");
  scanf("%d %d  , &a, &b);

  printf("1. Add\n2. Subtract\n3.  Multiply\n4.  Divide\n");
  printf("Enter your choice: ");
  scanf("%d" , &choice);

  switch(choice) {
       case 1: printf("Result = %d" , a + b); 
       break;
       case 2: printf("Result = %d" , a - b);
       break;
       case 3: printf("Result = %d" , a * b);
       break;
       case 4: printf("Result = %d" , a / b);
       break;
       default: printf("Invalid choice");
   }
   return 0;
}



