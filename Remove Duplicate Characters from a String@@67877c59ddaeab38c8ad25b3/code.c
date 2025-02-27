#include <stdio.h>
int main() {
    char a;
    scanf("%s",a);
    int b,e=0;
    for(int i = 0;i<100;i++) {
        int f = 0;
        for(int j= 0;j<100;j++) {
            if((a[i] == a[j]) && (i != j)) {
                f++;
            }
        }
        if( f == 0 ) {
            printf("%c",a[i]);
        }
    }
}