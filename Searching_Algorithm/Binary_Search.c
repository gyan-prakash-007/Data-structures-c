// binary search 

#include<stdio.h>

int linearSearch(int arr[], int size , int element){
    int low = 0 , mid ,high = size - 1;

    while (low <= high )
    {
        mid = (low + high) /2 ;
        if (arr[mid] == element){
            return mid ;
        }

        if(arr[mid]<element){
            low = mid + 1 ;

        }else{
            high = mid - 1;
        }
    }
    
    return -1 ;

}
int main(){
    int n;
    int arr[] = {1,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    
    printf("enter the number ");
    scanf("%d",&n);

    int searchIndex = linearSearch(arr, size , n);
    
    if(searchIndex != -1){
    printf(" the element %d was found at index %d", n , searchIndex);
    }else{
        printf("element not found");
    }

    return 0;


}
