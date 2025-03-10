#include <stdio.h>
#include <stdlib.h>

struct student {
    int no;
    char name[100];
    float marks;

};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*(sizeof(struct student)));
    for(int i = 0;i<a;i++) {
        scanf("%d %s %f",&students[i].no,students[i].name,&students[i].marks);
    }
    int j =0;
    for(int i = 0;i<a;i++) {
        j = j+students[i].marks;
    }
    j = j/a;
    printf("Average Marks: %.2f",j);