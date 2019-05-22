#include<stdio.h>
//insertion sort

int main(){
float key,temp,arr[28]={4.3,5.3,6.3,2.3,1.2,5.4,7.1,7.2,
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

for(j=1;j<=27;j++){
    key=arr[j];
    i=j-1;
    while(i>=0 && arr[i]>key){
        arr[i+1]=arr[i];
        i=i-1;
    }
    arr[i+1]=key;
}

printf("Using Insertion Sort:\n");
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
