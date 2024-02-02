#include <stdio.h>
int main(){
int arr []={90,85,4,15,3,25,2,0,105,33,75,63,5,7,18,120,80,6,19,9,99,103};
int n= sizeof(arr)/sizeof(arr[0]);

for (int i=0; i<n-1;i++){
    for (int j=0;j<n-i-1;j++){
        if (arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
printf("sorted array: ");
for(int i=0; i<n; i++){
    printf("%d \n",arr[i]);
}
printf("\n");
int itemToSearch=2;
int low=0, high=n-1,mid,pos=-1;
while(low<=high){
    mid= (low+high)/2;
    if (arr[mid]==itemToSearch){
        pos=mid;
        break;
    }
    else if (arr[mid]<itemToSearch){
        low=mid+1;
    }else {
    high=mid-1;
    }
}
if (pos!=-1){
    printf("Item %d found at position %d.\n",itemToSearch, pos+1);

} else
printf("Item %d not found at position %d.\n",itemToSearch);

return 0;
}
