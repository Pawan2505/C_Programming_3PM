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


// #include<stdio.h>

// int main(){
//    const int num = 10;
// //    num = 10; // not ok

//     // num = 50;

//     printf("The value of num : %d\n", num);
// }


// #include<stdio.h>
// #define PI 3.14
// int main(){
//     // PI = 34; // not ok
//     printf("PI : %0.2f",PI);
// }


// scanf() : It is used to take input from user. It is a function of stdio.h library. It is used to read formatted input from standard input (keyboard). It is used to read data of various types like int, float, char, string etc.
// syntax : scanf("format specifier",&variable_name);
// & -> address of operator -> it is used to get the address of a variable. It is used to store the input value at the address of the variable. It is used to pass the address of the variable to the scanf() function.


// #include<stdio.h>

// int main(){
//     int marks; // variable declaration
//     printf("Please enter your marks : ");
//     scanf("%d",&marks); // user se input

//     printf("Your marks is : %d",marks);
// }

// #include<stdio.h>

// int main(){
//     float num1;
//     float num2;

//     printf("Please enter num1 : ");
//     scanf("%f",&num1);

//     printf("Please enter num2 : ");
//     scanf("%f",&num2);

//     printf("Sum of num1 and num2 is : %0.2f",num1+num2);

// }


// #include<stdio.h>

// int main(){
   
//     char ch;

//     printf("Enter char value : ");

//     scanf("%c",&ch);

//     printf("The value of ch is : %c",ch);

// }


// #include<stdio.h>

// int main(){
   
//     char username[15];

//     printf("Enter username : ");

//     scanf("%[^\n]s",&username);

//     printf("The username is : %s",username);

// }


// String input in c : https://www.geeksforgeeks.org/c/taking-string-input-space-c-3-different-methods/



// #include<stdio.h>

// int main(){
   
//     char username[15];

//     printf("Enter username : ");

//     gets(username);  // user input

//     printf("The username is : %s",username);

// }


// #include<stdio.h>

// int main(){
   
//     char username[15];

//     printf("Enter username : ");

//     gets(username);  // user input

//     // printf("The username is : %s",username);

//     puts(username);

// }


// Operator & Expression  

// Token : https://www.geeksforgeeks.org/c/tokens-in-c/

// a + b  -> +-> operator , a,b -> oprands

// int sum = a + b;

// 1. uniary operator -> 

// a++ -> post increment -> phle use hoga baad me increase hoga.
//++a -> pre increment -> phle increase hoga fir use hoga

// a-- -> post decrement -> phle use hoga baad me decrement hoga
// --a -> pre decrement -> phle decrese hoga baad me use hoga


// #include<stdio.h>
// int main(){
//     int a = 10;
//     printf("The value of a is : %d\n",a);
// }

// #include<stdio.h>
// int main(){
//     int a = 10;

//     printf("The value of a is : %d\n",a++); // 10
//     printf("The value of a is : %d\n",a++); // 11

//     printf("The value of a is : %d\n",++a); // 13
// }


// #include<stdio.h>
// int main(){
//     int a = 10;

//     printf("The value of a is : %d\n",--a); // 9
//     printf("The value of a is : %d\n",a++); // 9
//     printf("The value of a is : %d\n",--a); // 9
// }



// Arithmetic : +,-,/,*,%

// #include<stdio.h>

// int main(){
//     int x = 100;
//     int y = 20;

//     printf("%d\n",x+y); //120
//     printf("%d\n",x-y); //80
//     printf("%d\n",x*y); //2000
//     printf("%d\n",x/y); //5
//     printf("%d\n",x%y); //0
// }


// #include<stdio.h>

// int main(){
//     int x = 20;
//     int y = 100;

//     printf("%d\n",x%y);
// }



// #include<stdio.h>

// int main(){

//     int x = 20;

//     int y = 100;

//     printf("The value of remainder is : %d",x%y);

//     // jab bhee small number ko largest number se divide krte ho to remainder small number hota hai.
// }

//  int a = 30;

// Relational operator : > , <, == ,!=, >=, <=


// #include<stdio.h>

// int main(){

//     int num1 = 100;
//     int num2 = 86;

//     printf("%d\n",(num1<num2)); // 0
//     printf("%d\n",(num1>num2)); // 1
//     printf("%d\n",(num1>=num2)); // 1
//     printf("%d\n",(num1<=num2)); // 0
//     printf("%d\n",(num1==num2)); // 0
//     printf("%d\n",(num1!=num2)); // 1

// }

// Logical Operator : && (Logical AND), || (Logical OR), ! (Logical NOT)

// #include<stdio.h>

// int main(){

//     int num1 = 100;
//     int num2 = 86;

//     printf("%d\n",(num1<num2)&& (num1>num2)); // 0
//     printf("%d\n",(num1>num2) && (num1>=num2)); // 1
//     printf("%d\n",(num1>=num2) && (num1<=num2)); // 0
//     printf("%d\n",(num1<=num2) && (num1==num2)); // 0
//     printf("%d\n",(num1==num2) && (num1!=num2)); // 0
//     printf("%d\n",(num1!=num2) && (num1>=num2)); // 1

// }

// Method 1 :

// #include<stdio.h>

// int main(){

//     int x = 10;
//     int y = 20;

//     int temp;
//     printf("Temp : %d\n",temp);
    
//     temp = x;
//     x = y;
//     y = temp;
    
    
//     printf("The value of x : %d\n",x);
//     printf("The value of y : %d\n",y);
//     printf("Temp value : %d\n",temp);
// }

// Method 2 : swap two without using third variable

// #include<stdio.h>

// int main(){
//     int x = 10;
//     int y = 20;


//     x = x+y; // 30
//     y = x-y; // 30-20 = 10;
//     x = x-y; // 30-10 = 20

//     printf("The value of x : %d\n",x);
//     printf("The value of y : %d\n",y);
// }


// #include<stdio.h>

// int main(){
//     int x;
//     printf("Enter value of x : ");
//     scanf("%d",&x);
//     int y;
//     printf("Enter value of y : ");
//     scanf("%d",&y);


//     x = x+y; // 30
//     y = x-y; // 30-20 = 10;
//     x = x-y; // 30-10 = 20

//     printf("The value of x : %d\n",x);
//     printf("The value of y : %d\n",y);
// }


// #include<stdio.h>

// int main(){

//     int num1 = 100;
//     int num2 = 86;

//     printf("%d\n",(num1<num2) || (num1>num2)); // 1
//     printf("%d\n",(num1>num2)  || (num1>=num2)); // 1
//     printf("%d\n",(num1>=num2)  || (num1<=num2)); // 1
//     printf("%d\n",(num1<=num2)  || (num1==num2)); // 0
//     printf("%d\n",(num1==num2)  || (num1!=num2)); // 1
//     printf("%d\n",(num1!=num2)  || (num1>=num2)); // 1

// }


// #include<stdio.h>

// int main(){

//     int num1 = 100;
//     int num2 = 86;

//     printf("%d\n",!((num1<num2) || (num1>num2))); //0 
//     printf("%d\n",!((num1>num2)  && (num1>=num2))); // 0
//     printf("%d\n",!((num1>=num2)  || (num1<=num2))); // 0
//     printf("%d\n",!((num1<=num2)  && (num1==num2))); // 1
//     printf("%d\n",!((num1==num2)  || (num1!=num2))); // 0
//     printf("%d\n",!((num1!=num2)  || (num1>=num2))); // 0

// }

// #include<stdio.h>

// int main(){

//     int num1 = 100;
//     int num2 = 86;

//     printf("%d\n",!((num1<num2) || (num1>num2))); //0 
//     printf("%d\n",!((num1>num2)  && (num1>=num2))); // 0
//     printf("%d\n",!((num1>=num2)  || (num1<=num2))); // 0
//     printf("%d\n",!((num1<=num2)  && (num1==num2))); // 1
//     printf("%d\n",!((num1==num2)  || (num1!=num2))); // 0
//     printf("%d\n",!((num1!=num2)  || (num1>=num2))); // 0

// }


// #include<stdio.h>

// int main(){

//     int num1 = 10;
//     int num2 = 5;

//     printf(" 10 and 5 bitwise AND : %d",num1|num2);
// }


