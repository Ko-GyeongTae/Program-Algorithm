#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo_list[50] = { 0, 1, 1 };

void fibonacci(int arg) {
  for (int i = 3; i <= arg; i++) {
    fibo_list[i] = fibo_list[i - 2] + fibo_list[i -1];
  }
}

int main() {
  int K;

  scanf("%d", &K);

  fibonacci(K + 1);

  printf("%d %d\n", fibo_list[K - 1], fibo_list[K]);

  printf("\n");
  return 0;
}