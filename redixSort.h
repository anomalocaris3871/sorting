#pragma once
#include <queue>
#define BUCKETS 10
#define DIGITS 4


void radixSort(int list[], int n) {
	std::queue<unsigned char> queues[BUCKETS];
	int factor = 1;
	for (int d = 0; d < DIGITS; ++d) {
		for (int i = 0;i < n;++i) {
			queues[(list[i] / factor) % 10].push(list[i]);
		}

		for (int b=0,i=0; b < BUCKETS; ++b) {
			while (!queues[b].empty()) {
				list[i++] = queues[b].front();
				queues[b].pop();
			}
		}
		
		factor *= 10;
	}
}