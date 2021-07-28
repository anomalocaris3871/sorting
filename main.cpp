#include "memory.h"
#include "insertionSort.h"
#include "selectionSort.h"


int main() {

	int list[16];
	int n = 16;
	initRandom(list, n);
	printArray(list, n, "Original ");

	selectionSortFn(list, n, ascend);
	printArray(list, n, "Insert-As");

	selectionSortFn(list, n, descend);
	printArray(list, n, "Insert-De");

	return 0;
}
