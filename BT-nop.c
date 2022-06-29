//BAI TAP 1
#include <stdio.h>
int n,m;
void nhap()
{
	
	printf(" Nhap so n= ");
	scanf("%d",&n);	
	printf(" Nhap so m= ");
	scanf("%d",&m);	
				
}

int tong(int n, int m)
{
	int sum;
	sum = m+n;	
	return sum;
}	
int  nhan(int n, int m)
{
	int kq;
	kq = n * m;	
	return kq;
}	
float  chia(float n, float m)
{
	float kq = n/m;	
	return kq;
}
int  tru(int n, int m)
{
	int kq;
	kq = n-m;	
	return kq;
}
int main()
{
	char thuchien;
	int giaodich;
	do{	
			printf("\n\tCac ham:\n");	
			printf("\t\t1. Nhap. \n");
			printf("\t\t2. Tinh tong. \n");
			printf("\t\t3. Tinh nhan. \n");
			printf("\t\t4. Tinh chia. \n");
			printf("\t\t5. Tru. \n");
			printf("\t\t6. Thoat. \n");
			printf("\n Moi ban chon giao dich (chon tu 1 den 6)):  "); 
			fflush(stdin);
			scanf("%d",&giaodich);	
			switch(giaodich)
						{
							case 1:
								nhap(n,m);
								break;
							case 2:
								printf("\n Gia tri sum: %d",tong(n,m));
								break;
							case 3:
								printf("\n Gia tri: %d", nhan(n,m));
								break;
							case 4:
									printf("\n Gia tri: %.2f", chia(n,m));
									break;
							case 5:
									printf("\n Gia tri: %d", tru(n,m));
								break;
							case 6:
									printf("\n Thoat");
									break;
						}
				
		printf("\n Ban muon tiep tuc: ");
		fflush(stdin); 
		scanf("%c", &thuchien);
	}
	while(thuchien=='y');
	
}
//BAI TAP 2
#include <stdio.h>
int i;
void NhapMang(int a[], int n){
    for(i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(i = n-1; i >= 0; i--){
        printf("%5d", a[i]);
    }
}
int main(){
    int a[100];
    int n=10;
    printf("\nNhap so luong phan tu n = ");
    do{
    //    scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    
    NhapMang(a, n);
    
    printf("\nKet qua la: ");
    XuatMang(a, n);
        
    
}

