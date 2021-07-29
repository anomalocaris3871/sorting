#pragma once

static void sortGapInsertion(int A[], int first, int last, int gap, int(*f)(int, int)) {
	int i, j, key;
	for (i = first + gap; i <= last; i = i + gap) {
		key = A[i];
		for (j = i - gap; j >= first && f(A[j], key) < 0; j = j - gap) {
			A[j + gap] = A[j];
		}
		A[j + gap] = key;
	}
}

void shellSort(int A[], int n, int(*f)(int, int)) {
	for (int gap = n / 2;gap > 0;gap = gap / 2) {
		if ((gap % 2) == 0) {
			gap++;
		}
		for (int i = 0;i < gap;++i) {
			sortGapInsertion(A, i, n - 1, gap, f);
		}
	}
}