#include <iostream>
#include <cctype>

using namespace std;

int  Character_intCheckDigit ( char a )

{   // By using isdigit() function to check the passing Character is Digit or not from ASCI Table.

    if ( isdigit( a ) )
    
    {
        cout<<"It is a digit"<< endl ;
      
        return 1;    
    }
    
    
    else
    
    {
        cout<<"It isn't a digit"<< endl; 
         
        return 0;
    }
    
}


