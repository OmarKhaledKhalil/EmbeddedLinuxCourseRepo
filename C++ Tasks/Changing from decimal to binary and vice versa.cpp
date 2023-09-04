#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main ()
{
   //Defining 2  Variables  Locations  in RAM for  Input  Number and String .

    signed int        num          ;
    string         binary_string   ;

   //Super Loop Program System.

   while(1)
   {

   //From Decimal to Binary Converstion and Representation part .

    cout<<"Please Enter The Decimal"<< std :: endl;
    cin>> num; 

    cout<<"Here is Binary Representation"<< std :: endl;
    binary_string = std::bitset<16>(num).to_string();

    std::cout << binary_string << std::endl;
    binary_string = '0' ;


    //From Binary to Decimal Converstion and Representation part only 1 byte converstion.

    cout<<"Please Enter The Binary"<< std :: endl;
    cin>> binary_string;

    
    bitset<8> bits(binary_string);
    num = bits.to_ulong();

    cout<<"Here is Decimal Representation"<< std :: endl;
    cout << num << endl;


   }

    return 0;

}
