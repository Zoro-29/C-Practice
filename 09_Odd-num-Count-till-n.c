#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count=0;
    int i=1;
    while (i<=n) {
      printf("%d\n",i);
      count+=1;
      i+=2;
    }
    printf("Total numbers are : %d\n",count);
   
    return 0;


}