// To insert a new element into the end of an array
/*
#include <stdio.h>
int main(){
    int arr[100] = {1,2,3,4,5};
    int n=5;
    int new=6;
    arr[n]=new;
    n++;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

// to insert a new element at the start of an array
/*
#include <stdio.h>
int main(){
    int arr[100] = {1,2,3,4,5};
    int n=5;
    int new=0;
    for (int i=n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=new;
    n++;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

// to insert a new element at a given position in an array
/*
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n=5;
    int new=10;
    int pos=2; 
    for (int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=new;
    n++;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    
}
*/


/*
// delete an element from an array
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5};
    int n=5;
    int pos=3; 
    for (int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/