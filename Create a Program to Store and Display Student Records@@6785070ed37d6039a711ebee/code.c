#include <stdio.h> 
#include <stdlib.h> // Your code here...
struct student{
        int b;
        char c[100];
        float d;
    };
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student *)malloc(a * sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%d",&student[i].b);
        scanf("%s",&student[i].c);
        scanf("%f".&student[i].d);
    }
}