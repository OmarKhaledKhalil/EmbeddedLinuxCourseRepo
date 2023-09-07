#include <iostream>

int main ()
{
   
   //Defining  3 Variables Locations in RAM for the 3 Input numbers.

   int  x , y , z ;

   //Super Loop Program System.

   while ( 1 )
   {
   
   //Receiving  the  3  Input   Numbers   in    the   3   variables.

    std :: cout << "Please Enter 3 Numbers" << std :: endl ;
    std :: cin  >> x ;
    std :: cin  >> y ;
    std :: cin  >> z ;
    

    //Using if conditions operations to check  the  largest  number   
    //Printing  the  largest  number  from  the   3   input numbers.   


    if( x > y )
    {

        if( x > z )
        {
            std :: cout << "Largest Number is "<< x << std :: endl ;
        }

        else
        {
            
            std :: cout << "Largest Number is "<< z << std :: endl ;

        }

    }
    else
    {
        if( y > z )
        {

            std :: cout << "Largest Number is "<< y << std :: endl ;

        }

        else
        {
           
            std :: cout << "Largest Number is "<< z << std :: endl ;
            
        }

    }


   }

    return 0;

}
