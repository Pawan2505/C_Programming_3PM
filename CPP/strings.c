// #include<stdio.h>

// int main(){

//     char ch = 'z';

//     printf("%d",ch);
// }

// #include<stdio.h>

// int main(){

//     char ch = '9';

//     printf("%d",ch);
// }
// #include<stdio.h>

// int main(){

//     char ch = ' ';

//     printf("%d",ch);
// }


// #include<stdio.h>

// int main(){

//     char ch[6] = "Pawan";

//     printf("%s",ch);
// }

// #include<stdio.h>

// int main(){

//     char ch[6] = "Pawan\0";

//     printf("%s",ch);
// }


// #include<stdio.h>

// int main(){

//     char ch[13] = "Pawan\0Maurya";

//     printf("%s",ch);
// }



// #include<stdio.h>

// int main(){

//     char ch[13] = "Pawan Maurya";

//    for(int i = 0; i<13; i++){
//     printf("%c at index %d\n",ch[i],i);
//    }
// }



// #include<stdio.h>

// int main(){

//     char ch[13] = 'Pawan Maurya'; // not ok
//     char ch[13] = "Pawan Maurya"; // ok

//     printf("%s",ch);

// }



#include<stdio.h>

int main(){

    char ch[4] = {'a','c','d','e'};

   for(int i = 0; i<4; i++){
    printf("%c at index %d\n",ch[i],i);
   }
}