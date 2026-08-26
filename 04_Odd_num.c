#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i=1;
    int num;
    while (i<=n) {
      printf("%d\n",i);
      i+=2;
    }


    return 0;


}