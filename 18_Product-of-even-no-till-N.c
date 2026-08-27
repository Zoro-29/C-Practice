#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
    int sum=1;

    while (i<=n) {
      if (i%2==0){
        sum=sum*i;
      }
      i++;
    }printf("The sum is : %d\n", sum);
   
    return 0;


}