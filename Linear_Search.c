#include<stdio.h>
//to Sreach 89891245
int main(){

int n=15;
long arr[15]={89123452,12345678,98765342,
              19876543,13579086,24680975,
              10293847,10385749,81238450,
              91876534,64590285,89891245,
              89076253,98766789,24689742};
int i;
int c=1;
long key=89891245;
while(c==1){
int q=1;
int flag=0;
printf("Enter Key to be searched in array:-> %d\n",key);

    printf("By Using Linear Sreach:->\n");
    for(i=0;i<n;i++){
        if(arr[i]==key){
            flag=1;
            printf("\nKey Found!! @ %d index",i);
            break;
        }else{
            continue;
        }
    }
    if(flag==0){
        printf("\nKey Not Found!!");
    }
    c=0;

}
printf("\n\nKEVIN PATEL\n17CE074\n");
}
