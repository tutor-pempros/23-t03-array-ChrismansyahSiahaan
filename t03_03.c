// 12S23003 - Chrismansyah T Siahaan
#include <stdio.h>

int main() {
  int n, i, min, max, sum;
  float avg;

  scanf("%d", &n);

  min = 101;
  max = -101;
  sum = 0;

  for (i = 0; i < n; i++) {
    int num;
    scanf("%d", &num);

    if (num < min) {
      min = num;
    } else if (num > max) {
      max = num;
    }

    sum += num;
  }

  avg = (float)sum / n;

  int max_diff = -1;
  for (i = 0; i < n - 1; i++) {
    int diff = abs(n[i] - n[i + 1]);
    if (diff > max_diff) {
      max_diff = diff;
    }
  }

  printf("%d\n", min);
  printf("%d\n", max);
  printf("%.2f\n", avg);
  printf("%d\n", max_diff);

  return 0;
}