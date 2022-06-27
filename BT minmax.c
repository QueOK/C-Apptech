#include <stdio.h>
int i;
void nhap(int ary[],int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("\n Enter value ary[%d] ", i);
		scanf("%d", &ary[i]);
	}
}
int  maxindex(int ary[], int n)
{
	int maxindex;
	int max = ary[0];
	for (i=1; i<n; i++)
		{
			if (max < ary[i])
				{
				max = ary[i];
				maxindex=i+1;	
				}
		}
	return maxindex;
}
int  minindex(int ary[], int n)
{
	int minindex;
	int min = ary[0];
	for (i=1; i<n; i++)
		{
			if (min > ary[i])
				{
				min = ary[i];
				minindex=i+1;	
				}
		}
	return minindex;
}
int  sum(int ary[], int n)
{
	int sum = ary[0];
	float avg;

	for (i=1; i<n; i++)
	{
			sum = sum + ary[i];	
		}
	return sum;
}	
float  avg(int ary[], int n)
{
	float avg=0;
	float sum=0;
	for (i=0; i<n; i++)
		{
			sum = (sum + ary[i]);	
			avg=sum/(i+1);
		}
	return avg;
}
// Chuong trinh chinh
int main()
{
	int ary[1000];
	int n;
	char thuchien;
	do
	{
		printf(" Nhap so phan tu mang n= ");
		scanf("%d",&n);	
		nhap(ary,n);
		printf("\n Vi tri max: %d", maxindex(ary,n));
		printf("\n Vi tri min: %d", minindex(ary,n));	
		printf("\n Gia tri sum: %d", sum(ary,n));
		printf("\n Gia tri avg: %.2f", avg(ary,n));
		printf("\n Ban muon tiep tuc hay dung (Y/N):  ");
		fflush(stdin); 
		scanf("%c", &thuchien);
	}
	while(thuchien=='y');

	return 0;
	
}

