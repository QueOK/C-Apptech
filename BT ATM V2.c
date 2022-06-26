#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int sotientk=10000000;
int Sodu;

int login(int cardid, int pwd) //kiem tra tk
{
	bool check;
	if(cardid == 123456 && pwd == 123456)
	check=true;
	return check;	
}
int gdruttien() //Giao dich rut tien
{ 
	int sotien_rut;
	char ch;
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
int gdckhoan()	// GD chuyen khoan
{       
		int stkchuyen,ch;
		int stchuyen;
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
	printf(" So du hien tai trong tai khoan cua ban la: %d VND \n",sotientk);

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
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//int sotientk;
//int sodutk() 	//So du trong giao dich
//{ 
//	int sodutk;
//	sodutk=10000000; //Muoi trieu
//	return sodutk;
//}
//int login(int cardid, int pwd) //kiem tra tk
//{
//	bool check;
//	if(cardid == 123456 && pwd == 123456)
//	check=true;
//	return check;	
//}
//int gdruttien() //Giao dich rut tien
//{ 
//	int sotientk;
//	int sotien_rut;
//	char ch;
//	sotientk=sodutk();
//	do
//	{
//	printf(" Moi ban nhap so tien can rut:  ");
//	scanf("%d",&sotien_rut);
//	
//	if(sotien_rut >= sotientk-50000||sotien_rut>=3000000||sotien_rut % 50000==1)
//		{ 
//			printf("\n So tien rut lon hon so tien hien co/cho phep/chua dung. Xin moi nhap lai.\n");
//		}
//	else
//		{
//			printf(" Ban da rut thanh cong so tien %d VND\n", sotien_rut);
//			sotientk = sotientk-sotien_rut;
//			printf("\n So du hien tai trong tai khoan cua ban la: %d VND", sotientk);
//		}
//	printf("\n Ban co muon tiep tuc thuc hien giao dich rut tien khong (Y/N):");
//  	fflush(stdin);
//  	scanf("%c",&ch);
// }
//	 while (ch=='Y'||ch=='y') ; 
//	
//		return 0;
//}
//int gdckhoan()
//{       
//		int stkchuyen,ch;
//		int stchuyen;
//		sotientk=sodutk();
//	do
//	{
//		printf(" Moi ban nhap stk ngan hang can chuyen: ");
//		scanf("%d",&stkchuyen);
//		printf("\n Ban nhap so tien can chuyen: ");
//		scanf("%d",&stchuyen);
//		if(stchuyen >= sotientk-50000||stchuyen>=3000000)
//			{ 
//			printf("\n So tien rut lon hon so tien hien co/cho phep. Xin moi nhap lai.\n");
//			}
//		else 
//			{
//			printf(" Ban chuyen thanh cong so tien %d VND cho so tai khoan %d",stchuyen,stkchuyen);
//			sotientk=sotientk-stchuyen;
//			printf("\n So du hien tai trong tai khoan cua ban la: %d VND", sotientk);
//			}
//	printf("\n Ban co muon tiep tuc thuc hien giao dich chuyen tien khong (Y/N):");
//  	fflush(stdin);
//  	scanf("%c",&ch);
//	}
//	while (ch=='Y'||ch=='y') ;
//}
//int ktsodu()
//{
//	float sodu;
//	sodu=sodutk();
//	printf(" So du hien tai trong tai khoan cua ban la: %2.f VND \n",sodu);
//}
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
//			else
//				{
//					switch(giaodich)
//						{
//							case 1:
//								gdruttien();
//								break;
//							case 2:
//								gdckhoan();
//									break;
//							case 3:
//							
//								ktsodu();
//								
//								break;
//							case 4:
//								break;
//						}
//				}
//				sdcuoi=sotientk;
//		printf("\n Ban muon dung su dung dich vu (Y/N):  ");
//		fflush(stdin); 
//		scanf("%c", &thuchien);
//	}
//	while(thuchien=='n');
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
//

