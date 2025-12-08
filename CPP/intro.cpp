// #include<iostream>

// int main(){

//     // printf("Hello Bhai!");

//     std::cout<<"Aur bhai samjh aa raha hai!"<<std::endl;
//     std::cout<<"Aur bhai samjh aa raha hai!";

// }

// #include<iostream>

// using namespace std;

// int main(){

//   cout<<"Aur bhai samjh aa raha hai!"<<endl;
//   cout<<"Aur bhai samjh aa raha hai!";

// }

//  variable (rule of variable) :

// #include<iostream>

// using namespace std;

// int main(){

//     // Rule 1:  number after variable name use kr skte ho

//     // int num123; // ok

//     //  Rule 2 : number before bariable name use nhi kr skte
//     // int 25num; // not ok

//     // Rule 3 :  white space inside variable name is not vaild

//     // string first name; // not ok

//     // Rule 4: special character not allowed only allow _,$

//     // string first_name; // ok

//     // int _num; // ok
//     // int $num; // ok
//     // int #num; // not ok

//     // Rule 5 : keywoard not allowed

//     // int else; // not ok

//     // Rule 6 :  num and Num -> both variable diffrent

//     // int num;
//     // int num; // not ok

//     // int Num;
// }

// #include<iostream>

// using namespace std;

// int main(){
//     string name = "Pawan Maurya";
//     cout<<name<<endl;
//     cout<<sizeof(name)<<endl;

//     bool isPresent = 0;

//     cout<<isPresent<<endl;
// }

// user input

// #include<iostream>

// using namespace std;

// int main(){
//     int num1,num2;
//     cout<<"Please eneter num value : ";
//     cin>>num1>>num2;
//     cout<<"The value of num1 is : "<<num1<<endl;
//     cout<<"The value of num2 is : "<<num2<<endl;
// }

// #include<iostream>

// using namespace std;

// int num1 = 100;  // gloable variable

// int main(){
//     int num1,num2;  // local variable
//     cout<<"Please eneter num value : ";
//     cin>>num1>>num2;
//     cout<<"The value of num1 is : "<<num1<<endl;
//     cout<<"The value of ::num1 is : "<<::num1<<endl;
//     cout<<"The value of num2 is : "<<num2<<endl;
// }

// #include<iostream>

// using namespace std;

// int num1 = 100;  // gloable variable

// namespace na{
//     int num1 = 34;
// }
// namespace nb{
//     int num1 = 340;
// }

// int main(){
//     int num1,num2;  // local variable
//     cout<<"Please eneter num value : ";
//     cin>>num1>>num2;
//     cout<<"The value of num1 is : "<<num1<<endl;
//     cout<<"The value of ::num1 is : "<<::num1<<endl;
//     cout<<"The value of num2 is : "<<num2<<endl;
//     cout<<"The value of num1 is : "<<na::num1<<endl;
//     cout<<"The value of num1 is : "<<nb::num1<<endl;
// }

// Loop : reaped task

// entry control loop
// 1. for loop : range
// 2. while loop : condition
// exist control loop
// 3. do while loop :

// For loop

// #include<iostream>

// using namespace std;

// int main(){
//     // cout<<"1"<<endl;
//     // cout<<"2"<<endl;
//     // cout<<"3"<<endl;
//     // cout<<"4"<<endl;
//     // cout<<"5"<<endl;
//     // cout<<"6"<<endl;
//     // cout<<"7"<<endl;
//     // cout<<"8"<<endl;
//     // cout<<"9"<<endl;
//     // cout<<"10"<<endl;

//     // for(statement1, statement2, statement3){

//     // }

//     // statement1 -> starting  point
//     // statement2 -> condition
//     // statement3 -> inc/dec

//     for(int i = 1; i <= 10; i++){
//         // cout<<i<<endl;
//         printf("%d\n",i);
//     }
// }

// #include<iostream>

// using namespace std;

// int main(){

//     // while (condition)
//     // {
//     //     /*block code */
//     // }
//     int num = 1;

//     while (num<=10)
//     {
//         cout<<num<<endl;
//         num++;
//     }

// }

// #include<iostream>

// using namespace std;

// int main(){

//     int num = 1;

//     // infinite
//     while (num>0)
//     {
//         cout<<num<<endl;
//         num++;
//     }

// }

// #include<iostream>

// using namespace std;

// int main(){

//     int num = 1;

//     // infinite
//     while (num>0)
//     {
//         cout<<num<<endl;
//         num++;
//     }

// }

// #include<iostream>

// using namespace std;

// int main(){

//     int num = 10;

//     // infinite
//     while (num>0)
//     {
//         cout<<num<<endl;
//         num--;
//     }

// }

// #include<iostream>

// using namespace std;

// int main(){

//     // do{

//     // }while(condition);
//     int num = 11;

//     do{
//         cout<<num<<endl;

//     }while(num<=10);

// }

// #include<iostream>

// using namespace std;

// int main(){

//     // do{

//     // }while(condition);
//     int num = 1;

//     do{
//         cout<<num<<endl;
//         num++;

//     }while(num<=10);

// }

// sum o first and last digit of number;

// #include <iostream>
// using namespace std;
// int main()
// {

//     int num;
//     cout << "Enter number : ";
//     cin >> num;

//     int last = num % 10;

//     while (num >= 10)
//     {
//         num = num / 10;
//     }
//     int first = num;

//     int result = first + last;

//     cout << "Sum of first and last number is : " << result << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int num;
//     cout << "Enter number : ";
//     cin >> num;

//     num = num / 10;

//     int sum = 0;

//     while (num >= 10)
//     {
//         int digit = num%10;
//         sum += digit;
//         num = num / 10;
//     }
//     cout << "Sum of middle number is : " << sum << endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     for(int row = 1; row<=5; row++){

//         for(int col = 1; col<=5; col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     for(int row = 1; row<=5; row++){

//         for(int col = 1; col<=row; col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     for(int row = 1; row<=5; row++){

//         //space

//         for(int space = 1; space<= 5-row; space++){
//             cout<<"_";
//         }
//         //number
//         for(int num = 5+1-row; num<=5; num++){
//             cout<<num;
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int arr[6] = {10,20,30,40,50,60};

//     cout<<arr[0]<<" ";
//     cout<<arr[1]<<" ";
//     cout<<arr[2]<<" ";
//     cout<<arr[3]<<" ";
//     cout<<arr[4]<<" ";
//     cout<<arr[5]<<" ";
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int arr[6];

//     cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5];

//     cout<<arr[0]<<" ";
//     cout<<arr[1]<<" ";
//     cout<<arr[2]<<" ";
//     cout<<arr[3]<<" ";
//     cout<<arr[4]<<" ";
//     cout<<arr[5]<<" ";
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int arr[6];

//     cin>>arr[0];
//     cin>>arr[1];
//     cin>>arr[2];
//     cin>>arr[3];
//     cin>>arr[4];
//     cin>>arr[5];

//     cout<<arr[0]<<" ";
//     cout<<arr[1]<<" ";
//     cout<<arr[2]<<" ";
//     cout<<arr[3]<<" ";
//     cout<<arr[4]<<" ";
//     cout<<arr[5]<<" ";
// }

// #include<iostream>

// // using namespace std;

// int main(){
//     int arr[6];

//     for(int i = 0; i <= 5; i++){
//         std::cout<<"Enter element at "<<i<<"index :";
//         std::cin>>arr[i];
//     }
//     std::cout<<"\n Original Array : ";
//     for(int i = 0; i <= 5; i++){
//         std::cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>

// using namespace std;

// int main(){

//     int arr[] ={23,43,45,67,898};

//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(arr)/sizeof(arr[0])<<endl;

// }

// #include<iostream>

// using namespace std;

// int main(){

//     int arr[] ={23,43,45,67,898};

//     cout<<sizeof(arr)<<endl;
//     cout<<sizeof(arr)/sizeof(arr[3])<<endl;

// }

// #include<iostream>

// using namespace std;

// int main(){

//     int arr[] ={23,43,45,67,898};

//     int length = sizeof(arr)/sizeof(arr[3]);

//     for(int i =0; i<length;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// searching operation

// #include<iostream>

// using namespace std;

// int main(){

//     int arr[] ={23,43,45,67,898,67};
//     int searchdata = 67;
//     int length = sizeof(arr)/sizeof(arr[3]);

//     for(int i =0; i<length;i++){
//         if(arr[i] == searchdata){
//             cout<<i;
//             break;
//         }

//     }
// }

// #include<iostream>

// using namespace std;

// int main(){

//     int arr[] ={23,43,45,67,898,67};
//     int searchdata = 67;
//     int update = 77;
//     int length = sizeof(arr)/sizeof(arr[3]);

//     for(int i =0; i<length;i++){
//         if(arr[i] == searchdata){
//             arr[i] = update;
//             break;
//         }*-
//     }

//     for(int i = 0; i <length; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int row_size, col_size;

//     cout<<"Enter row size : ";
//     cin>>row_size;

//     cout<<"Enter col size : ";
//     cin>>col_size;

//     int arr[row_size][col_size];

//     for(int row = 0; row<row_size; row++){

//         for(int col = 0; col<col_size; col++){
//             cout<<"Enter element at "<<row<<" row and "<<col<<" col : ";
//             cin>>arr[row][col];
//         }
//     }

//     cout<<"2D array is : "<<endl;

//     for(int row = 0; row<row_size; row++){

//         for(int col = 0; col<col_size; col++){

//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Function :

// // 1. Take something and return something

// #include<iostream>

// using namespace std;

// // Function definition -> x,y -> parameter
// int addition(int x, int y){

//     cout<<"X : "<<x<<endl;  // 10
//     cout<<"Y : "<<y<<endl; // 20

// }

// int main(){
//     // functipon call or invoke function
// addition(10,20); // 10,20 -> argument
// }

// 1. Take something and return something

// #include<iostream>

// using namespace std;

// // Function definition -> x,y -> parameter
// int addition(int x, int y){

//  return x+y;

// }

// int main(){
//     // functipon call or invoke function
//     int sum = addition(10,20); // 10,20 -> argument
//     cout<<"Sum of both number: "<<sum<<endl;
// }

// 2. Take something and return nothing

// #include<iostream>

// using namespace std;

// int addition(int x, int y){

//  cout<<"The sum of "<<x<<" and "<<y<<" is : "<<x+y<<endl;

// }

// int main(){

//     addition(10,200);

// }

// 3. Take nothing and return nothing

// #include<iostream>

// using namespace std;

// int addition(){
//     int x = 20;
//     int y = 30;
//     cout<<"The sum of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
// }

// int main(){

//     addition();

// }

// #include<iostream>

// using namespace std;

// int main(){

//     addition(); //  'addition' was not declared in this scope

// }

// int addition(){
//     int x = 20;
//     int y = 30;
//     cout<<"The sum of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
// }

// #include<iostream>

// using namespace std;
// int addition();
// int main(){

//     addition();

// }

// int addition(){
//     int x = 20;
//     int y = 30;
//     cout<<"The sum of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
// }

// 4. Take nothing and return something

// #include<iostream>

// using namespace std;
// int addition(); // function declaration
// int main(){

//     cout<<"Sum of both number : "<<addition()<<endl; // function invoke

// }

// int addition(){ // function definition
//     int x = 20;
//     int y = 300;
//     return x+y;
// }

// #include<iostream>

// using namespace std;
// int addition(){
//     int x = 20;
//     int y = 300;
//     return x+y;
// }
// int main(){

//     cout<<"Sum of both number : "<<addition()<<endl;

// }

// #include<iostream>

// using namespace std;

// int main(){
//     int a = 20;

//     int *ptr = &a;

//     *ptr = 50;

//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of *ptr : "<<*ptr<<endl;
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int a = 20;

//     int *ptr = &a;

//     *ptr = 50;

//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of *ptr : "<<*ptr<<endl;

//     cout<<"Address of a and ptr"<<endl;

//     cout<<"Value of a : "<<&a<<endl;
//     cout<<"Value of *ptr : "<<ptr<<endl;
// }

// #include<iostream>

// using namespace std;

// int main(){
//     int arr[5] = {10,20,30,40,50};
//     int *ptr[5];

//     for(int i = 0; i <5; i++){
//         ptr[i] = &arr[i];
//     }
//     for(int i = 0; i <5; i++){
//         cout<<*ptr[i]<<endl;
//     }
//     cout<<"arr address : "<<endl;
//     for(int i = 0; i <5; i++){
//         cout<<&arr[i]<<endl;
//     }
//     cout<<"ptr store address : "<<endl;
//     for(int i = 0; i <5; i++){
//         cout<<ptr[i]<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;

//     cout<<x<<endl;
//     cout<<&x<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int *ptr = &x;
//     cout<<x<<endl;
//     cout<<&x<<endl;

//     cout<<"Pointer Concept : "<<endl;

//     cout<<"ptr : "<<ptr<<endl;
//     cout<<"*ptr : "<<*ptr<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int *ptr1 = &x;
//     cout<<x<<endl;
//     cout<<&x<<endl;
//     cout<<"Pointer Concept : "<<endl;

//     cout<<"ptr1 : "<<ptr1<<endl;
//     cout<<"*ptr1 : "<<*ptr1<<endl;
//     int **ptr2 = &ptr1;
//     cout<<"&ptr1 : "<<&ptr1<<endl;
//     cout<<"ptr2 : "<<ptr2<<endl;
//     cout<<"*ptr2 : "<<*ptr2<<endl;
//     cout<<"**ptr2 : "<<**ptr2<<endl;
//     cout<<"&ptr2 : "<<&ptr2<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,34,56,7,8};

//     cout<<&arr<<endl;
//     cout<<&arr[0]<<endl;
//     cout<<&arr[1]<<endl;
//     cout<<&arr[2]<<endl;
//     cout<<&arr[3]<<endl;
//     cout<<&arr[4]<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,34,56,7,8};

//     for(int i = 0; i <5; i++){
//         cout<<&arr[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,34,56,7,8};

//     for(int i = 0; i <5; i++){
//         cout<<&arr[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {12,34,56,7,8};

//     cout<<arr<<endl;
//     cout<<&arr<<endl;

//     int *ptr = arr;

//     for(int i = 0; i<5; i++){
//         cout<<i<<" index address : "<<(ptr+i)<<endl;
//     }

//     for(int i = 0; i<5; i++){
//         cout<<i<<" index value : "<<*(ptr+i)<<endl;
//     }

// }

// call by value

// #include<iostream>
// using namespace std;

// void display(int x){
//     cout<<"The value of x : "<<x<<endl;
// }

// int main(){
// int a = 10;
// display(a);

// }

// call by reference

// #include <iostream>
// using namespace std;

// void display(int &x)
// {
//     cout << "The value of x : " << x << endl;
//     ++x;
//     cout << "The value of x : " << x << endl;
// }

// int main()
// {
//     int a = 10;
//     cout << "The value of a : " << a << endl;
//     display(a);

//     cout << "The value of a : " << a << endl;
// }

// #include <iostream>
// using namespace std;

// void display(int x)
// {
//     cout << "The value of x : " << x << endl;
//     ++x;
//     cout << "The value of x : " << x << endl;
// }

// int main()
// {
//     int a = 10;
//     cout << "The value of a : " << a << endl;
//     display(a);

//     cout << "The value of a : " << a << endl;
// }


// #include<iostream>

// using namespace std;

// // create class

// class Student{

// };

// int main(){

// Student ashish;  // create object

// }


// #include<iostream>

// using namespace std;

// // create class

// class Student{

//     // member function
// public : // we can access from anywhere
//     void display(){
//         cout<<"Hello Student!"<<endl;
//     }

//     int details(){
//         cout<<"Noice very high!"<<endl;
//     }

// };

// int main(){

// Student ashish;  // create object

// // display(); // not ok

// ashish.display();  // ok
// ashish.details(); 

// }

// #include<iostream>

// using namespace std;

// // create class

// class Student{

//     // member function
// public : // we can access from anywhere
//     void display(){
//         cout<<"Hello Student!"<<endl;
//     }

//     int details(){
//         cout<<"Noice very high!"<<endl;
//     }

// };

// int main(){

// Student ashish;  // create object

// // display(); // not ok

// ashish.display();  // ok
// ashish.details(); 

// }

// #include<iostream>

// using namespace std;

// // create class

// class Student{

//     private:

//     string name;
//     int age;

//     // member function
// public : // we can access from anywhere
//     void display(){
//         cout<<"Hello Student!"<<endl;
//     }

//     int details(){
//         cout<<"Noice very high!"<<endl;
//     }

// };

// int main(){

// Student ashish;  // create object

// // display(); // not ok

// ashish.display();  // ok
// ashish.details(); 

// ashish.name = "AShu"; // not ok
// ashish.age = 14; // not ok

// }

// #include<iostream>

// using namespace std;

// // create class

// class Student{

//    public : // we can access from anywhere

//    // Data member
//     string name;
//     int age;

//     // member function
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

//     int details(){
//         cout<<"Noice very high!"<<endl;
//     }

// };

// int main(){

// Student ashish;  // create object

// // display(); // not ok

// ashish.name = "AShu"; // ok
// ashish.age = 14; // ok

// ashish.display();  // ok
// ashish.details(); 

// }


// #include<iostream>

// using namespace std;

// class Student{

//    private : 

//    // Data member
//     string name;
//     int age;

//     public :

//     // setter method
//     int setDetails(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     // getter method
//     int getdetails(){
//        cout<<"Name : "<<name<<endl;
//        cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

// Student s1,s2;
// // s1.name = "Pawan"; // not ok
// // cout<<s1.name<<endl;  // not ok
// s1.setDetails("Ansu",15);

// s1.getdetails();

// s2.setDetails("Nichiket",20);

// s2.getdetails();

// }


// #include<iostream>

// using namespace std;

// class Student{

//    private : 

//    // Data member
//     string name;
//     int age;

//     public :

//     // setter method
//     int setDetails(string name1, int age1){
//         name = name1;
//         age = age1;
//     }

//     // getter method
//     int getdetails(){
//        cout<<"Name : "<<name<<endl;
//        cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

// Student *s1 = new Student();

// // s1.setDetails("Maharishi",18); // Not ok
// s1->setDetails("Maharishi",18); // use ->

// s1->getdetails();
// }



// #include<iostream>

// using namespace std;

// class Student{

//    private : 

//    // Data member
//     string *name;
//     int age;

//     public :

//     // setter method
//     int setDetails(string name1, int age1){
//         name = new string;
//         *name = name1;
//         // cout<<name<<endl;
//         age = age1;
//     }

//     // getter method
//     int getdetails(){
//        cout<<"Name : "<<*name<<endl;
//        cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

// Student *s1 = new Student();

// // s1.setDetails("Maharishi",18); // Not ok
// s1->setDetails("Maharishi",18); // use ->

// s1->getdetails();
// }






// #include<iostream>

// using namespace std;

// class Student{

//    private : 

//    // Data member
//     string *name;
//     int age;

//     public :

//     // setter method
//     int setDetails(string name1, int age1){
//         name = new string;
//         *name = name1;
//         // cout<<name<<endl;
//         age = age1;
//     }

//     // getter method
//     int getdetails(){
//        cout<<"Name : "<<*name<<endl;
//        cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

// Student students[3];

// students[0].setDetails("Viraj",21);
// students[1].setDetails("Keval",22);
// students[2].setDetails("Smit",23);

// students[0].getdetails();
// students[1].getdetails();
// students[2].getdetails();

// }


// #include<iostream>

// using namespace std;

// string name = "Disant"; // global variable

// int main(){
//     string name = "Romil"; // local variable

//     cout<<name<<endl;  // Romil

//     cout<<::name<<endl;  // Disant

// }





// #include<iostream>

// using namespace std;

// class Student{

//    private : 

//    // Data member
//     string *name; // instance level variable
//     int age; // instance level variable
//     static int marks; // class level variable

//     public :

//     // setter method
//     int setDetails(string name1, int age1){
//         name = new string;
//         *name = name1;
//         age = age1;
//     }

//     // getter method
//     int getdetails(){
//        cout<<"Name : "<<*name<<endl;
//        cout<<"Age : "<<age<<endl;
//        cout<<"marks : "<<marks<<endl;
//     }

// };

// int Student::marks = 100;

// int main(){

// Student students[3];

// students[0].setDetails("Viraj",21);
// students[1].setDetails("Keval",22);
// students[2].setDetails("Smit",23);

// students[0].getdetails();
// students[1].getdetails();
// students[2].getdetails();

// }




// #include<iostream>

// using namespace std;

// class Student{

//    public : 

//    // Data member
//     string *name; // instance level variable
//     int age; // instance level variable
//     static int marks; // class level variable

//     // setter method
//     int setDetails(string name1, int age1){
//         name = new string;
//         *name = name1;
//         age = age1;
//     }

//     // getter method
//     int getdetails(){
//        cout<<"Name : "<<*name<<endl;
//        cout<<"Age : "<<age<<endl;
//        cout<<"marks : "<<marks<<endl;
//     }

//    static void printStatic(){
//         cout<<"Static memeber function!"<<endl;
//     }

// };

// int Student::marks = 100;

// int main(){

// Student students[3];

// students[0].setDetails("Viraj",21);
// students[1].setDetails("Keval",22);
// students[2].setDetails("Smit",23);

// students[0].getdetails();
// students[1].getdetails();
// students[2].getdetails();

// Student::printStatic();

// cout<<Student::marks<<endl;

// }


// #include<iostream>

// using namespace std;

// class Student{
// public :
//     // constructor
//     Student(){
//         cout<<"Hello Constructor!"<<endl;
//     }

// };

// int main(){

//     Student keval; // invoke constructor

// }



// #include<iostream>

// using namespace std;

// class Student{
// private :

// string name;
// int age;

// public :
//     // constructor -> parameterless constructor
//     Student(){
//         cout<<"Default Constructor!"<<endl;
//     }
//     Student(string name, int age){
//         cout<<"Parameter Constructor!"<<endl;
//         this->name = name;
//         this->age = age;
//     }
//     Student(const Student &obj){
//         cout<<"Copy Constructor!"<<endl;
//         this->name = obj.name;
//         this->age = obj.age;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){

//     Student obj1("Ashish",20); // invoke constructor
//     // Student jaydeep; // invoke constructor

    
//     Student obj2 = obj1;

//     Student obj3;
    
//     obj2.getDetails();
//     obj1.getDetails();

// }

// // shallow copy constructor

// #include<iostream>

// using namespace std;

// class Student{
// private :

// string name;
// int age;
// int marks;

// public :
//     // constructor -> parameterless constructor
//     Student(){
//         name = "Pawan";
//         marks = 100;
//         age = 25;
//     }
//     Student(string name, int age){
//         cout<<"Parameter1 Constructor!"<<endl;
//         this->name = name;
//         this->age = age;
//         this->marks = 100; 
//     }
//     Student(string name, int age, int marks){
//         cout<<"Parameter2 Constructor!"<<endl;
//         this->name = name;
//         this->age = age;
//         this->marks = marks;
//     }
//     Student(const Student &obj){
//         cout<<"Copy Constructor!"<<endl;
//         this->name = obj.name;
//         this->age = obj.age;
//         this->marks = obj.marks;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){

//     Student obj1("Ashish",20); 


    
//     Student obj2 = obj1;


    
//     obj2.getDetails();


// }



// // deep copy constructor

// #include<iostream>

// using namespace std;

// class Student{
// public :

// string name;
// int *age;


// public :

//     Student(string name, int age1){
//         this->name = name;
//         this->age = new int;
//         *age = age1;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<&name<<endl;
//     }

//     Student(const Student &obj){
//         cout<<"Copy Constructor!"<<endl;
//         this->name = obj.name;
//         age = new int;
//         *age = *obj.age;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<&name<<endl;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<*age<<endl;
//     }

// };

// int main(){

//     Student obj1("Ashish",20); 

//     obj1.getDetails();

//     cout<<"Copy constructor : "<<endl;
    
//     Student obj2 = obj1;

//     obj2.getDetails();
// }



// shallow copy constructor

// #include<iostream>

// using namespace std;

// class Student{
// public :

// string name;
// int *age;


// public :

//     Student(string name, int age1){
//         this->name = name;
//         this->age = new int;
//         *age = age1;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<&name<<endl;
//     }

//     Student(const Student &obj){
//         cout<<"Copy Constructor!"<<endl;
//         this->name = obj.name;
//         this->age = obj.age;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<&name<<endl;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<*age<<endl;
//     }

// };

// int main(){

//     Student obj1("Ashish",20); 

//     obj1.getDetails();

//     cout<<"Copy constructor : "<<endl;
    
//     Student obj2 = obj1;

//     obj2.getDetails();
// }


// Destructor : 
// 1. it is same as constructor but it start with ~
// 2. it is used to free the memory allocated to object that me manully allocated with help of new keyword
// 3. it is automatically invoked when object goes out of scope
// 4. it does not take any parameter and does not return anything
// 5. if you don't create destructor compiler will create default destructor


// #include<iostream>

// using namespace std;

// class Student{
// public :

// string name;
// int *age;


// public :

//     Student(string name, int age1){
//         this->name = name;
//         this->age = new int;
//         *age = age1;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<&name<<endl;
//     }

//     Student(const Student &obj){
//         cout<<"Copy Constructor!"<<endl;
//         this->name = obj.name;
//         this->age = obj.age;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Name : "<<&name<<endl;
//     }

//     ~Student(){
//         cout<<"Destructor called.."<<endl;
//         delete age;
//         cout<<"Age is main : "<<*age<<endl;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<*age<<endl;
//     }

// };

// int main(){

//     Student obj1("Ashish",20); 

//     obj1.getDetails();

//     cout<<"Copy constructor : "<<endl;
    
//     Student obj2 = obj1;

//     obj2.getDetails();

   
// }

// // private -> public
// #include<iostream>

// using namespace std;

// class Parent{
//     public:
// };

// class Child : public Parent{

// };

// int main(){

// }



// #include<iostream>

// using namespace std;

// class Parent{
//     public:

//     int display(){
//         cout<<"Parent class!"<<endl;
//     }
// };

// class Child : public Parent{

// };

// int main(){
//     Parent p1;

//     // p1.display();

//     Child ch;

//     ch.display();
// }




// #include<iostream>

// using namespace std;

// class Parent{
//     public:
//     string name;
//     int age;

//     Parent(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     int display(){
//         cout<<"Parent class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// class Child : public Parent{
//     public:
//     int marks;
    
//     Child(string name, int age , int marks):Parent(name,age){ 
//         this->marks = marks;
//     }

//      int details(){
//         cout<<"Base class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }

// };

// int main(){
//     Parent p1("Manish",25);

//     // p1.display();

//     Child ch("Vivek",22,100);

//     ch.details();
//     ch.display();
// }


// #include<iostream>

// using namespace std;

// class Parent{
//     public:
//     string name;
//     int age;

//     Parent(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     int display(){
//         cout<<"Parent class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// class Child : public Parent{
//     public:
//     int marks;
    
//     Child(string name, int age , int marks):Parent(name,age){ 
//         this->marks = marks;
//     }

//      int details(){
//         cout<<"Base class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }

// };

// class SubChild: public Child{
// public :

// SubChild(string name,int age, int marks):Child(name, age,marks){}
// };

// int main(){
//     Parent p1("Manish",25);

//     // p1.display();

//     Child ch("Vivek",22,100);

//     // ch.details();
//     // ch.display();

//     SubChild sub("Aakash",26,99);

//     sub.details();
//     sub.display();
// }




// #include<iostream>

// using namespace std;

// class Parent{
//     public:
//     string name;
//     int age;

//     Parent(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     int display(){
//         cout<<"Parent class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// class ParentTwo{
//     public:

//     int id;

//     ParentTwo(int id){
//         this->id = id;
//     }

//     void viewDetails(){
//         cout<<"Parent second..."<<endl;
//     }
// };

// class Child : public Parent, public ParentTwo{
//     public:
//     int marks;
    
//     Child(string name, int age ,int marks,int id):Parent(name,age),ParentTwo(id){ 
//         this->marks = marks;
//     }

//      int details(){
//         cout<<"Child class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//         cout<<"Id : "<<id<<endl;
//     }

// };

// int main(){
//     Parent p1("Manish",25);

//     // p1.display();

//     Child ch("Vivek",22,100,01);

//     ch.viewDetails();
//     ch.display();
//     ch.details();
// }




// #include<iostream>

// using namespace std;

// class A{
//     public:
//     string name;
//     int age;

//     // A(){

//     // }

//     A(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     int display(){
//         cout<<"A class!"<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// class B :virtual public A {
//     public:

//     int id;

//     B(string name, int age, int id):A(name,age){
//         this->id = id;
//     }

//     void viewDetails(){
//         cout<<"B second..."<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Id : "<<id<<endl;
      
//     }
// };
// class C :virtual public A {
//     public:

//     int marks;

//     C(string name, int age, int marks):A(name, age){
//         this->marks = marks;
//     }

//     void viewDeta(){
//         cout<<"C Class..."<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//     }
// };

// class D : public B, public C{
//     public:
//     int salary;
    
//     D(string name, int age, int id, int marks, int salary):A(name,age),B(name,age,id),C(name, age, marks){
//         cout<<"D constructor..."<<endl;
//         this->salary = salary;
//     }
//     void dprint(){
//         cout<<"D Class ..."<<endl;
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Marks : "<<marks<<endl;
//         cout<<"Id : "<<id<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// int main(){
//     A a1("Manish",25);

//     a1.display();

//     B b1("Pawan",25,2);

//     b1.viewDetails();

//     C c1("Bhavin",22,100);
//     c1.viewDeta();

//     D d1("Pankaj",28,3,99,9999999);

//     d1.dprint();

//     cout<<"A member function..."<<endl;
//     d1.display();
// }



// #include<iostream>

// using namespace std;

// class Student{

//     public :

//     int data(int x, int y){
//         cout<<"Method 1 : "<<endl;
//         return x+y;
//     }
//     double data(double x, int y){
//         cout<<"Method 2 : "<<endl;
//         return x+y;
//     }
//     int data(int x, int y, int z){
//         cout<<"Method 3 : "<<endl;
//         return x+y+z;
//     }
// };

// int main(){

//     Student s1;

//     cout<<"s1.data(10,20) :" <<s1.data(10,20)<<endl;
//     cout<<"s1.data(10.5,20) :" <<s1.data(10.5,20)<<endl;
//     cout<<"s1.data(10,20,30) :" <<s1.data(10,20,30)<<endl;

// }


// #include<iostream>

// using namespace std;

// class Student{

//     public :

//     virtual int data(int x, int y){
//         cout<<"Student class ... "<<endl;
//         return x+y;
//     }

// };

// class Stud : public Student{
// public :
//     int data(int x, int y)override{
//         cout<<"Stud class ...."<<endl;
//         return x+y;
//     }
// };

// int main(){

//     Student s1;


//     Stud st;

//   cout<<"  st.data(10,20) : "<< st.data(10,20)<<endl;

// }


// #include<iostream>

// using namespace std;

// int draw(); // function declaration

// int main(){
//     draw(); // function call
// }

// int draw(){  // function definition
//     cout<<"Hello Draw function!"<<endl;
// }


// #include<iostream>

// using namespace std;

// class Student{

//     public :

//     virtual void add() = 0;

//     int data(){
//         cout<<"Data function call..."<<endl;
//     }

// };

// class Stud : public Student{

//         public :

//         void add(){
//             cout<<"add function call..."<<endl;
//         }
// };

// int main(){

// Stud *s1 = new Stud();

// s1->add();
// s1->data();

// delete s1; 
// }




// #include<iostream>

// using namespace std;

// class Student{

//     public :

//     virtual void add() = 0;

//     int data(){
//         cout<<"Data function call..."<<endl;
//     }

// };


// class Stud : public Student{

//         public :

//         void add(){
//             cout<<"add function call..."<<endl;
//         }
// };

// int main(){

// Stud *s1 = new Stud();

// s1->add();
// s1->data();

// delete s1; 
// }


// Way of inheritance 

// // public -> public

// #include<iostream>
// using namespace std;

// class A{
//     public : 

//     int age;

//     void display(){
//         cout<<"Class A..."<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

// };

// class B : public A{

// };



// int main(){

//    A a;

//    a.age = 25;

//    a.display();

//    B b;

//    b.age = 22;
//    b.display();
// }

// // public -> protected

// #include<iostream>
// using namespace std;

// class A{
//     public : 
//     void display(){
//         cout<<"Class A..."<<endl;
//     }

// };

// class B : protected A{

//     public :

//     void details(){
//        display();
//     }

// };



// int main(){

// //    A a;

// //    a.display();

//    B b;
//    b.details();
// }

// #include<iostream>
// using namespace std;

// class A{
//     public : 
//     void display(){
//         cout<<"Class A..."<<endl;
//     }

// };

// class B : protected A{

//     public :

//     void details(){
//        display();
//     }

// };


// class C : protected B{

//     public :

//     void data(){
//         display();
//     }
// };



// int main(){

// //    A a;

// //    a.display();

//    B b;
// //    b.display(); // not ok

// C c;

// c.data();
// }





// // public -> private

// #include<iostream>
// using namespace std;

// class A{
//     public : 
//     void display(){
//         cout<<"Class A..."<<endl;
//     }

// };

// class B : private A{

//     public :

//     void details(){
//        display();
//     }

// };



// int main(){

// //    A a;

// //    a.display();

//    B b;
//    b.details();
// }



// #include<iostream>
// using namespace std;

// class A{
//     public : 
//     void display(){
//         cout<<"Class A..."<<endl;
//     }

// };

// class B : private A{

//     public :

//     void details(){
//        display();
//     }

// };


// class C : protected B{

//     public :

//     void data(){
//         display(); 
//     }
// };



// int main(){

// //    A a;

// //    a.display();

//    B b;
// //    b.display(); // not ok

// C c;

// c.data();
// }






// #include<iostream>
// using namespace std;

// class A{
//     private :
//     void display(){
//         cout<<"Class A..."<<endl;
//     }

// };

// class B: private A{

//     public :

//     void data(){
//         display();
//     }
// };


// int main(){

// B b;

// b.data();


// }




// #include<iostream>

// using namespace std;

// class A{
//     private:
//     void display(){
//         cout<<"Class A..."<<endl;
//     }

//     friend class B;

// };
// class B: public A{

//     public:

//     void data(){
//         display();
//     }
    
// };

// int main(){

//     B b;

//     b.data();

// }


// #include<iostream>

// using namespace std;

// int main(){

//     int x=10,y=20,z=50;

//     cout<<"x : "<<x<<" y : "<<y<<" z : "<<z<<endl;

// }



// #include<iostream>

// using namespace std;

// int disp(int x, int y, int z){
//     return x+y+z;
// }

// int main(){

//     int x=10,y=20,z=50;

//     cout<<"Sum : "<<disp(x,y,z)<<endl;
    
// }


// #include<iostream>

// using namespace std;

// class A{
//     public:

//     void display(){
//         cout<<"Class A ... "<<endl;
//     }
// };

// class B :virtual public A{

// };

// class C :virtual public A{

// };


// class D : public B, public C{

// };

// int main(){


//     D d;

//     d.display();

// }



// #include<iostream>

// using namespace std;

// template<typename T1, typename T2>

// T1 add(T1 x, T2 y){
    
//     return x+y;
//     // cout<<"Sum : "<<x+y<<endl;
// }

// int main(){

// int sum = add(20.5, 10);

// cout<<"The sum is : "<<sum<<endl;

// }

// #include<iostream>

// using namespace std;

// template<typename T1, typename T2>

// T1 add(T1 x, T2 y){
    
//     return x+y;
//     // cout<<"Sum : "<<x+y<<endl;
// }

// template<typename T1, typename T2>
// T1 sub(T1 x, T2 y){
    
//     return x-y;
//     // cout<<"Sum : "<<x+y<<endl;
// }

// int main(){

    
//     cout<<"The sum is : "<<add(20.5, 10)<<endl;
//   cout<<" sub : "<<sub(25.5, 10)<<endl;

// }



// #include<iostream>

// using namespace std;

// template<typename T1, typename T2>

// class A{
//     public :

//     T1 name;
//     T2 age;

//     A(T1 name, T2 age){
//         this->name = name;
//         this->age = age;
//     }

//     T1 display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){

//         A<string,int> a("Pawan",24);

//         a.display();
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int>myvector = {12,34,56,78};

//     cout<<"Size of vector : "<<myvector.size()<<endl;

//     // for(int i = 0; i < myvector.size(); i++){
//     //     cout<<myvector[i]<<endl;
//     // }

//     // forEach Loop

//     for(int element : myvector){
//         cout<<element<<" ";
//     }
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int>myvector{12,34,56,78};

//     cout<<"Size of vector : "<<myvector.size()<<endl;

//     // for(int i = 0; i < myvector.size(); i++){
//     //     cout<<myvector[i]<<endl;
//     // }

//     // forEach Loop

//     for(int element : myvector){
//         cout<<element<<" ";
//     }
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int>myvector(5,2);

//     cout<<"Size of vector : "<<myvector.size()<<endl;

//     // for(int i = 0; i < myvector.size(); i++){
//     //     cout<<myvector[i]<<endl;
//     // }

//     // forEach Loop

//     for(int element : myvector){
//         cout<<element<<" ";
//     }
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int>myvector(5);
    
//     myvector.push_back(10);
//     myvector.push_back(20);
//     myvector.push_back(30);
//     myvector.push_back(40);
//     myvector.push_back(50);
//     myvector.push_back(60);
 
//     cout<<"Size of vector : "<<myvector.size()<<endl;


//     // for(int i = 0; i < myvector.size(); i++){
//     //     cout<<myvector[i]<<endl;
//     // }

//     // forEach Loop

//     for(int element : myvector){
//         cout<<element<<" ";
//     }
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int> myvector(6); // fixed size = 5
    
//     myvector[0] = 10;
//     myvector[1] = 20;
//     myvector[2] = 30;
//     myvector[3] = 40;
//     myvector[4] = 50;
//     // myvector[4] = 50;
 
//     cout<<"Size of vector : "<<myvector.size()<<endl;

//     for(int element : myvector){
//         cout<<element<<" ";
//     }
// }



// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int> myvector;

//     myvector.push_back(10);
//     myvector.push_back(20);
//     myvector.push_back(30);
//     myvector.push_back(40);

//    myvector.empty()? cout<<" : Is empty":cout<<"Not empty"<<endl;
    

//     cout<<"Size of vector : "<<myvector.size()<<endl;

//     cout<<"My vector is : ";

//     for(int element : myvector){
//         cout<<element<<" ";
//     }

//     cout<<"\nDeleted data from vector : "<<myvector.back()<<endl;
//     myvector.pop_back();
//     cout<<"\n After deleted vector : ";

//     for(int element : myvector){
//         cout<<element<<" ";
//     }

//     cout<<"\nStarting data in vector : "<<myvector.front()<<endl;
//     cout<<"value present at index in vector :"<<myvector.at(2)<<endl;

    
// }


// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){

//     vector<int> myvector;

//     myvector.push_back(10);
//     myvector.push_back(20);
//     myvector.push_back(30);
//     myvector.push_back(40);

//    myvector.empty()? cout<<" : Is empty":cout<<"Not empty"<<endl;
    

//     cout<<"Size of vector : "<<myvector.size()<<endl;

//     cout<<"My vector is : ";

//     for(int element : myvector){
//         cout<<element<<" ";
//     }

//     cout<<"\nDeleted data from vector : "<<myvector.back()<<endl;
//     myvector.pop_back();
//     cout<<"\n After deleted vector : ";

//     for(int element : myvector){
//         cout<<element<<" ";
//     }

//     cout<<"\nStarting data in vector : "<<myvector.front()<<endl;
//     cout<<"value present at index in vector :"<<myvector.at(2)<<endl;

//     // myvector.insert(myvector.begin(),myvector.end())


//     // for(auto i = myvector.begin(); i != myvector.end() ; i++ ){
//     //     cout<<"address : "<<&(*i)<<" value : "<<*i<<" ";
//     // }

//     myvector.insert(myvector.begin()+3,100);
//     myvector.insert(myvector.end()-3,200);
//     for(int element : myvector){
//         cout<<element<<" ";
//     }
//     myvector.erase(myvector.begin()+2);

//     cout<<" After erase() : ";

//     for(int element : myvector){
//         cout<<element<<" ";
//     }

//     // myvector.clear();

//     // cout<<"after clear() vector :";

//     // for(int element : myvector){
//     //     cout<<element<<" ";
//     // }
// }



// #include<iostream>
// using namespace std;

// class Node{
//     public:

//     int data;
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

// };

// void inesrtAtTail(Node* &head, int data){
//     Node *newNode = new Node(data);

//     if(head == NULL){
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != NULL){
//         temp = temp->next;
//     }

//     temp->next = newNode;

// }

// void display(Node* &head){
//     if(head== NULL){
//         cout<<"LikedList is Empty!"<<endl;
//         return;
//     }

//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }

//     cout<<"NULL"<<endl;
// }

// int main(){

//     Node* head = NULL;

//     // inesrtAtTail(head,10);
//     // inesrtAtTail(head,20);
//     // inesrtAtTail(head,30);
//     // inesrtAtTail(head,40);
//     // inesrtAtTail(head,50);

//     display(head);

// }


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, int data){

    Node *newNode = new Node(data);

    if(head == NULL){

        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;

}


void display(Node* &head){

    if(head == NULL){
        cout<<"LinkedLIst is empty"<<endl;
        return;
    }

  Node* temp = head;

  while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }

  cout<<"NULL"<<endl;

}


int main(){

    Node* head = NULL;

    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);

    display(head);

}