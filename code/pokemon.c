#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	printf("Nhap vao so N: ");
	scanf("%d", &N);
	printf("Nhap vao tung phan tu cua so do Pokemon\n");
	printf("Biet rang so 0 dai dien cho o trong: ");
	
	int i, j;
	int **arr = NULL;
	int temp;
	
	arr=malloc(sizeof *arr*N);
	for (i = 0; i<N; i++)
	{
		arr[i]=malloc(sizeof(*arr[i]*N));
	}

	for (i = 0; i<N; i++)
	{
		for (j = 0; j<N; j++)
		{
			printf("\nO trong toa do (%d, %d) se chua: ", i, j);
			scanf("%d", &temp);
			arr[i][j]=temp;
		}
	}

	int type[10]={0};
	for(i = 0; i<N; i++)
	{
		for (j=0; j<N; j++)
		{
			type[arr[i][j]]++;
		}
	}

	for(i=1; i< 10; i++)
	{
		if(type[i]%2 !=0)
		{
			printf("So pokemon loai %d la le\n", i);
			return 0;
		}
	}
	
	printf("Cau hinh nay giai duoc khi cac pokemon cung loai la so chan\n");
	return 0;
}
