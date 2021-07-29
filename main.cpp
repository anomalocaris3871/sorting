#include "memory.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "bubbleSort.h"
#include "ShellSort.h"


int main() {

	int list[16];
	int n = 16;
	initRandom(list, n);
	printArray(list, n, "Original ");

	shellSort(list, n, ascend);
	printArray(list, n, "Insert-As");

	shellSort(list, n, descend);
	printArray(list, n, "Insert-De");

	return 0;
}
