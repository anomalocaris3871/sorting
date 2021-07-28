#pragma once

inline void swap(int& x, int& y) {
	int t = x;
	x = y;
	y = t;
}

void selectionSortFn(int A[], int n, int(*f)(int, int)) {
	for (int i = 0;i < n - 1; ++i) {
		int least = i;
		for (int j = i + 1; j < n; ++j) {
			if (f(A[least], A[j]) < 0) {
				least = j;
			}
		}
		swap(A[i], A[least]);
	}
}
