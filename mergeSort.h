#pragma once
#define MAX_SIZE 1024

static void merge(int A[], int left, int mid, int right, int (*f)(int, int)) {
	int i;
	int j;
	int k = left;
	int l;

	static int sorted[MAX_SIZE];

	for (i = left,j = mid + 1;i <= mid && j <= right; ) {
		sorted[k++] = (f(A[i], A[j]) > 0) ? A[i++] : A[j++];
	}

	if (i > mid) {
		for (l = j; l <= right; l++, k++) {
			sorted[k] = A[l];
		}
	}
	else {
		for (l = i; l <= mid; l++, k++) {
			sorted[k] = A[l];
		}
	}

	for (l = left; l <= right; l++) {
		A[l] = sorted[l];
	}
}

void mergeSort(int A[], int left, int right, int (*f)(int, int)) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(A, left, mid, f);
		mergeSort(A, mid + 1, right, f);
		merge(A, left, mid, right, f);
	}
}
