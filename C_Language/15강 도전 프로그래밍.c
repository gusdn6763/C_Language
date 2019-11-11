/*
int hole(int *arr)
{
	printf("\n홀수출력");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1 || arr[i] == 1)
		{
			printf(", %d", arr[i]);
		}
	}
	return 0;
}

int jax(int *arr)
{
	printf("\n짝수출력");
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf(", %d", arr[i]);
		}
	}
	return 0;
}


int main15()           //도전1
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("입력:");
		scanf("%d", &arr[i]);
		if (arr[i] <= 0)
		{
			printf("다시입력:");
			scanf("%d", &arr[i]);
		}
	}
	hole(arr);
	jax(arr);
	return 0;
}
*/

/*
int main15()        // 도전3
{
	int arr1[10], arr2[10], i = 0, j = 0;
	for (i=0; i < 10; i++)
	{
		printf("입력:");
		scanf("%d", &arr1[i]);
		if (arr1[i] <= 0)
		{
			printf("다시입력:");
			scanf("%d", &arr1[i]);
		}
		if (arr1[i] % 2 == 1 || arr1[i] == 1)
		{
			arr2[j] = arr1[i];
			j++;
		}
	}

	for (i=0;i<10;i++)
	{
		if (arr1[i] % 2 == 0)
		{
			arr2[j] = arr1[i];
			j++;
		}
		printf("%d, ", arr2[i]);
	}
	return 0;
}
*/
int DesSort(int* arr,int size)
{
	int i, j,temp;
	for (i=0;i<size-1;i++)
	{
		for (j=0;j<(size-1)-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 0;
}
int main15()
{
	int arr[7], i;
	for (i = 0; i < 7; i++)
	{
		printf("입력:");
		scanf("%d", &arr[i]);
	}
	DesSort(arr,sizeof(arr)/sizeof(int));
	for (i = 0; i < 7; i++)
	{
		printf(" %d", arr[i]);
	}
	return 0;
}

