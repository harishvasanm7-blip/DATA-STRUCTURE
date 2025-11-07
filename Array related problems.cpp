/*#include <stdio.h>

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicate elements: ");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;   
            }
        }
    }
    return 0;
}*/


/*#include <stdio.h>
int main(){
	int i;
	int a[100];
	int key;
	int n;
	int found=0;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if (a[i]==key){
			printf("position : %d",i);
			found=1;
			break;
		}
	
	}
	if (!found){
		printf("Element not found");
	}
	
}*/

/*#include <stdio.h>

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if(n >= 5)
        printf("5th iterated element is: %d\n", arr[4]);
    else
        printf("Array has less than 5 elements.\n");

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n, sum = 0, total = 0;
    printf("Enter size of array (n - 1 elements): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements: ", n-1);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    total = n * (n + 1) / 2;   
    printf("Missing element: %d\n", total - sum);
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a[10][10], rows, cols, max;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    max = a[0][0];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            if(a[i][j] > max)
                max = a[i][j];

    printf("Largest element = %d\n", max);
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    printf("Enter a string: ");
    gets(str);

    for(int i = 0; i < strlen(str); i++) {
        for(int j = i + 1; j < strlen(str); j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("String after sorting: %s\n", str);
    return 0;
}*/


/*#include <stdio.h>

int main() {
    char arr[100];
    int n;

    printf("Enter number of characters: ");
    scanf("%d", &n);

    printf("Enter characters:\n");
    for(int i = 0; i < n; i++)
        scanf(" %c", &arr[i]);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("Character '%c' repeated at indices %d and %d\n", arr[i], i, j);
            }
        }
    }
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int arr[100], n, count, maxCount = 0, mostFreq;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    printf("Most frequent number: %d (repeated %d times)\n", mostFreq, maxCount);
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a[10][10], r, c, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Row sums:\n");
    for(int i = 0; i < r; i++) {
        sum = 0;
        for(int j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d sum = %d\n", i + 1, sum);
    }

    printf("Column sums:\n");
    for(int j = 0; j < c; j++) {
        sum = 0;
        for(int i = 0; i < r; i++)
            sum += a[i][j];
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Elements repeated twice: ");
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 2) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}*/










