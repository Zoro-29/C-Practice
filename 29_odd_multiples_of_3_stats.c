#include <stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int i=1;
   int sum=0;
   int count=0;
   int product=1;

    while(i<=n){
      if(i%2!=0 && i%3==0) {
        count+=1;
        sum+=i;
        product*=i;
      }
      i++;
    }
    printf("The count is : %d\n", count);
    printf("The sum is : %d\n",sum );
    printf("The product is : %d\n", product);
   
    return 0;


}