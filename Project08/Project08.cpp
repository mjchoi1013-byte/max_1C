
#include <iostream>
#define COUNT 5 // 매크로 상수

int main()
{
	/*
	 
	 *****
	 *****
	 *****
	 *****
	 *****
	 
	 */
	const int NUMBER = 5; // 상수: 값을 변경할 수 없음!!!


	// printf("*****"); (x)
	// printf("*"); (o)

	int i = 0;
	while (i < COUNT)
	{
		int j = 0;
		while(j < COUNT)
		{
			printf("*");
			j++;
		}
		printf("\n"); // 줄 바꿈
		i++;
	}
}
