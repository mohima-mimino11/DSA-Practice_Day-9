#include <stdio.h>

int summation(int a[], int i, int n) {
  if(i == n){
    return 0;
  }
  return a[i] + summation(a, i+1, n);
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
  }

  printf("%d\n", summation(a, 0, n));
  return 0;
}
