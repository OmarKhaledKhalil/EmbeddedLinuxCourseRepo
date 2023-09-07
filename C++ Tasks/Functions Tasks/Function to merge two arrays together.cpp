int * Merge_void_2Arrays( int arr1[] , int arr2[] , int copy_Array1Length , int copy_Array2Length )
{
    int i = 0 , j = 0 , k ;

    int  flag  =   0      ;

    // Creating New Array with length equal to sum of 2 array lengths , in Heap memory.

    int total_length = copy_Array1Length + copy_Array2Length ;  

    int *ptr = (int*) malloc ( total_length * sizeof(int) )  ;


    // Filling the New array  by  an element from array 1 then an element from array 2.
    // With Respect to check length of first and second array before filling new array.

    for ( k = 0 ; k < total_length ;)
    
    {
       if( i < copy_Array1Length )
       {
           ptr[k] = arr1[i] ;
           
           k++ ;

           i++ ;

       }
       if( j < copy_Array2Length )
       {
           ptr[k] = arr2[j] ;
           
           k++ ;
           
           j++ ;

       }
    } 
                
    
    return  ptr ; // Returning the Pointer which look at the allocated location of Heap of the New Array .

}
