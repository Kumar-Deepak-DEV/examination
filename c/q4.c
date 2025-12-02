#include <stdio.h>
int main(){
    char arr[100];
    scanf("%s",&arr);
    int i=0,n=0;
    while(arr[i]!='\0'){
        n++;
        i++;
    }
    for(int j=0; j<=(n-1)/2;j++){
        char a = arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=a;
    }
    printf("%s",arr);
    return 0;
}