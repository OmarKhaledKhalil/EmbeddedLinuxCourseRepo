void Merge_void_2Arrays( int arr[] , int copy_ArrLength , int **ArrayEven_Ref , int ** ArrayOdd_Ref )

{
    int  even_count  =   0   ;
    int  odd_count   =   0   ;

    int  j  =  0  ;

    for ( int i = 0 ; i < copy_ArrLength ; i++ )
    {
        if( arr[i] % 2 == 0 )
        
        {

            even_count++  ;

        }

        else
        
        {
            
            odd_count++   ;

        }
    }

    
    
    
    *ArrayEven_Ref = (int*) malloc ( even_count * sizeof(int) ) ; // Creating an Array in Heap for Collecting Even Numbers.
    *ArrayOdd_Ref  = (int*) malloc ( odd_count  * sizeof(int) ) ; // Creating an Array in Heap for Collecting  Odd Numbers.
    
    

    // Filling The Array which contains Even Numbers .

    for( int i = 0 ; i < copy_ArrLength ; i++ )
    {
        
        if ( arr[i] % 2 == 0 )
        
        {

           *((*ArrayEven_Ref)+j) = arr[i] ;
            
            j++ ;

        }
        
    }

            j = 0 ;


    // Filling The Array which contains  Odd Numbers .
    
     for( int i = 0 ; i < copy_ArrLength ; i++ )
    {
        
        if ( arr[i] % 2 != 0 )
        
        {

           *((*ArrayOdd_Ref)+j) = arr[i] ;
            
            j++ ;

        }
        
        
    }


}
