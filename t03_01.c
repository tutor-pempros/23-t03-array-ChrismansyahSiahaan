// 12S23003 - Chrismansyah T Siahaan

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
  scanf("%d", &arr[i]);
  }

  int min = arr[0], max = arr[0];
  for (int i = 1; i < n; i++) {
  if (arr[i] < min) {
  min = arr[i];
  }

  if (arr[i] > max) {
  max = arr[i];
  }
  }

printf("Nilai terkecil: %d\n", min);
printf("Nilai terbesar: %d\n", max);

return 0;
}
