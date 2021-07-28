#pragma once

void insertionSortFn(int A[], int n, int (*f)(int, int)) {
	for (int i = 1; i < n; ++i) {
		int key = A[i];
		int j;
		for (j = i - 1; j >= 0 && f(A[j], key) < 0; --j) {
			A[j + 1] = A[j];
		}
		A[j + 1] = key;
	}
}
