#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

   int i=1;
   int count=0;
   

   while (n!=0) {
    n=n/10;
    count+=1;
    i++;
   }
   printf("Total digits = %d\n",count);
   
    return 0;


}