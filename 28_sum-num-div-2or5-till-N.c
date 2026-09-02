#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
   int sum=0;

    while(i<=n){
      if(i%2==0 || i%5==0) {
        sum+=i;
        
      }
      i++;
    }
    printf("%d\n", sum);
   
    return 0;


}