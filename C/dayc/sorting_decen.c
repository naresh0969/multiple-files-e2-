//Sorting in Decending order

#include<stdio.h>
void main(){
    int size,temp;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Numbers :");
    //Taking input values
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]>arr[i]){
                //swapping large to lower index values
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    //printing sorted array
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    

}