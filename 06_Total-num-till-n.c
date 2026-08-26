#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i=1;
    
    while (i<=n) {
      printf("%d\n",i);
      i++;
      
    }
    printf("Total numbers are : %d\n", i-1);

    return 0;


}