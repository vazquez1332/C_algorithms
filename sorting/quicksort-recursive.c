#include <stdio.h>
#define long 8 //size of array

void charge(int arr[long],int i){
    if (i<long)
    printf("\n Put the number: "\n);
    printf("-%d: \n", i+1);
    scanf("%d",&arr[i]);
    charge(arr,i+1);
} //array charge 

void quicksort(int arr[], int inf, int sup){ 
    int t[long];
    int i,piv,m,n;
    if (inf<sup){ //ascendent order, you can change the condicional
        i=(inf+sup)/2;
        piv=arr[i];
        for(i=inf;i<=sup;i++){
            t[i]=arr[i]; m=inf; n=sup;
        }
        for(i=inf;i<= sup; i++){
        if (t[i]<piv){
            arr[m]=t[i]; m=m+1;}
        else if (t[i]>piv){
            arr[n]=t[i]; n=n-1;}
        for( i=m;i<=n;i++)
        arr[i]=piv;
        quicksort(arr,inf,m-1);
        quicksort(arr,n+1,sup);
        }
    }
}

int main(){ 
    int a[long];
    charge(a,0);
    quicksort(a,0,long-1);
    //for(int i=0; i<long;i++)
    //printf(" a[%d]= %d ",i,a[i]);
}
