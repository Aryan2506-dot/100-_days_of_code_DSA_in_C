 #include<stdio.h>
void display(int  arr[] , int n){
for(int i=0 ; i<n ;i++ ){
    printf("%d" , arr[i]);
    
    }
    printf("\n");
}

int insertion(int arr[] , int size , int index , int capacity , int element ){
    if(capacity>=size){
        return 0;
    }
     for(int i = size ; i>=index;i--){
    arr[i+1] = arr[i];      
     }
arr[index]=element;


}

int main(){
int size=5;
int arr[100]={1,2,3,4,5};
display(arr , size);
insertion(arr,size,3,100,15);
size+=1;
dispaly(arr,size);
return 0;
}
