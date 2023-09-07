#include <iostream>

int main ()
{
   //Defining 2  Variables  Locations  in RAM for  Input  Number and sum .

   int  num     ;
   int  sum = 0 ;

   //Super Loop Program System.

   while ( 1 )
   {

    //Recieving the Input Number and store it in  the  Variable in RAM   .

      std :: cout << " Please Input The Number " << std :: endl ;
      std :: cin  >> num ;

    //Doing Summation of the input number digits  till  number being  0  .

      while ( num )
      
      { 
        
        sum =  sum + (num % 10) ;

        num =  num  /  10 ;

      }

    //Representing the  summation  of digits after doing the Calculations.
    
      
      std :: cout << "Sum of digits is : " << sum << std :: endl ;

      sum = 0 ;

   }

    return 0;

}
