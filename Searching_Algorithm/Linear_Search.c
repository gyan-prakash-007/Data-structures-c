// linear search 

#include<stdio.h>

int linearSearch(int arr[], int size , int element){
    int i ;   
    for ( i = 0; i < size ; i++)
    {
        if(arr[i] == element){
            return i ;
        }
     }
    
     return -1;
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
