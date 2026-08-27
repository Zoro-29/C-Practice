#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
    int sum=0;

    while (i<=n) {
      sum+=i;
      i+=2;
    }
    printf("The sum is : %d\n", sum);
   
    return 0;


}