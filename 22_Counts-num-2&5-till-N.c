#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
    int count=0;

    while(i<=n){
      if(i%2==0 && i%5==0) {
        printf("%d\n",i);
        count+=1;
      }
      i++;
    }
    printf("Total = %d\n",count);
   
    return 0;


}