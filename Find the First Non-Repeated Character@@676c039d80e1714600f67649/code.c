#include <stdio.h>
int main() {
    int a = 0;
    char b[100];
    scanf("%d",b);
    for(int i = 0;i<100;i++) {
        int e = 0;
        for(int j = 0;j<100;j++) {
            if((a[i] == a[j]) && ( i != j)) {
                e++;
            }
        }
        if((e == 0) && (a==0)) {
            printf("%c",a[i]);
            a++;
        }
    }
}