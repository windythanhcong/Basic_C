#include <stdio.h>
/*
1. Hcn
2. Hv
3. Tg vuong
vui long chon loai hinh
ban chon hcn, vui long nhap
chieu dai:
chieu rong:
OUTPUT: *********
*/
void hinhchunhat(){
	int r,d;
	printf("ban chon hinh chu nhat\n");
	printf("chieu dai:"); scanf("%d",&d);
	printf("chieu rong:"); scanf("%d",&r);
	for(int i=1 ; i<=d ; i++){
		for (int j=1 ; j<=r ; j++){
			if ( i==1 || i==d || j==1 || j== r){
				printf("*");
			} else printf(" ");
		}printf("\n");
	}
}

void hinhvuong(){
	int c;
	printf("ban chon hinh vuong \n");
	printf("canh: "); scanf("%d",&c);
	for (int i=1 ; i<=c ; i++){
		for (int j=1 ; j<=c ; j++){
				if(i==1 || i==c || j==1 || j==c){
 				printf("*");
			 } else printf(" ");
		} printf("\n");
	}
}

void tamgiacvuong(){
	int g;
	printf("ban chon tam giac vuong \n");
	printf("nhap canh:"); scanf("%d",&g);
	for (int i=1 ; i<=g ; i++){
		for (int j=1 ; j <= i ; j++){
		printf("*");
		} printf("\n");
	}
}

int main() {
int n;
printf("vui long nhap loai hinh :"); scanf("%d", &n);
switch(n){
	case 1: hinhchunhat(); break;
	case 2: hinhvuong(); break;
	case 3: tamgiacvuong(); break;
	default: printf("khong hop le!"); break;
}
return 0;
}
