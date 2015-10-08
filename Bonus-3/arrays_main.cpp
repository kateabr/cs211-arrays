#include "arrays.h"
#include <cassert>

using namespace std;

int main()
{
	task_1();
	task_2();
	assert(task_3_zero() == 0);
	task_4();
	const int size = 4;
	int arr1[size]{ 1,2,3,4 };
	int arr2[size];
	task_5_copy(arr1, arr2, size);
	for (int i = 0; i < size; i++)
		assert(arr1[i] == arr2[i]);
}