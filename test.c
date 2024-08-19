#include<stdio.h>
#include<math.h>
int main()
{
	//通过指针访问
	int arr[4] = {1,1,2,0};
	int* p = arr;//数组名arr是数组首元素的地址   arr=&arr[0]
	int i, q;
	int a = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0, q = 3; i < sz; i++, q--)  
	{               
		a = a + *p * pow(10,q);
		p++;
		
	}
	printf("%d ", a);
	return  0;
}