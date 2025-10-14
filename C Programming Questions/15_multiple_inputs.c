// taking multiple inputs in single scanf() statement

#include<stdio.h>

int main(){
    int age;
    float height;
    char grade;
    
    printf("Enter your age, height, and grade: ");
    scanf("%d %f %c", &age, &height, &grade);
    
    printf("Age: %d, Height: %.2f, Grade: %c\n", age, height, grade);
    
    return 0;
}