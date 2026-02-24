#include<stdio.h>

void replacenegative(int arr[],int size){
    for(int i=0;i<size;i++){
    if(arr[i]<0)
    arr[i]=0;
    
    }


}

int main(){

    int arr [6] ={5,-3,8,-1,0,-7};
    int size=6;

    printf("before replacing:\n");
    for( int i=0; i<size; i++)
    printf("%d",arr[i]);

    replacenegative(arr,size);
    printf("\n after replacing:\n");
    for(int i=0;i<size;i++)
    printf("%d",arr[i]);
    
    return 0;

}