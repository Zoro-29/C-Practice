#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i=2;
    int sum=0;
    while(i<=n) {
      sum=sum+i;
      i+=2;
      
      
    }
     printf("%d\n",sum);
   
    return 0;


}