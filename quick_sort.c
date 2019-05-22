#include<stdio.h>
//quick sort
float arr[28]={4.3,5.3,6.3,2.3,1.2,5.4,7.1,7.2,
                1.1,1.3,1.4,6.1,7.4,2.4,2.2,2.1,
                3.1,3.3,3.2,4.4,3.4,4.1,5.1,4.2,
                5.2,7.3,6.4,6.2};
int main(){
int i,j;
printf("The unsorted array is:\n\t[ ");
for(i=0;i<28;i++){
    printf("%g ",arr[i]);
    if((i+1)%14==0 && i!=27){
        printf("\n\t");
    }
}
printf("]\n\n");
quicksort(0,27);
printf("Using Quick Sort:\n");
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

void quicksort(int min,int max){
    if(min<max)
    {
    int q=partition(min,max);
    quicksort(min,q-1);
    quicksort(q+1,max);

    }
}


int partition(int min, int max){

    float temp,x=arr[min];
    int i=min;
    int j;
    for(j=min+1;j<=max;j++)
    {
        if(arr[j]<=x){
            i++;
            //swap arr[i] <-> arr[j]
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
        }

    }
    temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    return i;
}
