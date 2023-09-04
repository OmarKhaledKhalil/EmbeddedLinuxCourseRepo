#include <iostream>

int main ()
{
   //Defining a  Variable  Location  in RAM to Take the  Input  Number .

   int  num;

   //Super Loop Program System.

   while(1)
   {

    //Recieving the Input Number and store it in the Variable in RAM  .

      std :: cout << "Please Input The Number" << std :: endl ;
      std :: cin  >> num ;

    //Representing Multiplication Table of the Input Number as well as
    //Doing some if conidtions to  Refining  the  form  of  the Table.

      for( int i = 0 ; i<10 ; i++ )
      
      {
        
        if((num*i)%10==(num*i))
       
        {
           printf("|   %d    x    %d    |    %d     |\n",num,i,num*i); 
        }

        else if((num*i)/100000!=0)
        
        {

           printf("|   %d    x    %d    |  %d  |\n",num,i,num*i);

        }

        else if((num*i)/10000!=0)

        {

           printf("|   %d    x    %d    |   %d  |\n",num,i,num*i);

        }

        else if((num*i)/1000!=0)
        
        {
   
           printf("|   %d    x    %d    |   %d   |\n",num,i,num*i);

        }


        else if((num*i)/100!=0)

        {

          printf("|   %d    x    %d    |    %d   |\n",num,i,num*i);

        }

        else
        {

          printf("|   %d    x    %d    |    %d    |\n",num,i,num*i);

        }
        

      }
  
   }

    return 0;

}
