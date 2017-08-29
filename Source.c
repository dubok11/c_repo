#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <malloc.h>
#include <stdbool.h>

int differenceArray(int *arr, int size) {
	if (size == 1) {
		return arr[size];
	}
	return differenceArray(arr, --size) - arr[size];
}

int massinput(int *arr, int i) {
	if (i) {
		massinput(arr, --i);
		printf_s("%d ", arr[i]);
	}
}

	int main()
	{
		setlocale(LC_ALL, "RUS");
		srand(time(NULL));
		int size;

		int *arr;
		printf_s("¬ведите размер массива ");
		scanf_s("%d", &size);
		arr = (int*)malloc(sizeof(int)*size);
		for (int i = 0; i < size; ++i)
		{
			arr[i] = rand() % 1000;
			printf("%d ", arr[i]);
		}
		puts("");

		massinput(arr, size);
		puts("");
		printf_s("%d\n", differenceArray(arr, size));
		return 0;
	}