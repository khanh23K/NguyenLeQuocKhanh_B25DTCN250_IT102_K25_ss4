#include <stdio.h>
int main(){
	int n,m;
	long tiendien;
	
	printf("Moi ban nhap chi so cu : ");
	scanf("%d", &n);
	printf("Moi ban nhap chi so moi : ");
	scanf("%d", &m);
	int sodien = m - n;
	
	if(sodien<0){
		printf("Loi : chi so moi phai lon hon chi so cu");
	}
	if(sodien<50){
		tiendien = sodien * 10000;
	}else if(sodien<100){
		tiendien = 50 * 10000 + (sodien - 50) * 15000;
	}else if(sodien<150){
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 100) * 20000;
	}else if(sodien<200){
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 150) * 25000;
	}else
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 200) * 30000;
	printf("So dien tieu thu: %dkWh\n", sodien);
	printf("Tien dien phai tra: %ldVND", tiendien);
	
	return 0;
}
