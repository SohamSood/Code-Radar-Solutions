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
        scanf("%d %s %f", &students[i].b, students[i].c, &students[i].d);
    }
    for(int i =0;i<a;i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f \n",students[i].b,students[i].c,students[i].d);
    }
}