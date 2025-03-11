// Your code here...
// Your code here...
#include <stdio.h>
#include <stdlib.h>
struct student {
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int a;
    scanf("%d",&a);
    struct student *students = (struct student*)malloc(a*sizeof(struct student));
    for(int i = 0;i<a;i++) {
        scanf("%d %s %f",&students[i].rollno,students[i].name,&students[i].marks);
    }
    float min = students[0].marks;
    int count= 0;
    for(int i =0;i<a;i++) {
        if(students[i].marks < min) {
            min = students[i].marks;
            count = i;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",students[count].rollno,students[count].name,students[count],marks);
}