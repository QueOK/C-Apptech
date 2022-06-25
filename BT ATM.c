#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int sotientk;
int sodutk() 	//So du trong giao dich
{ 
	int sodutk;
	sodutk=10000000; //Muoi trieu
	return sodutk;
}
int login(int cardid, int pwd) //kiem tra tk
{
	bool check;
	if(cardid == 123456 && pwd == 123456)
	check=true;
	return check;	
}
int gdruttien() //Giao dich rut tien
{ 
	int sotientk;
	int sotien_rut;
	char ch;
	sotientk=sodutk();
	do
	{
	printf(" Moi ban nhap so tien can rut:  ");
	scanf("%d",&sotien_rut);
	
	if(sotien_rut >= sotientk-50000||sotien_rut>=3000000||sotien_rut % 50000==1)
		{ 
			printf("\n So tien rut lon hon so tien hien co/cho phep/chua dung. Xin moi nhap lai.\n");
		}
	else
		{
			printf(" Ban da rut thanh cong so tien %d VND\n", sotien_rut);
			sotientk = sotientk-sotien_rut;
			printf("\n So du hien tai trong tai khoan cua ban la: %d VND", sotientk);
		}
	printf("\n Ban co muon tiep tuc thuc hien giao dich rut tien khong (Y/N):");
  	fflush(stdin);
  	scanf("%c",&ch);
 }
	 while (ch=='Y'||ch=='y') ; 
	
		return 0;
}
int gdckhoan()
{       
		int stkchuyen,ch;
		int stchuyen;
		sotientk=sodutk();
	do
	{
		printf(" Moi ban nhap stk ngan hang can chuyen: ");
		scanf("%d",&stkchuyen);
		printf("\n Ban nhap so tien can chuyen: ");
		scanf("%d",&stchuyen);
		if(stchuyen >= sotientk-50000||stchuyen>=3000000)
			{ 
			printf("\n So tien rut lon hon so tien hien co/cho phep. Xin moi nhap lai.\n");
			}
		else 
			{
			printf(" Ban chuyen thanh cong so tien %d VND cho so tai khoan %d",stchuyen,stkchuyen);
			sotientk=sotientk-stchuyen;
			printf("\n So du hien tai trong tai khoan cua ban la: %d VND", sotientk);
			}
	printf("\n Ban co muon tiep tuc thuc hien giao dich chuyen tien khong (Y/N):");
  	fflush(stdin);
  	scanf("%c",&ch);
	}
	while (ch=='Y'||ch=='y') ;
}
int ktsodu()
{
	float sodu;
	sodu=sodutk();
	printf(" So du hien tai trong tai khoan cua ban la: %2.f VND \n",sodu);
}
main()
{
	int cardid, pwd, giaodich, sdcuoi;
	char thuchien;
	printf("\n Xin chao ban. Cam on ban da su dung dich vu.");
	do
	{
	printf("\n Moi ban nhap so the cua ban(cardid):  ");	
	scanf("%d", &cardid);
	printf(" Mat khau dang nhap cua ban(pwd):  ");
	scanf("%d", &pwd);
	if( login(cardid,pwd)==1)
	{
		printf("\n Ban da dang nhap thanh cong\n");
		do{	
			printf("\n\tCac dich vu:\n");	
			printf("\t\t1. Rut tien. \n");
			printf("\t\t2. Chuyen khoan den so the. \n");
			printf("\t\t3. Kiem tra tai khoan. \n");
			printf("\t\t4. Ket thuc. \n");
			printf("\n Moi ban chon giao dich:  "); //
			fflush(stdin);
			scanf("%d",&giaodich);
			if (giaodich<1||giaodich>4)
				{
				printf("\n Ban lua chon chua dung, xin moi ban chon lai.");
				}
			else
				{
					switch(giaodich)
						{
							case 1:
								gdruttien();
								break;
							case 2:
								gdckhoan();
									break;
							case 3:
							
								ktsodu();
								
								break;
							case 4:
								break;
						}
				}
				sdcuoi=sotientk;
		printf("\n Ban muon dung su dung dich vu (Y/N):  ");
		fflush(stdin); 
		scanf("%c", &thuchien);
	}
	while(thuchien=='n');
	}
	else 
	{
		printf("\n Ban da nhap sai mat khau, moi ban dang nhap lai.");
	}
}
while(login(cardid,pwd)==0);
	printf("\n Cam on quy khach da su dung dich vu.\n,");
	printf("Xin chao va rat vui long phuc vu quy khach lan sau.");
	return 0;
}




//
//
////#include<stdio.h>
////
////
////main()
////
////{
////	char ch;
////	printf ("\nNhap KT tu a-z: ");
////	scanf("%c", &ch);
////	if (ch<'a' || ch>'z')
////		printf ("\nKy tu k dc viet hoa");
////		else
////			switch (ch)
////			{
////			
////				case 'a':
////					printf ("\nKT laf 1 vowel: a");
////					break;
////				case 'b':
////					printf ("\nKT laf 1 vowel: b");
////					break;
////				case 'c':
////					printf ("\nKT laf 1 vowel: c");
////					break;
////				case 'z':
////					printf ("\nKT laf 1 vowel: z");
////					break;					
////				default :
////					printf ("\nKT laf 1 so");
////					break;
////		}
////					
////    float mon1;
////    mon1=0;
////    printf("\nNhap diem mon 1: ");
////    scanf("%d",&mon1);
////    if (mon1 < 5)
////	       	printf("Khong du dieu kien \n");
////	   else if (mon1 <= 8 )
////				printf("HS TB \n");
////			else 
////				printf("HS xuat sac \n");
////				
////	
////return 0;
////}
////
//
//
////#include<stdio.h>
////
////
////main()
////{
//// //   int ch;
////	int mon1, mon2;
////    float avgGPA;
////    printf("\nNhap diem mon 1: ");
////    scanf("%d",&mon1);
////    printf("Nhap he so mon 2: ");
////    scanf("%d",&mon2);
////   	avgGPA=((float)mon1+(float)mon2)/2;
////  	printf("Diem CL cong tac %2f", avgGPA);
//////	putchar()
////   return 0;
////}
////
//
//
////#include<stdio.h>
////
////
////main()
////{
////    char ch;
////    int i;
////	float f;
////	double d,kq;
////	
////    printf("\n Nhap ch=: ");
////    scanf("%c",&ch);
////    fflush(stdin);   // Moi lan nhap char them lenh nay de xoa bo nho
////    printf("\n Nhap i=: ");
////    scanf("%d",&i);
////    printf("\n Nhap f=: ");
////    scanf("%f",&f);
////    printf("\n Nhap d=: ");
////    scanf("%lf",&d);
////   	kq = (ch/i)+(f*d)-(f+i);
////  	printf("\n kq=: %lf", kq);
////   return 0;
////}
////
////
//
//
//
////#include<stdio.h>
////
////
////main()
////{
////    float mon1, mon2, mon3, heso;
////    float tb;
////    printf("\nNhap diem mon 1: ");
////    scanf("%d",&mon1);
////    printf("Nhap he so mon 2: ");
////    scanf("%f",&mon2);
////    printf("\nNhap diem mon 3: ");
////    scanf("%f",&mon3);
////    printf("\nNhap he so mon 1: ");
////    scanf("%f",&heso);
////    if (mon1<5 || mon2<5|| mon3<5){
////    	printf("Khong du dieu kien");
////    	
////	}
////	else {
////		tb = (mon1*heso + mon2 + mon3)/(2+heso);
////		printf("Diem trung binh %f\n",tb);
////		printf("Du dieu kien xet \n");
////		
////		if (mon1 >=9 && mon2 >=9 && mon3 >=9){
////			printf("Xuat sac vao lop chon \n");
////		}
////			else {
////				printf("Vao lop thuong");
////			}
////		}
////   return 0;
////}
//
////13062022
//// Vong lap
////#include <stdio.h>
////#include <conio.h>
////#define MSG "Vi du su dung vong lap for.\n"
////main(void)
////{
////int count;
////printf("123....A------Z.....321");
////for(count = 6; count>=1; count-=2){ //dem lui count=count-2
////printf("\n\t\t Like Co giao");
////
////}
////printf("\n\t\t World Co giao", MSG);
////
////}
////
////
//
//
////#include <stdio.h>
////#include <conio.h>
////#define MSG "Vi du su dung vong lap for.\n"
////void main(void)
////{
////	int count,min,max	;
////	char ch;
////	
//////	printf("%\n Nhap so Max:");
//////	scanf("%d",&max);
//////	printf("%\n Nhap so Min:");
//////	scanf("%d",&min);
////	scanf("%c",&ch);
//////	for(count=min; count<=max; count+=1){
//////		if (count%7==0) {
//////			printf("\n%d chia het cho 7", count);
//////		}
////	//	else
////	//		printf("\n\t\t World Co giao", MSG);
//////	}
////	printf("\n%c chia het cho 7", ch);
////}

// Bai tap ATM
//Bai da chay
//#include <stdio.h>
//void main(void)
//{
//	int cardid, pin, menu;
//	char ch;
////	pin = 456;
////	cardID = 123;
//	printf("\nNhap cardid = ");
//	scanf("%d", &cardid);
//	printf("\nNhap ma PIN = ");
//	scanf("%d", &pin);
//	if (cardid != 123 && pin!=456  ) {
//		printf("\nInvalid");
//		}
//		else
//		{
//		
//			do 
//			{
//				printf("\n Menu ");
//				printf("\n 1. rut tien");
//				printf("\n 2. chuyen khoan");
//				printf("\n 3. Xem so du");
//				printf("\n 4. thoat \n");
//				printf("\n Moi ban chon Menu: ");
//				scanf("%d", &menu);
//				switch (menu)
//				{
//				case 1:
//				{
//					printf("\nRut tien");
//					break;
//					}	
//					
//				case 2:
//					{
//						printf ("\nCHuyen khoan");
//							break;
//					}
//				case 3:
//				{
//						printf ("\n Xem so du");
//						break;
//					}
//				case 4:
//				{
//					printf ("\n ket thuc");
//					break;
//					}	
//			
//				default :
//					printf ("\n Nhap khong dung Menu");
//				}
//		
//			printf("\nBan co tiep tuc su dung dich vu tiep khong: ");
//			fflush(stdin);
//			scanf("%c", &ch);
//			}
//			while (ch =='y'|| ch == 'Y');
//				printf("\nCam on ban da su dung dich vu: ");
//		
//		}
// 
//}

// Tinh giai thua
//#include <stdio.h>
//void main(void)
//{
//	int i,n,kq;
//	
//	printf("\nNhap can tinh giai thua = ");
//	scanf("%d", &n);
//	
//	if (n == 0 ) {
//		printf("\nKet qua tinh = 1");		
//	}
//		else
//			{
//				kq=1;
//				for (i=0;i<n;i++) {
//					kq = kq*(n-i);
//				}
//				printf("\n Ket qua= %d", kq);	
//			}
//		
//}

// BT 11.2



//#include <stdio.h>
//void main (void)
//	{
//	int ary[10]	;
//	int i, total, high, low;
//	float avg;	
//	for (i=0; i<10; i++){
//		printf("\n Enter value : %d\t", i+1);
//		scanf("%d", &ary[i]);
//	}
//		high=ary[0];
//		low=ary[0];
//		for (i=1;i<10;i++){
//			if (low > ary[i])
//				low=ary[i];
//			if (ary[i]>high)
//				high=ary[i];
//				total=total+ary[i];			
//			}
//		avg=total;	
//	printf("\n Highest value: %d\t", high);
//	printf("\n Lowest value: %d\t", low);	
//	printf("\n Total= %d\t", total);
////float total;
//	printf("\n AVg= %.3f\t", avg/i);
//	
//	}


//#include <stdio.h>
//void main (void)
//	{
//	int ary[10]	;
//	int i, total, high, low;
//	float avg;	
//	for (i=0; i<10; i++){
//		printf("\n Enter value : %d\t", i+1);
//		scanf("%d", &ary[i]);
//		high=ary[0];
//		low=ary[0];
//	//	for (i=1;i<10;i++){
//			if (low > ary[i])
//				low=ary[i];
//			if (ary[i]>high)
//				high=ary[i];
//				total=total+ary[i];			
//			}
//		avg=total;	
//	printf("\n Highest value: %d\t", high);
//	printf("\n Lowest value: %d\t", low);	
//	printf("\n Total= %d\t", total);
////float total;
//	printf("\n AVg= %.3f\t", avg/i);
//	
//	}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void main (void)

//
//	int main(int argc, char*argv[])
//	{
//	int i, n=0; 
//	int item;	
//	char lines[10][20];
//	char temp[12];
//	printf("\n Enter each....");
//	printf("\n Type END when over\n");
//	do
//	{
//		printf("String %d : ",n+1);
//		scanf("%s",lines[n]);
//		
//	}while (strcmp(lines[n+1],"END"));
//		n=n-1;
//		for (item=0;item<n-1;++item)
//		{
//			for (i=item+1;i<n;++i)
//			{
//			if (strcmp(lines[item], lines[i]) > 0)
//			{
//				strcpy(temp,lines[item]);
//				strcpy(lines[item],lines[i]);
//				strcpy(lines[i],temp);
//			}
//			}
//		}
//	
//	printf("Recorded list of string: \n");
//	for(i=0;i<n;++i)
//	{
//		printf("\nString %d is %s",i+1,lines[i]);
//	}	
////	return 0;
//	}



//BT11.3

//#include <stdio.h>
//void main (void)
//	{
//	char alpha[26]	;
//	int i,j;	
//	for (i=65, j=0;i<91;i++,j++){
//		alpha[j]=i;
//		printf("the char ... is %c\n",alpha[j]);
//	}
//	getchar();
//	}

// #include <stdio.h>

//Khai báo hàm
//int find_sum(int a,int b)
//{
//    int sum = a + b;
//    return sum;
//} 
//
//int main(void)
//{
//    int sum = find_sum(1,2);
//    printf("%d",sum);
//    return 0;
//}
//


//int kq;
//	int find_sum(int a,int b)
//{
//    
//	int sum = a + b;
//    return sum;
//} 
//int main(void)
//{
//	scanf(%d\n,a);
//    scanf(%d\n,b);
// //   int sum = find_sum(1,2);
//    kq=find_sum(1,2) + find_sum(3,4);
//    printf("%d",kq);
//    return 0;
//}
//


 
//#include <stdio.h>
//#include <stdlib.h>
// 
//void NhapMang(int *arr, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("arr[%d] = ", i);
//        // Do giá tr? con tr? là d?a ch? r?i. Nên b?n s? không th?y d?u & quen thu?c n?a
//        scanf("%d", (arr + i));
//    }
//}
// 
//void XuatMang(int *arr, int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        printf("arr[%d] = %d\n", i, *(arr + i));
//    }
//}
// 
//void ThemPhanTu(int *a, int &n, int val, int pos)
//{
//    // Phân b? l?i b? nh? dã c?p phát cho con tr?.
//    // Ta c?n thêm 1 ô nh? cho nó => dùng realloc()
//    a = (int *)realloc(a, (n + 1) * sizeof(int));
//    // Neu pos <= 0 => Them vao dau
//    if (pos < 0)
//    {
//        pos = 0;
//    }
//    // Neu pos >= n => Them vao cuoi
//    else if (pos > n)
//    {
//        pos = n;
//    }
//    // Dich chuyen mang de tao o trong truoc khi them.
//    for (int i = n; i > pos; i--)
//    {
//        *(a + i) = *(a + i - 1);
//    }
//    // Chen val tai pos
//    *(a + pos) = val;
//    // Tang so luong phan tu sau khi chen.
//    ++n;
//}
// 
//void XoaPhanTu(int *a, int &n, int pos)
//{
//    // Mang rong, khong the xoa.
//    if (n <= 0)
//    {
//        return;
//    }
//    // Neu pos <= 0 => Xoa dau
//    if (pos < 0)
//    {
//        pos = 0;
//    }
//    // Neu pos >= n => Xoa cuoi
//    else if (pos >= n)
//    {
//        pos = n - 1;
//    }
//    // Dich chuyen mang
//    for (int i = pos; i < n - 1; i++)
//    {
//        a[i] = a[i + 1];
//    }
//    // C?p phát l?i vùng nh?, gi? ta ch? c?n n - 1 ô nh?
//    a = (int *)realloc(a, (n - 1) * sizeof(int));
// 
//    // Giam so luong phan tu sau khi xoa.
//    --n;
//}
// 
//int main()
//{
//    int *arr;
//    int n;
//    do
//    {
//        printf("Nhap so luong n = ");
//        scanf("%d", &n);
//    } while (n < 1);
// 
//    // c?p phát d? sài
//    arr = (int *)malloc(n * sizeof(int));
//    // arr = (int*) calloc(n, sizeof(int));
// 
//    if (arr == NULL)
//    {
//        printf("Khong the cap phat!");
//        exit(0);
//    }
// 
//    NhapMang(arr, n);
//    printf("\nMang vua nhap la:\n");
//    XuatMang(arr, n);
// 
//    printf("\n=======THEM PHAN TU======\n");
//    int val, pos;
//    printf("\nNhap so can them: ");
//    scanf("%d", &val);
//    printf("\nNhap vi tri muon chen: ");
//    scanf("%d", &pos);
//    ThemPhanTu(arr, n, val, pos);
//    printf("\nMang sau khi them:\n");
//    XuatMang(arr, n);
// 
//    printf("\n=======XOA PHAN TU======\n");
//    printf("\nNhap vi tri muon xoa: ");
//    scanf("%d", &pos);
//    XoaPhanTu(arr, n, pos);
//    printf("\nMang sau khi xoa:\n");
//    XuatMang(arr, n);
//    // gi?i phóng
//    free(arr);
//}
//


//BAI TAP ATM

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//float sotientk;
////sodutk=100000;
//float sodutk() 	//So du trong giao dich
//{ 
//	float sodutk;
//	sodutk=3000000; //Muoi trieu
//	return sodutk;
//}
//int login(int cardid, int pwd)
//{
//	bool value;
//	if(cardid == 123 && pwd == 456)
//	value=true;
//	return value;	
//}
//int gdruttien()
//{ int sotien_rut,sotientk;
//	printf(" Moi ban nhap so tien can rut:  ");
//	scanf("%d",&sotien_rut);
//	sotientk=sodutk();
//	if(sotien_rut >= sotientk-50000||sotien_rut>=3000000||sotien_rut % 50000==1)
//		{ 
////			printf("So tien rut lon hon so tien hien co.\n");
//			printf(" So tien rut lon hon so tien hien co/cho phep/chua dung. Xin moi nhap lai.\n");
//		}
//	else
//		{
////		if (sotien_rut>=3000000||sotien_rut%50000==0)
////		if (sotien_rut>=3000000||sotien_rut % 50000==1)
////			printf("So tien rut lon hon so tien cho phep/So tien rut chua dung. Xin moi nhap lai.\n");
////			else
////			{
//		
//			printf(" Ban da rut thanh cong so tien %d VND\n", sotien_rut);
//			sotientk = sotientk-sotien_rut;
//			printf(" So du hien tai cua ban la: %d VND", sotientk);
////		}
//		}
//		return 0;
//}
//int gdckhoan()
//{       
//		int stk;
//		int stchuyen;
//		printf(" Moi ban nhap stk ngan hang can chuyen: ");
//		scanf("%d",&stk);
//		printf("\n So tien can chuyen: ");
//		scanf("%d",&stchuyen);
//		sotientk=sodutk();
//		if(stchuyen>=sotientk+1)
//			{ 
//			printf("So tien chuyen lon hon so tien hien co\n \t Vui long thuc hien lai\n");
//			}
//		else 
//			{
//			printf("\n Ban chuyen thanh cong so tien %d VND cho stk %d",stchuyen,stk);
//			sotientk=sotientk-stchuyen;
//			printf("\n So du tai khoan  %2f ", sotientk);
//			}
//	
//}
//int ktsodu()
//{
//	float sodu;
//	sodu=sodutk();
//	printf(" So du trong tai khoan cua ban la: %f VND \n",sodu);
//}
//
//// int main(int argc, char *argv[]) 
//main()
//{
//	int cardid, pwd, giaodich, sdcuoi;
//	char thuchien;
//	printf("\n Xin chao ban. Cam on ban da su dung dich vu.");
//	do
//	{
//	printf("\n Moi ban nhap so the cua ban(cardid):  ");	
//	scanf("%d", &cardid);
//	printf(" Mat khau dang nhap cua ban(pwd):  ");
//	scanf("%d", &pwd);
//	if( login(cardid,pwd)==1)
//	{
//		printf("\n Ban da dang nhap thanh cong\n");
//		do{	
//			printf("\n\tCac dich vu:\n");	
//			printf("\t\t1. Rut tien. \n");
//			printf("\t\t2. Chuyen khoan den so the. \n");
//			printf("\t\t3. Kiem tra tai khoan. \n");
//			printf("\t\t4. Ket thuc. \n");
//			printf("\n Moi ban chon giao dich:  "); //
//			fflush(stdin);
//			scanf("%d",&giaodich);
//			if (giaodich<1||giaodich>4)
//				{
//				printf("\n Ban lua chon chua dung, xin moi ban chon lai.");
//				}
//			
//				else
//				{
//					switch(giaodich)
//					{
//						
//						case 1:
//							gdruttien();
//								break;
//						case 2:
//							gdckhoan();
//								break;
//						case 3:
//						
//							ktsodu();
//							
//							break;
//						case 4:
//							break;
//					}
//				}
//				sdcuoi=sotientk;
//		printf("\n Ban muon tiep tuc su dung dich vu (Y/N):  ");//
//		fflush(stdin); 
//		scanf("%c", &thuchien);
//	}
//	while(thuchien=='y');
//	}
//	else 
//	{
//		printf("\n Ban da nhap sai mat khau, moi ban dang nhap lai.");
//	}
//}
//while(login(cardid,pwd)==0);
//	printf("\n Cam on quy khach da su dung dich vu.\n,");
//	printf("Xin chao va rat vui long phuc vu quy khach lan sau.");
//	return 0;
//}


