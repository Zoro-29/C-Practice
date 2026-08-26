#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
    int sum=1;

    while(i<=n) {
      sum=sum*i;
      i++;
    }
    printf("%d\n",sum);
   
    return 0;


}