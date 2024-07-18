#include <iostream>

using namespace std;

// int main()
// {
//      // structure is created inside the stack inside the main function.
//      // Defining a structure doesn't consume any memory. Initializing a structure consumes memory.
//    struct Cost
//    {
//         float costEach;
//         float quantity;
//    };

//    struct Cost c1;
//    c1.costEach = 50;
//    c1.quantity = 10;

//    cout << "Hunny's total bill is " << "$" << c1.costEach*c1.quantity << endl;

//    struct Cost c2 = {97.5, 2};

//    cout << "Kusum's total bill is " << "$" << c2.costEach*c2.quantity << endl;
//     return 0;
// }




// int main()
// {
//      struct Student
//      {
//           char name[20];
//           int age;
//           float cgpa;
//           float height;
//      };

//      struct Student s1 = {"Harsh Lakra", 19, 8.17};

//      cout << "Student name is " << s1.name << endl << "His age is " << s1.age << endl << "His CGPA is " << s1.cgpa << endl;
//      cout << s1.height;

//      /*If we declare a variable and not initialize it (here height), it will be filled with zero in memory inside the stack
//      belonging to main function */
     
// }






/*We can also make an array of structures. For example, there are 5 employees in a company, and each employee has 3 qualities 
 like Reg No , Salary, Bank Balance. So 5 structures can be initialized at once */

// int main()
// {
//      int serialNumber;
//      cout << "Enter serial number of employee: ";
//      cin >> serialNumber;

//      struct qualities
//      {
//           int regNo;
//           int salary;
//           int bankBalance;
//      };

//      struct qualities employee[5] = {{101, 10000, 0}, {102, 12000, 14000}, {103, 15000, 100000}};

//      cout << "Registration No: " << employee[serialNumber-1].regNo << endl;
//      cout << "Salary: " << employee[serialNumber-1].salary << endl;
//      cout << "Bank Balance: " << employee[serialNumber-1].bankBalance << endl;
// }