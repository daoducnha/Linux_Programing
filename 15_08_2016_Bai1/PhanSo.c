#include <stdio.h>
// #include <conio.h>

struct phanso
{
	int tu;
	int mau;
};

typedef struct phanso PHANSO;
void nhap(PHANSO &x){
	printf("Nhap tu:");
	scanf("%d", &x.tu);
	printf("Nhap mau:");
	scanf("%d", &x.mau);
}
void xuat(PHANSO x){
	printf("%d/%d", x.tu,x.mau);
}
int main()
{
	PHANSO *a;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	a = new PHANSO[n];
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]", i);
		nhap(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		xuat(a[i]);
	}
	delete []a;
	return 0;
}