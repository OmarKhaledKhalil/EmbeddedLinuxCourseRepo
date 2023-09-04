#include <iostream>

int main ()
{
    // Creating the Header  of  the Table   representation.

    std :: cout<<" ASCII Code Table: "<< std :: endl ;
    std :: cout<<"+--------+--------+"<< std :: endl ;
    std :: cout<<"|  CHAR  |  ASCII |"<< std :: endl ;
    std :: cout<<"+--------+--------+"<< std :: endl ;

    // Printing the Char and ASCI Value using   For   loop.
    // Doing Some Printing Tricks to do Refinement of form.

    for ( unsigned char i=0 ; i<127 ; i++ )
    {
        
        if     (    i<10    )
        {
            printf("|        |   %d    |\n",i);
        }
        else if(    i<32    )
        {
            printf("|        |   %d   |\n",i);
        }
        else if(i>=32&&i<100)
        {
            printf("|   %c    |   %d   |\n",i,i);
        }
        else 
        {
            printf("|   %c    |   %d  |\n",i,i);
        }
         

    }

    return 0;
    
}
