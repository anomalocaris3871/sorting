#pragma once
static int partition(int A[], int left, int right, int(*f)(int, int)) {
	int low = left;
	int high = right + 1;
	int pivot = A[left];

	do {
		do {
			low++;
		} while (low <= right && f(A[low], pivot) > 0);

		do {
			high--;
		} while (high >= left && f(A[high], pivot) < 0);
		
		if (low < high) {
			swap(A[low], A[high]);
		}

	} while (low < high);

	swap(A[left], A[high]);
	return high;
}

void quickSort(int A[], int left, int right, int(*f)(int, int)) {
	if (left < right) {
		int q = partition(A, left, right, f);
		quickSort(A, left, q - 1, f);
		quickSort(A, q + 1, right, f);
	}
}
