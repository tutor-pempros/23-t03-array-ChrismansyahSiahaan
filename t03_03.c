// 12S23003 - Chrismansyah T Siahaan

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int min = arr[0], max = arr[0], sum = 0, max_diff = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }

    if (arr[i] > max) {
      max = arr[i];
    }

    sum += arr[i];

    if (i > 0) {
      int diff = abs(arr[i] - arr[i - 1]);
      if (diff > max_diff) {
        max_diff = diff;
      }
    }
  }

  float average = (float)sum / n;

  printf("Nilai terkecil: %d\n", min);
  printf("Nilai terbesar: %d\n", max);
  printf("Nilai rata-rata: %.2f\n", average);
  printf("Jarak nilai terjauh: %d\n", max_diff);

  return 0;
}
