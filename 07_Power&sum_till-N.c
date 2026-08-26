#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i=1;
    int sum=0;
    while(i<=n) {
      i=i*2;
      sum=sum+i;
      
    }
     printf("%d\n",sum);
   
    return 0;


}