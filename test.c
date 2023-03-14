#include <stdio.h>
#include <stdlib.h>

// int main() {
//     printf("Hello, World!");
//     return 0;
// }

// int main() {
//     char characterName[] = "John";
//     int characterAge = 35;

//     printf("There one was a man named %s. He was %d.\n", characterName, characterAge);

//     characterAge = 50;

//     printf("He didn't like being %d.", characterAge);

//     return 0;
// }

// int main() {
//     int age = 40;
//     double gpa = 3.6;
//     float gpa1 = 3.6;
//     char grade = '@';
//     char phrase[] = "Giraffe Academy";

//     return 0;
// }

// int main() {
//     printf("My favorite %s is %d\n", "number", 7);
//     printf("My favorite %s is %f", "number", 3.145743);
//     return 0;
// }

// #include <math.h>

// int main() {
//     printf("%f\n", 5 + 3.5);

//     printf("%d\n", 5 / 4);
//     printf("%f\n", 5 / 4.2);

//     printf("%f\n", pow(2, 3));

//     printf("%f\n", ceil(37.454));
//     printf("%f\n", floor(37.454));

//     /*
//         THIS IS A COMMENT BLOCK
//     */

//     return 0;
// }

// int main() {
//     const int FAV_NUM = 7;
//     printf("%d", FAV_NUM);

//     /* READ ONLY VALUE, esto da error
//     FAV_NUM = 9;  
//     printf("%d", FAV_NUM);
//     */

//     return 0;
// }

// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     printf("You are %d years old", age);
    
//     char grade;
//     printf("Enter your grade: ");
//     scanf("%c", &grade);
//     printf("Your grade is %c", grade);

//     char name[20];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Your name is %s", name);

//     char name[20];
//     printf("Enter your name:");
//     fgets(name, 20, stdin);
//     printf("Your name is %s", name);

//     return 0;
// }

int main() {
    int num1;
    int num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("Enter second number:");
    scanf("%d", &num2);

    printf("Answer: %d", num1 + num2);

    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Anser: %f", num1 + num2);
}