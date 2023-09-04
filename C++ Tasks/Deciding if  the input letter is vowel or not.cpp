#include <iostream>

int main ()
{
   //Defining a Variable Location in RAM to Take the  Input  Character .

   unsigned char chr;

   //Super Loop Program System.

   while(1)
   {

    //Recieving the Input Character and store it in the Variable in RAM.

      std :: cout << "Please Input The Letter" << std :: endl ;
      std :: cin  >> chr ;

    //Checking if the Input is a Letter or not at  the  First  Place  .

      if( chr >= 65 && chr <=122 )
     
      {

    //Checking if the  Input  Letter  is  a  Vowel  letter  or  not  .

        if(chr=='a'||chr=='e'||chr=='i'||chr=='u'||chr=='o')

     {

        std :: cout << "This  Letter  is  Vowel" << std :: endl ;

     }

      else

     {

        std :: cout << "This Letter isn't Vowel" << std :: endl ;

     }


      }

      else
      
      {

        std :: cout << "This  isn't  a  Letter " << std :: endl ;

      }

     
  
   }

    return 0;

}
