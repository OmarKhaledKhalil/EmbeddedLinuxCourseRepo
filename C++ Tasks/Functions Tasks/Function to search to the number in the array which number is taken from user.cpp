int Array_int_CheckNumber(int arr[], int copy_ArrLength , int copy_NumberToSearch , int * Element_Number_Ref )

{
   
 
     // Searching  for  the  recieved  number  in  the  array  elements.

    for( int  i=0 ; i<copy_ArrLength ; i++ )
    
    {
        if(arr[i]==copy_NumberToSearch)
        {

            *Element_Number_Ref=i; // Passing  Index  of  This  element.

            return 1 ;             // Number  Exists   in   the   Array.

        }

    }

            return -1 ;            // Number doesn't exist in the Array.

}



