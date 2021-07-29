#pragma once

void bubbleSort(int A[], int n, int (*f)(int ,int)) {

	for (int i = n - 1;i > 0;--i) {
		bool scanFlag = false;
		for (int j = 0;j < i;++j) {
			if (f(A[j], A[j+1]) < 0) {
				swap(A[j], A[j + 1]);
				scanFlag = true;
			}
		}
		if (scanFlag == false) {
			break;
		}
	}
}