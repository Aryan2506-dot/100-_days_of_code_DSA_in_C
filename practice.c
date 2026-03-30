#include<stdio.h>
void display(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}
int insertion(int arr[] , int size , int index , int element , int capacity){
    if(size>=capacity){
        return -1;

    }
    for(int i=size-1 ; i>=index ;i--){
        arr[i+1] = arr[i];
        
    }
    arr[index]=element;
}
int main(){
int arr[100]={7,8,9,10,11,12};
int size=6;
int element = 45 ; 
int index = 4;
display(arr , size);
insertion(arr , size , index , element , 100);
size+=1;
display(arr ,size);
return 0;


}