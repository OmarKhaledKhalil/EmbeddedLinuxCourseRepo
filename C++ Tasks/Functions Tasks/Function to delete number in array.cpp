int Array_int_DeleteNumber( int arr[] , int copy_ArrLength , int copy_NumberToSearch , int ** Ptr_New_Array )

{

    int i , k ;

             // Searching  for  the  recieved  number  in  the  array  elements.

    for( i = 0 ; i < copy_ArrLength ; i++ )
    
    {
        if( arr[i] == copy_NumberToSearch )
        
        {
            //If Number is Found , I allocate new heap locations for the new array 
            //With length Less than the old array  by 1


            *Ptr_New_Array = (int*) malloc ( (copy_ArrLength-1) * ( sizeof(int) ) );
             
             i = 0 ;

             k = 0 ;


            // Loop to copy the old array to the new array unless the target number.


            while ( i < copy_ArrLength )
    
               {
        
                  if( arr[i] == copy_NumberToSearch )
            
                   {
               
                   }
                  else
            
                   {

                      * ( (*Ptr_New_Array) + k ) = arr [i] ;  // Assigning the element of the new array in heap.
            
                       k++ ;

                   }
                     
                      i++  ;

                }     

            return   1     ;            // Return 1 operation  is  okay.

        }

    }

   
   *Ptr_New_Array = nullptr ;

   return 0 ;                            // Return 0 operation isn't okay.



}
