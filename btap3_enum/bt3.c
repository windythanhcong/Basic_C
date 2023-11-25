#include <stdio.h>

typedef enum {
    Thu_2 = 2,
    Thu_3,
    Thu_4,
    Thu_5,
    Thu_6,
    Thu_7,
    Chu_nhat
} Ngay;

typedef enum {
    Thang_1,
    Thang_2,
    Thang_3,
    Thang_4,
    Thang_5,
    Thang_6,
    Thang_7,
    Thang_8,
    Thang_9,
    Thang_10,
    Thang_11,
    Thang_12,
} Thang;

typedef struct {
    int ngay;
    int thang;
    int nam;
    Ngay ngayTrongTuan;
} Thoigian;

const Thoigian thoigiangoc = {10, 10, 2023, Thu_5};

const Thoigian nhapThoigian(int ngay, int thang, int nam) {
    Thoigian thoiGianNhap = {ngay, thang, nam};
    return thoiGianNhap;
}
int tinhNgayThuMay(const Thoigian* thoiGianNhap) {
    int khoangCachNgay = 0;

    // Tao mot ban sao cua thoiGianNhap de khong thay doi du lieu
    Thoigian tempThoiGianNhap = *thoiGianNhap;

    while (tempThoiGianNhap.ngay != thoigiangoc.ngay || tempThoiGianNhap.thang != thoigiangoc.thang || tempThoiGianNhap.nam != thoigiangoc.nam) {
        khoangCachNgay++;
        tempThoiGianNhap.ngay++;
        if (tempThoiGianNhap.ngay > 31) {
            tempThoiGianNhap.ngay = 1;
            tempThoiGianNhap.thang++;
            if (tempThoiGianNhap.thang > 12) {
                tempThoiGianNhap.thang = 1;
                tempThoiGianNhap.nam++;
            }
        }
    }

    int ngayThuMay = (thoigiangoc.ngayTrongTuan + khoangCachNgay) % 7;

    return ngayThuMay;
}

int main() {
    int ngay, thang, nam;
    int namnhuan;
    do {
        printf("Nhap ngay: ");
        scanf("%d", &ngay);
        printf("Nhap thang: ");
        scanf("%d", &thang);
        printf("Nhap nam: ");
        scanf("%d", &nam);
        //ktr nam nhuan
        namnhuan = 0;
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            namnhuan = 1;
        }
        //ktr ngay, thang hop le
        if (thang < 1 || thang > 12 || ngay < 1 || ngay > 31 || (ngay == 31 && (thang == 4 || thang == 6 || thang == 9 || thang == 11)) || (ngay > 29 && thang == 2) || (ngay == 29 && thang == 2 && !namnhuan)) {
            printf("Ngay thang nam khong hop le. Vui long nhap lai....\n");
        }
    } while (thang < 1 || thang > 12 || ngay < 1 || ngay > 31 || (ngay == 31 && (thang == 4 || thang == 6 || thang == 9 || thang == 11)) || (ngay > 29 && thang == 2) || (ngay == 29 && thang == 2 && !namnhuan));

    Thoigian thoiGianNhap = nhapThoigian(ngay, thang, nam);
    printf("Ngay: %d\n", thoiGianNhap.ngay);
    printf("Thang: %d\n", thoiGianNhap.thang);
    printf("Nam: %d\n", thoiGianNhap.nam);

    int ngayThuMay = tinhNgayThuMay(&thoiGianNhap);
    printf("Ngay thu %d trong tuan.\n", ngayThuMay);

    return 0;
}
