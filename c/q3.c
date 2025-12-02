#include <stdio.h>
int main(){
    int arr[7]={20,32,6,7,22,47,21};
    int min = arr[0];
    int max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        if(min>arr[i]) min = arr[i];
        if(max<arr[i]) max = arr[i]; 
    }
    printf("maximum no: %d, minimum no: %d",max,min);
    return 0;

}