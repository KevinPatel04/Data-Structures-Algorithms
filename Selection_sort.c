#include<stdio.h>
//selection sort

int main(){
float arr[28]={4.3,5.3,6.3,2.3,1.2,5.4,7.1,7.2,
                1.1,1.3,1.4,6.1,7.4,2.4,2.2,2.1,
                3.1,3.3,3.2,4.4,3.4,4.1,5.1,4.2,
                5.2,7.3,6.4,6.2};

int i,j;
int min_index;
float temp;
printf("The unsorted array is:\n\t[ ");
for(i=0;i<28;i++){
    printf("%g ",arr[i]);
    if((i+1)%14==0 && i!=27){
        printf("\n\t");
    }
}
printf("]\n\n");

for(i=0;i<27;i++){
    min_index=i;
    for(j=i+1;j<28;j++){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }

    }
    if(i!=min_index){
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}
printf("Using Selection Sort:\n");
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
