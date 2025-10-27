#include <stdio.h>

int main(){
	int ngay, thang, nam;
	int hople = 1;
	
	printf("Moi ban nhap ngay: ");
	scanf("%d",&ngay);
	printf("Moi ban nhap thang: ");
	scanf("%d",&thang);
	printf("Moi ban nhap nam: ");
	scanf("%d",&nam);
	
	if(thang<1 || thang>12){
		hople = 0;
	}else{
		int songaytrongthang;
		
		switch(thang){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				printf("co 30 ngay\n");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("co 31 ngay\n");
				break;
			case 2:
				if((nam%4==0 && nam%100!=0) || (nam%400==0))
				songaytrongthang = 29;
			else
				songaytrongthang = 28;
				break;
			default:
				printf("Sai dinh dang roi");
		}
		if(ngay<1 || ngay>songaytrongthang)
		hople = 0;
	}
	if(hople){
		printf("Ngay thang nam hop le");
	}else 
	printf("Ngay thang nam khong hop le");
	
	return 0;
}
