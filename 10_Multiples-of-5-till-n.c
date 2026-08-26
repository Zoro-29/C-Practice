#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count=0;
    int i=5;
    while (i<=n) {
       printf("%d\n",i);
      i+=5;
      count+=1;
    }
    printf("Total numbers are : %d\n",count);
   
    return 0;


}
