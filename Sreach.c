#include<stdio.h>

int main(){
int a;
int n;
printf("Enter Size Of Array in Integer:-> ");
scanf("%d",&n);
int arr[n];
int i,mid,min,max;
printf("Enter %d values Integer :->\n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int c=1;
while(c==1){
int key;
int comp,q=1;
int flag=0;
printf("Enter Key to be searched in array:-> ");
scanf("%d",&key);
printf("Enter 1: Linear Sreach || 2: Binary Sreach || 3: Exit :-> ");
scanf("%d",&a);

switch(a){

case 1:
    printf("By Using Linear Sreach:->\n");
    comp=0;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            comp++;
            printf("\nKey Found!! @ %d index",i);
            printf("\nNo. of Comparisions: %d",comp);
            break;
        }else{
            continue;
        }
    }
    if(flag==0){
        printf("\nKey Not Found!!");
    }
    c=0;
    break;

case 2:
    printf("By Using Binary Sreach:-> \n");
    max=n-1;
    min=0;
    mid;
    comp=0;
    while(q==1){
        mid=((min+max)/2);
        comp++;
        if(key>arr[max] || key<arr[min]){
            break;
        }else if(key==arr[mid]){
            flag=1;
            printf("\nKey Found!! @ %d index",mid);
            printf("\nNo. of Comparisions: %d",comp);
            break;
        } else if(key<arr[mid]){
            max=mid-1;
            printf("<");
        }else if(key>arr[mid]){
            min=mid+1;
            printf(">");
        }else if(mid==max && mid==min){
            break;
        }
    }
    if(flag==0){
        printf("\nKey Not Found!!");
    }

    c=0;
    break;

default:
    c=1;
}
}
printf("\n\nKEVIN PATEL\n17CE074");
}
