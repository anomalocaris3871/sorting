#include "memory.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "ShellSort.h"
#include "mergeSort.h"
#include "quickSort.h"

int main() {

	int list[16];
	int n = 16;

	initRandom(list, n);
	printArray(list, n, "Original ");

	quickSort(list, 0, n-1, ascend);
	printArray(list, n, "insert-as");

	quickSort(list, 0, n - 1, descend);
	printArray(list, n, "insert-des");

	return 0;
}
