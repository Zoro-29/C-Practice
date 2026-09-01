#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
   int product=1;

    while(i<=n){
      if(i%2==0 && i%3==0) {
        product*=i;
        
      }
      i++;
    }
    printf("%d\n", product);
   
    return 0;


}