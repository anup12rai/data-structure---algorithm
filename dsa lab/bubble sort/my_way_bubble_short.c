//bubble sort
#include<stdio.h>
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int length,user_input,i;
    
    printf("Enter the length:");
    scanf("%d",&length);
    int arr[length];
    for (i = 0; i < length; i++)    {
        printf("Enter the element:");
        scanf("%d",&user_input);
        arr[i] = user_input;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    printf("Sorted array: \n");
    printArray(arr,n);
    return 0;
}