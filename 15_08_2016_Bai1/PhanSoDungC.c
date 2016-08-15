#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

struct phanso
{
	int tu;
	int mau;
};

typedef struct phanso PHANSO;

int main()
{
	PHANSO *a;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	a = (PHANSO*)malloc(n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan so thu %d\n", i);
		printf("Nhap tu:");
		scanf("%d", &(a+i)->tu);
		printf("Nhap mau:");
		scanf("%d", &(a+i)->mau);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d/%d\n", (a+i)->tu,(a+i)->mau);
	}
	free(a);
	return 0;
}