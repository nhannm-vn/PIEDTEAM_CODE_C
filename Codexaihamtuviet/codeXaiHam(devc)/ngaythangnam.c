#include <stdio.h>
#include <stdlib.h>

//Nhap vao ngay,thang,nam va xuat ra so ngay cua no:
int songayinthang(int ngay, int thang, int nam) {
	switch(thang) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return (((nam%4==0)&&(nam%100!=0))||nam%400==0)?29:28;
		default:
			return 0;
	}
}
//Tinh xem ngay thu bao nhiu trong nam:
//ngay cac thang dau+ngay trong thang hien tai
int songay(int ngay, int thang, int nam) {
	int i;
	int tong=0;
	for(i=1; i<thang; i++) {
		tong=tong+songayinthang(ngay, i, nam);
	}
	return tong;

}
//Ngay truoc do:
int ngaytruoc( int ngay, int thang, int nam) {
	if(ngay==1) {
		if(thang==1) {
			ngay=31;
			thang=12;
			nam=nam-1;
			return ngay, thang, nam;
		}
		if(thang==3) {
			if(((nam%4==0)&&(nam%100!=0))||nam%400==0) {
				thang--;
				ngay=29;
            return ngay, thang, nam;
			} else {
				thang--;
				ngay=28;
            return ngay, thang, nam;
			}
		}
		if((thang!=1) && (thang!=3)) {
			ngay=songayinthang(ngay, thang, nam);
			thang=thang-1;
			return ngay, thang, nam;
		}

	} if(ngay!=1) {
		ngay=ngay-1;
	return ngay, thang, nam;
	}

}







int main() {
	int ngay,thang,nam;
	while((ngay>31 || ngay<1 || thang<1 || thang>12 || nam<1)) {
		printf("Nhap vao lan luot ngay, thang, nam:\n");
		scanf("%d %d %d", &ngay, &thang, &nam);
	}
	int n=songayinthang( ngay, thang, nam);
	printf("So ngay trong thang %d la: %d ", thang, n);

	//Xuat ra ngay thu bao nhiu trong nam
	int i;
	int tongngay=0;
	tongngay=songay(ngay, thang, nam)+ngay;
	printf("\nNgay thu %d trong nam %d", tongngay, nam);
	//Xuat ra ngay truoc do:
	printf("\nNgay thang nam truoc do la: %d", ngaytruoc(ngay, thang, nam));
	return 0;
}
