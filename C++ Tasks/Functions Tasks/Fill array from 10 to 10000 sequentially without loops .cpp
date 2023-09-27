#include <iostream>
#include <numeric>                // to use iota() function from  this library .

using namespace std;


int main()
{
    int arr [9991];               // Creating  an  Array  in  stack  with  locations  enough  to Carry number from 10 to 10000.

   


    iota(arr, arr+10000-9, 10);   // Passing to the function the start and the end  of  the   array ,  and the starting number.
                                  // This function shall increment the array elements starting from 10 to the end of the array.

 
    return 0;
}
