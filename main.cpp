#include "memory.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "ShellSort.h"
#include "mergeSort.h"
#include "quickSort.h"
#include "redixSort.h"

int main() {

	int list[16];
	int n = 16;

	initRandom(list, n);
	printArray(list, n, "Original ");

	radixSort(list, n);
	printArray(list, n, "insert-as");

	return 0;
}
