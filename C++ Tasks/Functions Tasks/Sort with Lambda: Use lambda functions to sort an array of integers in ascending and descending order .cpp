#include <iostream>
#include <iterator>
#include <functional>

int main ()

{
    int arr [ 5 ] = { 1 , 23 , 11 , 0 , 3 } ; // Trial Array Created in RAM.

    
    // Passing Lambda Function as a Call back function to sorting Function.
    // My  intention  here  is  to  sort  array  in  a  descending  order .

    std ::  sort ( std :: begin ( arr ) , std :: end ( arr ) , [] ( int first , int second )
    {
        
        return first > second ; 

    }  )  ;    


    // Printing the array after sorting to check.

    for ( int i : arr)
    
    {
     
     std :: cout << i << " ";

    }

    std :: cout << "\n" ;


    // Passing Lambda Function as a Call back function to sorting Function.
    // My  intention  here  is  to  sort  array  in  an  ascending  order .

    std ::  sort ( std :: begin ( arr ) , std :: end ( arr ) , [] ( int first , int second )
    {
        
        return first < second ;

    }  )  ;


    // Printing the array after sorting to check.

    for ( int i : arr )
    
    {
     
     std :: cout << i << " ";

    }
}
