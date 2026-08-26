#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int i=3;
    int sum=0;

    while(i<=n && i%3==0) {
      printf("%d\n",i);
      sum=sum+i;
      i+=3;
      
    }
    printf("the sum is : %d\n", sum);
   
    return 0;


}