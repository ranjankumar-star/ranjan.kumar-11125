// experiment 12:- program to find the sum of first n natural numbers
#include <stdio.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum+=i;
    printf("Sum = %d",sum);
    return 0;
}
// made by Ranjan Kumar
// ERP :- 11125