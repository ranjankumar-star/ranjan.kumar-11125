// experiment 18:- program to calculate the sum of elements in a 2D array
#include <stdio.h>
int main() {
    int a[2][2], sum=0;
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++) {
            scanf("%d",&a[i][j]);
            sum += a[i][j];
        }
    printf("Sum = %d", sum);
    return 0;
}
// made by Ranjan Kumar
// ERP :- 11125