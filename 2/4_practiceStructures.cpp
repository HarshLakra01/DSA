#include <iostream>
using namespace std;
#include <cstring>



//We can also define and initialize a structure outside the main function, well in that case the structure will be accessible globally.
//Also, we can initialize a structure just after declaring it and it's much convenient if we just want it for 1-2 entities.

struct dish
    {
        char name[10];
        int price;
        char nationality[10];
    }d1={"Pizza", 4, "Italian"};

int main()
{
     cout << d1.name << endl;
     cout << d1.price << " dollars" << endl;
     cout << d1.nationality << endl;
     cout << endl;

     //checking the size of structure d1
     cout << sizeof(d1) << endl;
     cout << endl;
     /*Output size acc to calculation should be 10+4+10=24 but it's 28. How?
      name = 10bytes
      padding = 2bytes          (to make it easier for int to be stored in 4 bytes from 13 to 16, easier for machine to read 4-4 bytes at a time)
      price = 4bytes
      nationality = 10 bytes
      padding = 2 bytes          (to make it 28)

      So, total 28 bytes are occupied
     */


    /*If we want to change the name of the dish we can't directly write d1.name="Churma" as in c++ we can't change the value in a 
    character variable after initialising it, so we need to use strcpy function which is in <cstring> header file.

    There will be no issue in directly changing the price integer to 1000 like d1.price = 1000 */
    strcpy(d1.name,"Churma");
    d1.price = 1000;
    strcpy(d1.nationality,"Indian");

    cout << d1.name << endl;
    cout << d1.price << " dollars" << endl;
    cout << d1.nationality << endl;
}