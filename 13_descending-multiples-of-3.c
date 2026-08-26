#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n%3==1){
      n=n-1;
    }else if(n%3==2){
      n=n-2;
    }

    while (n>=3) {
      printf("%d\n", n);
      n-=3;
    }
   
    return 0;


}