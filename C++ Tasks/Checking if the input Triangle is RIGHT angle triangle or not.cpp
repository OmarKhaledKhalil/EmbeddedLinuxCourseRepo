#include <iostream>
#include   <cmath>  

int main ()
{
   //Defining  3  Variables  Locations  in   RAM   for  the  3  Input  Triangle Sides.

   unsigned int  x , y , z ;

   //Super Loop Program System.

   while ( 1 ) 
   {
   
   //Receiving   the   3   Input    Triangle   Sides    in      the    3    variables.

    std :: cout << "Please Enter 3 Numbers" << std :: endl ;
    std :: cin  >> x ;
    std :: cin  >> y ;
    std :: cin  >> z ;

   //Raised the 3 Input Triangle Sides to Power 2 , to do Right Triangle Calculations.

    x = pow( x , 2 ) ;
    y = pow( y , 2 ) ;
    z = pow( z , 2 ) ;

    if( x + y == z || x + z == y || y + z == x ) //Equation : ( a * a ) + ( b * b ) = ( c * c) Pythagorean theorem.
    
    {
        std :: cout << "This is a Right Angle Triangle " << std :: endl ;
    }

    else
    
    {
        std :: cout << "This isn't Right Angle Triangle" << std :: endl ;
    }
 
   }

    return 0;

}
