// comment -> documentation

//  # => preprocessor
//  include -> directive to include a file
// stdio -> standard input output library
// h -> header file

// int -> return type of main function
// main -> main name of the function definition
// main() -> entry point of the program -> where the execution starts -> compiler will start execution of code from main function
// { -> starting of the function body
// } -> ending of the function body
// main function definition ko call kwn krta ? -> OS krta hai
// return 0 -> return type of main function is int so we have to return an integer

// #include<stdio.h>

// int main(){

//     printf("Hello Bhailog..");  // output print
//     return 0; // optional hai
// }

// #include<stdio.h>

// int main(){
//     printf("\nFirst Line");
//     printf("\nSecond Line");
// }

// DataType ->

// 1. Integer -> ex : 1,2,3,4,5 -> int -> 4 bytes
// 2. Float -> ex : 1.5,2.5,3.987 -> float -> 4 bytes
// 3. Double -> ex : 1.56789,2.34567 -> double -> 8 bytes
// 4. Character -> ex : 'a','b','c' -> char -> 1 byte
// 5. string -> in c programming string is not a data type -> array of characters -> char array
// 6. void -> no value -> used for functions that do not return a value
// 7. signed and unsigned -> signed means can store both positive and negative values, unsigned means can store only positive values

// Varible : It is like container where we store data

// Formate Specifiers :

// %d -> int
// %f -> float
// %lf -> double
// %c -> char
// %s -> string

// #include<stdio.h>

// int main(){

//     // Variable declaration

//     // datatype variable_name;

//     // ex : int age;

//     int age; // Variable declaration

//     age = 100;

//     printf("Your age is : %d",age);
// }

// #include<stdio.h>

// int main(){

//     // Variable declaration

//     // datatype variable_name;

//     // ex : int age;

//     int age; // Variable declaration

//     //  redeclaration of variable is not allowed -> one variable should be declare one time only.
//     // int age = 100; // not ok

//     printf("Your age is : %d",age);
// }

// #include<stdio.h>

// int main(){

//     int age = 200; // we can declared and inisilisation variable in same line.

//     printf("Your age1 is : %d\n",age);

//     age = 500; // reinisilation variable

//     printf("Your age2(reinisilation variable) is : %d",age);
// }

// #include<stdio.h>

// int main(){

//    long int phone = 5678464;

//    printf("Long int : %lu\n",phone);

//    char ch = 'a'; // ok
//     // char ch = "a"; // not ok

//    printf("Char value : %c\n",ch);

//    char str[] = "Pawan Maurya";

//    printf("Username (str) : %s\n",str);

//    float pi = 3.14;

//    printf("PI is : %0.2f\n",pi);

//    double price = 123543432.2453456;
//    printf("Price : %0.7lf\n",price);
// }

// #include<stdio.h>

// int main(){

//     printf("Size of int : %d\n",sizeof(int));
//     printf("Size of float : %d\n",sizeof(float));
//     printf("Size of double : %d\n",sizeof(double));
//     printf("Size of char : %d\n",sizeof(char));
//     printf("Size of short int : %d\n",sizeof(short int));
//     printf("Size of long int : %d\n",sizeof(long int));
//     printf("Size of long long int : %d\n",sizeof(long long int));
//     printf("Size of signed int : %d\n",sizeof(signed int));
//     printf("Size of unsigned int : %d\n",sizeof(unsigned int));
//     printf("Size of void : %d\n",sizeof(void));
//     printf("Size of size_t : %d\n",sizeof(size_t));
//     printf("Size of wchar_t : %d\n",sizeof(wchar_t));

//     double num = 20;
//     printf("Size of num : %d\n",sizeof(num));

// }

// #include<stdio.h>

// int main(){

// const int num = 10;

// // num= 200; // not ok

// printf("Num is : %d",num);

// }

// #include<stdio.h>

// int main(){

//     // const variable declared and inisilization in same line -> when we do it manually -> not taking input from user.
// // const int num;  // not ok

// // num= 200; // not ok

// // printf("Num is : %d",num);

// }

// Constant in c : A constant is a fixed value that cannot be altered by the program during normal execution. Constants are used to define values that are not expected to change, enhancing code readability and maintainability.
// Types of Constants in C:
// 1. Literal Constants: These are fixed values directly used in the code. They can be of various types, such as integer literals (e.g., 42), floating-point literals (e.g., 3.14), character literals (e.g., 'A'), and string literals (e.g., "Hello").
// 2. Symbolic Constants (macros): These are defined using the #define preprocessor directive or the const keyword. Symbolic constants provide a way to give meaningful names to fixed values, making the code more readable and easier to maintain.
// micro variable not declared and inisilization in same line -> when we do it manually -> not taking input from user.
// #define PI 3.14 -> global constant
// const int num = 10; -> local constant
// no memory allocation for #define constant -> memory allocation happen when value assigned to a variable

// #include<stdio.h>

// int main(){

// int num = 100;

// printf("The value of num is : %d\n",num);
// num = 300;

// printf("The value of num is : %d\n",num);

// }

// #include<stdio.h>

// int main(){

// const int num;
// // num= 100; // not ok
// // constat variable declared and inisilization in same line -> when we do it manually -> not taking input from user.
// // num = 300;  // not ok

// printf("The value of num is : %d\n",num);

// }

// #include<stdio.h>

// int main(){

// const int num = 100;
// // constat variable declared and inisilization in same line -> when we do it manually -> not taking input from user.

// printf("The value of num is : %d\n",num);
// }

// Micro Constant : It is used to define constant value. It is defined using #define preprocessor directive. It is a global constant. It is not a variable. It does not occupy any memory. It is replaced by the value during compilation. It is used to give meaningful names to constant values.
// syntax : #define CONSTANT_NAME value
// no ; at the end of the line
// by convention constant name is written in uppercase letters
// memory allocation happen when value assigned to a variable

// #include<stdio.h>
// #define PI 3.14  // gloable

// int main(){
//  //const int num = 10;  // local variable

// //  PI = 34.56; // not ok
//     printf("The value of PI : %0.2f",PI);

// }

// #include <stdio.h>
// #define PI 3.14 // gloable
// #define NAME "Pawan" // gloable

// int main()
// {
//     int num;

//     printf("Size of num is : %d\n", sizeof(num));
//     printf("Size of PI is : %d\n", sizeof(PI));
//     printf("Size of NAME is : %d\n", sizeof(NAME));
//     printf("The value of PI : %0.2f\n", PI);
// }