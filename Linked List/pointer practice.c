#include<stdio.h>

  /*void swap(int *n1, int *n2){
   int temp = *(n1); //call by reference means address pass not direct value
   //call by reference, you’re passing the address of the variable instead of its value. This means any changes made to the variable inside the function directly affect the original variable.
   *(n1) = *(n2);
   *(n2) = temp;
  }
*/

   int sum(int *a, int size){
   ///return the sum of the array
     int i,sum = 0;
     for( i = 0; i < size; i++)
     {
        sum = sum + *(a+i);

     }
     return sum;

   }

   int main(){

   int a[3]= { 4,5,6};
   int result = sum(a,3);
   printf("sum of the array is : %d", result);

   /*  int num1 = 5, num2 = 10;
     printf("num1 = %d ; num2 = %d\n", num1,num2);

     swap(&num1,&num2);
     printf("num1 = %d ; num2 = %d\n", num1,num2);
   */


/*
  int a[5] = { 1,2,3,4,5};
  int *ptr = &a[3];

  printf("%d\n", *(ptr));
  printf("%d\n", *(ptr+1));
  printf("%d\n", *(ptr-1));
*/



  /*int sum;

  for( int i = 0; i < 5; i++)
  {
   /// printf("%d", *(a+i));
    sum = sum + *(a + i);
  }

  //printf("Address of a: %u\n", a;
   printf("sum = %d\n", sum);

  */

   return 0;

}
