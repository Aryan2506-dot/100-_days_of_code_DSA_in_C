#include<stdio.h>
int linearSearch(int arr[] , int size , int element){
    for(int i=0 ; i<size ; i++){
    if(arr[i]==element){
        return 1;
    }
    }
    return -1;
}

int main(){
    int arr[100]={1,2,3,4,5};
    int size = 5;
    int element = 3;
    int searchelement=linearSearch(arr,size,element);
    printf("the element found %d" , element , searchelement);
    return 0 ;
}