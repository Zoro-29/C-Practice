#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

   int sum=0;
   int digit;
   int count=0;

   while (n!=0) {
    digit=n%10;
    n=n/10;
    if (n%2==0) {
      count+=1;
    }
    
   }
   printf("Even digits = %d\n",count);
   
    return 0;


}