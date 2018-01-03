#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
char sepatu[6][50]={
	"",
	"Vansm Old Skool",
	"Vans Authentic",
	"Vans Sk8 Hi",
	"Vans Slip-On",
	"Vans Era"
};
char harga[5][30]={
	"Rp.800.000",
	"Rp.600.000",
	"Rp.400.000",
	"Rp.350.000",
	"Rp.300.000"
};
int i,ulang,menu,ukuran,ukuranSepatu,jumlahBarang;
char pembayaran,menuUlang;
do{

	system("cls");
	printf("\n===========SNAKERS VANS SHOP===========\n");
	printf("\n             STOCK SEPATU                ");
	for( i=1;i<=5;i++ ){
		printf("\n-------------------");
		printf("\n %d.",i);
		printf(" %s",sepatu[i]);
		printf("\n-------------------");
		
	}
	printf("\nMASUKKAN PILIHAN SEPATU : ");
	scanf("%d",&menu);
	printf("MASUKKAN UKURAN SEPATU : ");
	scanf("%d",&ukuran);
		if(ukuran == 40 || ukuran == 41 || ukuran == 42 || ukuran == 43){
		  switch(menu){
			case 1:
				printf("\n----------------------------------");
				printf("\n  PILIHAN ANDA = %s",sepatu[1]);
				printf("\n  UKURAN       = %d",ukuran);
				printf("\n  HARGA        = %s",harga[0]);
				printf("\n----------------------------------");
				ukuranSepatu = ukuran; //memindahkan isi variable ukuran karena variable ukuran bocor atau nilainya otomatis null
				printf("\nLANJUTKAN PEMBAYARAN Y/N : ");
				scanf("%s",&pembayaran);
				
					if(pembayaran == 'Y' || pembayaran == 'y'){
						printf("\n|------------------------------------|");
						printf("\n|           BILL PEMBAYARAN          |");
						printf("\n|====================================|");
						printf("\n|                                    |");
						printf("\n| NAMA BARANG  = %s",sepatu[1]);printf("     |");
						printf("\n| UKURAN       = %d",ukuranSepatu);printf("                  |");
						printf("\n| TOTAL JUMLAH = %s",harga[0]);printf("          |");
						printf("\n|====================================|");
						printf("\n|           TERIMAH KASIH            |");
						printf("\n|------------------------------------|\n");
						
						printf("\nBELANJA LAGI Y/N? : ");
						scanf("%s",&menuUlang);
							if(menuUlang == 'N' || menuUlang == 'n'){
								printf("\n|==============================================================|");
								printf("\n|        TERIMAH KASIH TELANG MENGGUNAKAN APLIKASI KAMI        |");
								printf("\n|==============================================================|");
								return 0;
							}
					}
				break;
			case 2:
			printf("\n----------------------------------");
				printf("\n  PILIHAN ANDA = %s",sepatu[2]);
				printf("\n  UKURAN       = %d",ukuran);
				printf("\n  HARGA        = %s",harga[1]);
				printf("\n----------------------------------");
				ukuranSepatu = ukuran; //memindahkan isi variable ukuran karena variable ukuran bocor atau nilainya otomatis null
				printf("\nLANJUTKAN PEMBAYARAN Y/N : ");
				scanf("%s",&pembayaran);
				
					if(pembayaran == 'Y' || pembayaran == 'y'){
						printf("\n|------------------------------------|");
						printf("\n|           BILL PEMBAYARAN          |");
						printf("\n|====================================|");
						printf("\n|                                    |");
						printf("\n| NAMA BARANG  = %s",sepatu[2]);printf("      |");
						printf("\n| UKURAN       = %d",ukuranSepatu);printf("                  |");
						printf("\n| TOTAL JUMLAH = %s",harga[1]);printf("          |");
						printf("\n|====================================|");
						printf("\n|           TERIMAH KASIH            |");
						printf("\n|------------------------------------|\n");
						
						printf("\nBELANJA LAGI Y/N? : ");
						scanf("%s",&menuUlang);
							if(menuUlang == 'N' || menuUlang == 'n'){
								printf("\n|==============================================================|");
								printf("\n|        TERIMAH KASIH TELANG MENGGUNAKAN APLIKASI KAMI        |");
								printf("\n|==============================================================|");
								return 0;
							}
						
					}
				break;
			case 3:
				printf("\n----------------------------------");
				printf("\n  PILIHAN ANDA = %s",sepatu[3]);
				printf("\n  UKURAN       = %d",ukuran);
				printf("\n  HARGA        = %s",harga[2]);
				printf("\n----------------------------------");
				ukuranSepatu = ukuran; //memindahkan isi variable ukuran karena variable ukuran bocor atau nilainya otomatis null
				printf("\nLANJUTKAN PEMBAYARAN Y/N : ");
				scanf("%s",&pembayaran);
				
					if(pembayaran == 'Y' || pembayaran == 'y'){
						printf("\n|------------------------------------|");
						printf("\n|           BILL PEMBAYARAN          |");
						printf("\n|====================================|");
						printf("\n|                                    |");
						printf("\n| NAMA BARANG  = %s",sepatu[3]);printf("         |");
						printf("\n| UKURAN       = %d",ukuranSepatu);printf("                  |");
						printf("\n| TOTAL JUMLAH = %s",harga[2]);printf("          |");
						printf("\n|====================================|");
						printf("\n|           TERIMAH KASIH            |");
						printf("\n|------------------------------------|\n");
						
						printf("\nBELANJA LAGI Y/N? : ");
						scanf("%s",&menuUlang);
							if(menuUlang == 'N' || menuUlang == 'n'){
								printf("\n|==============================================================|");
								printf("\n|        TERIMAH KASIH TELANG MENGGUNAKAN APLIKASI KAMI        |");
								printf("\n|==============================================================|");
								return 0;
							}
						
					}
				break;
			case 4:
				printf("\n----------------------------------");
				printf("\n  PILIHAN ANDA = %s",sepatu[4]);
				printf("\n  UKURAN       = %d",ukuran);
				printf("\n  HARGA        = %s",harga[3]);
				printf("\n----------------------------------");
				ukuranSepatu = ukuran; //memindahkan isi variable ukuran karena variable ukuran bocor atau nilainya otomatis null
				printf("\nLANJUTKAN PEMBAYARAN Y/N : ");
				scanf("%s",&pembayaran);
				
					if(pembayaran == 'Y' || pembayaran == 'y'){
						printf("\n|------------------------------------|");
						printf("\n|           BILL PEMBAYARAN          |");
						printf("\n|====================================|");
						printf("\n|                                    |");
						printf("\n| NAMA BARANG  = %s",sepatu[4]);printf("        |");
						printf("\n| UKURAN       = %d",ukuranSepatu);printf("                  |");
						printf("\n| TOTAL JUMLAH = %s",harga[3]);printf("          |");
						printf("\n|====================================|");
						printf("\n|           TERIMAH KASIH            |");
						printf("\n|------------------------------------|\n");
						
						printf("\nBELANJA LAGI Y/N? : ");
						scanf("%s",&menuUlang);
							if(menuUlang == 'N' || menuUlang == 'n'){
								printf("\n|==============================================================|");
								printf("\n|        TERIMAH KASIH TELANG MENGGUNAKAN APLIKASI KAMI        |");
								printf("\n|==============================================================|");
								return 0;
							}
					}
				break;
			case 5:
				printf("\n----------------------------------");
				printf("\n  PILIHAN ANDA = %s",sepatu[5]);
				printf("\n  UKURAN       = %d",ukuran);
				printf("\n  HARGA        = %s",harga[4]);
				printf("\n----------------------------------");
				ukuranSepatu = ukuran; //memindahkan isi variable ukuran karena variable ukuran bocor atau nilainya otomatis null
				printf("\nLANJUTKAN PEMBAYARAN Y/N : ");
				scanf("%s",&pembayaran);
				
					if(pembayaran == 'Y' || pembayaran == 'y'){
						printf("\n|------------------------------------|");
						printf("\n|           BILL PEMBAYARAN          |");
						printf("\n|====================================|");
						printf("\n|                                    |");
						printf("\n| NAMA BARANG  = %s",sepatu[5]);printf("            |");
						printf("\n| UKURAN       = %d",ukuranSepatu);printf("                  |");
						printf("\n| TOTAL JUMLAH = %s",harga[4]);printf("          |");
						printf("\n|====================================|");
						printf("\n|           TERIMAH KASIH            |");
						printf("\n|------------------------------------|\n");
						
						printf("\nBELANJA LAGI Y/N? : ");
						scanf("%s",&menuUlang);
							if(menuUlang == 'N' || menuUlang == 'n'){
								printf("\n|==============================================================|");
								printf("\n|        TERIMAH KASIH TELANG MENGGUNAKAN APLIKASI KAMI        |");
								printf("\n|==============================================================|");
								return 0;
							}
						
					}
				break;
		  }
		}else{
			printf("\n MAAF KAMI TIDAK DAPAT MENEMUKAN UKURAN YANG ANDA MINTA");
				printf("\n KELUAR Y/N? : ");
				scanf("%s",&menuUlang);
				return 0;
		}
	
	}while(ulang < 5);

} 

