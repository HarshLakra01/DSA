#include <iostream>
using namespace std;
#include <stdlib.h>

//Basics
// int main()
// {
//     int a = 5;
//     int *p;
//     p = &a;

//     cout << p << endl;   //if we just write p, it will print address of a
//     cout << &a << endl;  //it gives the same result like cout << p because p and &a are same(address of a)
//     cout << &p << endl;  //&p will print address of the pointer variable
//     cout << *p << endl;  //writing *p will print value at address of a

// }






//Pointer to an Array
// int main()
// {
//     int A[5]={10,8,6,4,2};
//     int *p;

//     p = A;    /*Where is * not before A here? Because when doing pointer to an Array the name of the array is itself starting address 
//                 of the array(i.e first element of the array) */

//               /*If we forcefully want to write ampersand(&) then we need to write like  p = &A[0];    */

//     //Accessing the elements of an array directly
//     for(int i=0; i<5; i++)
//     {
//         cout << A[i] << endl;
//     }


//     //Accessing the elements of an array using pointer(just write p in place of A). Pointer can act as name of an array.
//     for(int i=0; i<5; i++)
//     {
//         cout << p[i] << endl;
//     }
// }







//Creating an array in Heap in C
// int main()
// {
//     int *p;
//     p=(int*)malloc(5*(sizeof(int)));

//     p[0]= 14; p[1]=54; p[2]=78; p[3]=21; p[4]=7;

//     for(int i=0; i<5; i++)
//     {
//         cout << p[i] << endl;
//     }

//     free(p);
// }



//Creating an array in Heap in C++
// int main()
// {
//     int *p;
//     p=new int[5];               //in c++, syntax is easy. Just write new instead of malloc syntax

//     p[0]= 14; p[1]=54; p[2]=78; p[3]=21; p[4]=7;

//     for(int i=0; i<5; i++)
//     {
//         cout << p[i] << endl;
//     }

//     cout << p[1] << endl;

//     delete [ ] p;             //if it's not a pointer to an array, then delete p is also fine. But if it's pointer to array add [ ] after delete
//                               /*in bigger programs with many lines of code, it is better to free heap memory after using it because the leftover
//                                 program might be using that free memory. Once the program finishes execution, the heap memory will be automatically
//                                 deleted. So, it's not a necessary step in small programs. But, it's a good practice */
//     cout << "Memory freed" << endl;

//     cout << p[1] << endl;
// }




//Size occupied by pointers of different data types
// struct Rectangle
// {
//     int Length;                //User defined data-types like structures can also have pointers
//     int Breadth;
// };

// int main()
// {
//     int *p1;
//     char *p2;
//     float *p3;
//     double *p4;
//     Rectangle *p5;

//     cout << sizeof(p1) << endl;
//     cout << sizeof(p2) << endl;
//     cout << sizeof(p3) << endl;          /*Pointers occupy same space. Be it integer pointer, char pointer, user defined data-type pointer
//                                            or any other type of pointer. Here, it is occupying 4 bytes(compiler dependent) */
//     cout << sizeof(p4) << endl;            
//     cout << sizeof(p5) << endl;
// }