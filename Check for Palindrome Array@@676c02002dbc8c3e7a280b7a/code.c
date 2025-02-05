#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int y = 0;y<a;y++) {
        scanf("%d",&myarr[y]);
    }
    int e = 0;
    for(int i = 0;i<a;i++) {
        if(myarr[i] == myarr[a-1-i]) {
            break;
        } else {
            e++;
        }
    }
    if(e == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
}