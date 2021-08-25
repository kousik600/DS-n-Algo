#include <stdio.h>

int main()
{
    int array[50],n,find;
    printf("how many elements you want to enter");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d ",array[j]);
    }
    printf("\n Enter the value you want to find");
    scanf("%d",&find);
    for(int k=0;k<n;k++){
        if(array[k]==find){
            printf("Element is present");
            break;
        }
        else if(k==n-1){
            printf("Element not found");
        }
    }
    
    return 0;
}

