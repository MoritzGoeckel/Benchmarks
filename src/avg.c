#include <stdio.h>
int main( int argc, const char* argv[] )
{
	int amount = 1000 * 1000;

	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for(int x = 0; x < 1000; x++) {
		float result[amount];
		float sum = 0.0;
		
		for(int i = 0; i < amount; i++){
			int index = i % 10;
			sum += (float)nums[index];

			if (index > 20)
				sum -= (float)nums[index - 20];

			result[i] = sum / 20.0;
		}

		/*for(int i = 0; i < 30; i++){
			printf("%f", result[i]);
			printf(" ");
		}
		printf("\n");*/
	}
}
