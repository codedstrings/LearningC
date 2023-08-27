#include<stdio.h>

int main(){
    int arr[20],sum=0,i,n;
    
//input array size
    printf("array size: ");
    scanf("%d",&n);
    
//input array values
    printf("Array values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
//print array
     for(i=0;i<n;i++){
        printf("\n%d",arr[i]);
     }
     
 //calculate sum
    for(i=0;i<n;i++)
        sum+=arr[i];
    
//printing sum
    printf("\nsum=%d",sum);

return 0;
}
