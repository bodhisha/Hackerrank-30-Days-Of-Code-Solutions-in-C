#include<stdio.h>
int main(){
    int i,j,n,swaps=0,a[600],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swaps=swaps+1;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",swaps);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d",a[n-1]);
}
