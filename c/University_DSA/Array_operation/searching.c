#include <stdio.h>
void main()
{
    int arr[5] = {18, 30, 15, 70, 12};
    int item = 70, i, j=0 , count = 0 ;
    printf("Given array elements are :\n");
    for(i = 0; i<5; i++)
    {
        printf("arr[%d] = %d, ", i, arr[i]);
    }
    printf("\nElement to be searched = ");
    scanf("%d",&item);
    while( j < 5)
    {
        if( arr[j] == item )
        {
            count++;
            break;
        }
        j = j + 1;
    }
    if(count==0){
        printf("search is unsuccessful");
    }else{
        printf("search is successful , its position is = %d",j);
    }
}
