#include<stdio.h>

int main(){

int n;
printf("Enter the number of inputs: ");
scanf("%d",&n);
int arr[n],j,i,temp;

printf("\nEnter %d values: \n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int flag;
printf("Repeated Numbers Are:\n");
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j] && arr[i]!=flag){
            flag=arr[i];
            printf("%d\n",arr[i]);
        }
    }
}
printf("\n\nKEVIN PATEL\n17CE074\n");
}
