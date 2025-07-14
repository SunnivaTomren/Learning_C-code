#include <stdio.h>

int sum(const int arr[], int n){
    int tsum = 0;
 for(int i = 0; i < n; i++) {
     tsum += arr[i];
    }
    return tsum;
}
float average(const int arr[],const int n) {
    float total_sum = 0;
    for(int i = 0; i < n; i++) {
        total_sum += (float)arr[i];
    }
    total_sum = total_sum / (float)n;
    return total_sum;
}

float median(const int arr[], const int n) {
    float median1;
    if (n % 2 == 0) {
        median1 = ((float)arr[(int)(n / 2)] + (float)arr[(int)(n / 2 - 1)]) / 2.0f;
    }
    else {
        median1 = (float)(n-1)/2;
    }
    return median1;
}

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                //SWAP
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int main() {

    //sorting numbers
    int arr[10] = {9,3,1,1,2,8,10,48,0,3};
    int n = 10;
    bubblesort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n Sum of the numbers is %i \n", sum(arr, n));
    printf("Average of the numbers is %f \n", average(arr, n));
    printf("Maximum of the numbers is %i \n", arr[n-1]);
    printf("Median of the numbers is %f \n", median(arr, n));
    return 0;
}
