#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
    int sum=0;

    while (i<=n) {
      if (i%3==0){
        sum=sum+i;
      }
      i++;
    }printf("The sum is : %d\n", sum);
   
    return 0;


}