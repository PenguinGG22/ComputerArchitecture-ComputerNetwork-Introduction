#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int *arr, *tmp;
	int N = 0, K = 0;
	int idx = 0;

	printf("입력할 배열의 크기 : ");
	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);
	tmp = (int*)malloc(sizeof(int) * N);
	if (arr == NULL || tmp == NULL) {
		printf("메모리 할당 실패\n");
		return 1;
	}

	printf("배열 입력 : ");
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp[i]);
	}

	printf("회전수 입력: ");
	scanf("%d", &K);
	for (int i = 0; i < N; i++) {
		idx = (i + (K % N) + N) % N;
		arr[idx] = tmp[i];
	}

	printf("회전 전 배열 : ");
	for (int i = 0; i < N; i++) {
		printf("%d ", tmp[i]);
	}
	printf("\n");

	printf("회전 후 배열 : ");
	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}

	free(arr);
	free(tmp);
	arr = NULL;

	return 0;
}