#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    int i=n;
    if(n%2==0){
        n=n-1;
      }
    while (n>=1) {
      printf("%d\n",n);
      n-=2;
      
    }
   
    return 0;


}