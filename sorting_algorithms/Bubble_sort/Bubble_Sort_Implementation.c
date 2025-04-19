#include<stdio.h>
#include<stdlib.h>

// bubble sort

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    
}

void bubbleShort(int a[] , int n){
    int temp  ;
    for (int i = 0; i < n-1; i++) //for number of passes
    {
        for ( int j = 0; j < n-1-i ; j++)// for comparison in each pass  
        {
            //sorting
            if(a[j]>a[j+1]){ 
                temp= a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
        
    }
    
}
int main(){
    int a[]= {12,54,65,7,23,9};
    int n = 6;

    printArray(a,n);// printing the array before shoorting 
    
    bubbleShort(a,n);//Function to short the array 

    printArray(a,n);// printing the array after shoorting 

    return 0;
}
