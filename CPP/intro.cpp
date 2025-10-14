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


//4. Take nothing and return something

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

