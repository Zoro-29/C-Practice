#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count=0;
    int i=0;
    while (i<=n) {
      i+=5;
      count+=1;
      printf("%d\n",i);
      
    }
    printf("Total numbers are : %d\n",count-1);
   
    return 0;


}