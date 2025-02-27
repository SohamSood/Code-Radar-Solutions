#include <stdio.h>
int main () {
    char a[100];
    scanf("%s",a);
    for(int i = 0;i<100;i++) {
        int e = 0;
        for(int j = 0;j<100;j++) {
            if((a[i] == a[j]) && ( i != j)) {
                e++;
            }
        }
        printf("%c: %d",a[i],e);
    }
}