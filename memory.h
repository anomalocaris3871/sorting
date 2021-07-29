#pragma once
#include <stdio.h>
#include <stdlib.h>
static void initRandom(int list[], int n, int max = 100) {
	for (int i = 0;i < n;++i) {
		list[i] = rand() % max;
	}
}

static void printArray(int arr[], int n, const char* str = "Array") {
	printf("%s = ", str);
	for (int i = 0;i < n;++i) {
		printf("%3d", arr[i]);
	}
	printf("\n");
}

inline int ascend(int x, int y) { return y - x; }
inline int descend(int x, int y) { return x - y; }

inline void swap(int& x, int& y) {
	int t = x;
	x = y;
	y = t;
}