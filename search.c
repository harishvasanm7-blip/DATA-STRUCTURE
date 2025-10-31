/*#include <stdio.h>
int main(){
    int arr[100],n,key,f,l,mid,flag=0;
    printf("number of elements:");
    scanf("%d",&n);

    printf("Enter %d elements in sorted order:",n);
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Enter key element");
    scanf("%d",&key);

    f=0;
    l=n-1;
    while (f<=l){
        mid=(f+l)/2;

        if (arr[mid]==key){
            flag=1;
            break;

        }
        else if (arr[mid]<key){
            f=mid+1;
        }
        else{
            l=mid-1;
        }

        }

        if (f==1)
            printf("Element found at position %d",mid+1);
        else
            printf("Element not found");
    return 0;
    }
*/
//linear search
#include <stdio.h>
int main(){
    int arr[100],n,key,flag=0;
    printf("Enter no of elements:");
    scanf("%d",&n);

    printf("enter %d elements:",n);
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("Enter key element:");
    scanf("%d",&key);

    for (int i=0;i<n;i++){
        if (arr[i]==key){
            flag=1;
            break;
        }
    }

    if (flag==1)
        printf("Element found at %d position",key);
    else
        printf("Element not found");
        return 0;

}