#include <stdio.h>
void bubblesort(int arr[], int n){
  int i, j, tmp;
  for(i = 0; i < n; i++){
    for(j=0; j < n-i-1; j ++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
}
}
}
}
int main() {
  int array[100], n, i, j;
  printf("Masukkan Jumlah Elemen: ");
  scanf("%d", &n);
  printf("Masukkan nilai: \n");
  for(i = 0; i < n; i++){
    scanf("%d", &array[i]);
  }
  bubblesort(array, n);
  printf("Hasil pengurutanya:\n");
  for(i = 0; i < n; i++){
    printf("%d ", array[i]);
  }
  printf("\n");
}
