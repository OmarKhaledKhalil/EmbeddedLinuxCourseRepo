#include <iostream>

#include<numeric>


using namespace std ;


int main ( ) 

{

  
  int arr [ ]  = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ;   // Initialising array Elements .
  
  int size     =  sizeof ( arr ) / sizeof ( arr [ 0 ] )     ;   // Calculating the array Size  .

 

  int sum      =   0   ;                                        // Initialise Variable in stack which will carry the sum to zero.

 

      sum      =  accumulate ( arr ,  arr + size  , sum )   ;   // Passing to accumulate function which will calculate the accumulation sum  with the start and the end of the array.
                                                                // Function will sum the array elements one by one then assigning the result to the Sum Variavle in the Stack Memory.

  cout << " The sum of the elements in the array :  "<< sum ;


}