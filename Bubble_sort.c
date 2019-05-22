#include<stdio.h>
//bubble sort

int main(){
float arr[28]={4.3,5.3,6.3,2.3,1.2,5.4,7.1,7.2,
                1.1,1.3,1.4,6.1,7.4,2.4,2.2,2.1,
                3.1,3.3,3.2,4.4,3.4,4.1,5.1,4.2,
                5.2,7.3,6.4,6.2};
int i,j;
printf("The unsorted array is:\n\t[ ");
for(i=0;i<28;i++){
    printf("%g ",arr[i]);
    if((i+1)%14==0 && i!=27){
        printf("\n\t");
    }
}
printf("]\n\n");


float temp;
for(i=0;i<27;i++){
    for(j=0;j<28;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("Using Bubble Sort:\n");
printf("The sorted array is:\n\t[ ");
for(i=0;i<28;i++){
    printf("%g ",arr[i]);
    if((i+1)%14==0 && i!=27){
        printf("\n\t");
    }
}
printf("]");
printf("\n\nKEVIN PATEL\n17CE074");

}

