#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[100];
    scanf("%c",a);
    scanf("%c",b);
    int e = 0;
    for(int i = 0;i<strlen(a);i++) {
        for(int j = 0;j<strlen(b);j++) {
            if(a[i] == b[j]) {
                e++;
                break;
            }
        }
    }
    printf("%lu",strlen(a));

    // if(strlen(a)==strlen(b) == e)  {
    //     printf("Yes");
    // } else {
    //     printf("No");
    // }
}