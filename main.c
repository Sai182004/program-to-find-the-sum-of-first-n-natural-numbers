#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter any number : ");
    scanf("%d", &n);
    
             //Taking the input from the user 
     for(int i=1;i<=n;i++){
   
            //using for loop to calculate the sum
        sum=sum+i;
    }
              //printing the output according to the given input
    printf("\nSum of the first %d Natural Numbers is %d",n, sum);
    return 0;
}