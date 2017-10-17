/* Simple CPU executable code for Vector Addition
 * CPU-ONLY-CODE
 * Author : Janvijay Singh
 */

#include<bits/stdc++.h>
#define SIZE 100000000

using namespace std;

clock_t processingTime;

// Method to perform Vector Addition
void VectorAdd(int *a, int *b, int *c, int n)
{
	int i;
	for(i=0;i<n;i++)
		c[i] = a[i] + b[i];
}

int main()
{
	int *a, *b, *c;

	// Memory Allocation
	a = (int *)malloc(SIZE * sizeof(int));
	b = (int *)malloc(SIZE * sizeof(int));
	c = (int *)malloc(SIZE * sizeof(int));

	// Initialization
	for(int i=0;i<SIZE;i++)
	{
		a[i] = i;
		b[i] = i;
		c[i] = 0;
	}

	// Starting clock count
	processingTime = clock();

	// Calling Vector Addition Function
	VectorAdd(a, b, c, SIZE);

	// Printing out clock count after processing
	cout << "Time utilized in processing : " << double(clock()-processingTime)/CLOCKS_PER_SEC << endl;

	// Printing out first 10 elements of output vector
	for(int i=0;i<10; ++i)
		printf("c[%d] = %d\n", i, c[i]);

	// Freeing memory
	free(a);
	free(b);
	free(c);

	return 0;
}
