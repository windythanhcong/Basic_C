#include <stdio.h>
#include <math.h> // tv toan hoc
#include <stdlib.h> // thu vien exit (thoat)

void khoangcach2diem(){
	int x1,y1,x2,y2;
	float kq;
	printf("Tinh khoang cach 2 diem:\n");
	printf("Vui long nhap:\n");
	printf("Toa do A(x1;y1)\n");
	printf("toa do diem x1: "); scanf("%d",&x1); 
	printf("toa do diem y1: "); scanf("%d",&y1);
	printf("Toa do B(x2;y2)\n");
	printf("toa do diem x2: "); scanf("%d",&x2); 
	printf("toa do diem y2: "); scanf("%d",&y2); 
	
	kq = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	
	printf("Khoang cach diem A(%d,%d) va B(%d,%d)= %f",x1,y1,x2,y2,kq);
}

void Stamgiac(){ // tinh theo cthuc Heron
	int a,b,c;
	printf("Tinh dien tich tam giac tong quat\n");
	printf("Vui long nhap:\n");
	printf("Canh a:"); scanf("%d",&a);
	printf("Canh b:"); scanf("%d",&b);
	printf("Canh c:"); scanf("%d",&c);
	
	float p=(a+b+c)/2;
	printf("Chu vi tam giac: %f", p);

	float S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("Dien tich tam giac voi 3 canh a: %d, b: %d, c: %d = %f",a,b,c,S);
}

void v(){
	 int n;
	   do{
   	printf("Chuong trinh toan hoc\n");
   	printf("1. Chuong trinh tinh khoang cach 2 diem\n");
   	printf("2. Chuong trinh tinh dien tich tam giac\n");
   	printf("Vui long chon... "); scanf("%d",&n);
   } while (n!=1 && n!=2 );
    
	switch(n){
   	case 1: khoangcach2diem(); break;
   	case 2: Stamgiac(); break;
   	default: break;
   }	
}

int main(){
   int m;
	v();
	
   do{
   	printf("\n1. Quay lai\n");
   	printf("2. Thoat\n");
   	printf("Vui long chon:.. "); scanf("%d",&m);
   	
   	switch(m){
   	case 1: v(); break;
   	case 2: exit(0); break;
   	default:  break; }
   	
   } while( m!= 2);
  
    return 0;
}
