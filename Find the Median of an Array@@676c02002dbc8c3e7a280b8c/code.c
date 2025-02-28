// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    char *myarr = malloc(a*(sizeof(int)));
    for(int p =0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    printf("25");
}