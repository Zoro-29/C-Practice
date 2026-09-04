#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
   int sum=0;
   int count=0;
   

    while(i<=n){
      if(i%4==0 || i%7==0) {
        printf("%d\n",i);
        count+=1;
        sum+=i;
        
      }
      i++;
    }
    printf("The count is : %d\n", count);
    printf("The sum is : %d\n",sum );
   
    return 0;


}