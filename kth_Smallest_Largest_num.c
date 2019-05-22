#include<stdio.h>
int main(){

int n,i,j,temp;
printf("Enter the size of array : ");
scanf("%d",&n);
int arr[n];
printf("\nEnter values of arr: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int k;
printf("Enter K: ");
scanf("%d",&k);

printf("\n%dth least element is %d",k,arr[k-1]);

printf("\n%dth largest element is %d",k,arr[n-k]);
printf("\n\nKEVIN PATEL\n17CE074\n");
}

