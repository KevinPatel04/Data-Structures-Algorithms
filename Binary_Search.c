#include<stdio.h>
//to Sreach 89891245
int main(){

int n=20;
long arr[20]={89891235,89891236,89891237,89891238,89891239,
              89891240,89891241,89891242,89891243,89891244,
              89891245,89891246,89891247,89891248,89891249,
              89891250,89891251,89891252,89891253,89891254};
int i,mid,min,max;
int c=1;
long key=89891245;

while(c==1){
int q=1;
int flag=0;
printf("Key to be searched in array:-> %d\n",key);

    printf("By Using Binary Sreach:-> \n");
    max=n-1;
    min=0;
    while(q==1){
        mid=((min+max)/2);
        if(key>arr[max] || key<arr[min]){
            break;
        }else if(key==arr[mid]){
            flag=1;
            printf("\nKey Found!! @ %d index",mid);
            break;
        } else if(key<arr[mid]){
            max=mid-1;
        }else if(key>arr[mid]){
            min=mid+1;
        }else if(mid==max && mid==min){
            break;
        }
    }
    if(flag==0){
        printf("\nKey Not Found!!");
    }

    c=0;

}
printf("\n\nKEVIN PATEL\n17CE074\n");
}

