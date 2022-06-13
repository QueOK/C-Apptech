#include<stdio.h>


main()

{
	char ch;
	printf ("\nNhap KT tu a-z: ");
	scanf("%c", &ch);
	if (ch<'a' || ch>'z')
		printf ("\nKy tu k dc viet hoa");
		else
			switch (ch)
			{
			
				case 'a':
					printf ("\nKT laf 1 vowel: a");
					break;
				case 'b':
					printf ("\nKT laf 1 vowel: b");
					break;
				case 'c':
					printf ("\nKT laf 1 vowel: c");
					break;
				case 'z':
					printf ("\nKT laf 1 vowel: z");
					break;					
				default :
					printf ("\nKT laf 1 so");
					break;
		}
}
