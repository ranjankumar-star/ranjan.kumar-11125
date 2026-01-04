// experiment 19:- program to demonstrate string handling functions
#include <stdio.h>
#include <string.h>
int main() {
    char a[50]="Hello", b[50]="World";
    printf("Length: %lu\n", strlen(a));
    strcpy(b,a);
    strcat(a," C");
    printf("%s\n", a);
    printf("Compare: %d", strcmp(a,b));
    return 0;
}
// made by Ranjan Kumar
// ERP :- 11125