# BUỔI 1
##  Biến:

Biến trong ngôn ngữ ***C*** là một phần của bộ nhớ được sử dụng để lưu trữ dữ liệu, một biến số gồm có 3 thành phần: 
* Kiểu dữ liệu: để xác định dữ liệu mà biến hoặc giá trị có thể lưu trữ.
* Tên biến: là tên gọi giúp nhận ra để phân biệt các biến.
* Giá trị: có thể là số hoặc chữ tùy theo kiểu dữ liệu của biến.

Cú pháp để khai báo biến:

> \<Kiểu dữ liệu\>\<Tên biến\> = \<Giá trị\>; 


Ví dụ, sau đây là khai báo một biến số nguyên (integer):
```c
int var;
var = 5;
```
Biến có tên là **var** và có kiểu dữ liệu là số nguyên, và **var** được gán giá trị là *5*.

### 1. Kiểu dữ liệu trong C

#### 1.1. Kiểu ký tự (char)
Một giá trị kiểu char chiếm 1byte = 8bit và được biểu diễn thông qua bảng mã ASCII.

 Có hai kiểu dữ liệu char : kiểu Char (signed char) và Unsigned char.

 > Char (Signed char): Có dấu, có thể lưu trữ giá trị dương và âm.

 > Unsigned char: Không dấu, chỉ có thể lưu các giá trị không âm (từ 0 trở lên).


| Kiểu | Số ký tự | Kích thước | Phạm vi biểu diễn | Định dạng
| :--- | :--- | :--- | :--- | :---
| Char (Signed char) | 256 | 1 byte | -128 đến 127|%c
| Unsigned char | 256 | 1 byte | 0 đến 255 | %c

**Cách tính phạm vi biểu diễn :**
* Đối với kiểu Char (Signed char) = -2^7 đến 2^7-1 (-128 đến 127).
* Đối với kiểu Unsigned char = 2^8 ( 0 đến 255).

Ví dụ, đây là khai báo biến kiểu unsigned char :
```c
#include <stdio.h>
unsigned char var = 200;
int main(){

    printf("size : %dbyte\n ", sizeof(var));

    printf("ky tu :%c\n",var);
    var+=200;
    printf("ky tu :%c\n",var);
    
    return 0;
}
```
* `#include <stdio.h>` dùng để sử dụng các chức năng nhập, xuất trong ngôn ngữ C.
* ` unsigned char var = 200;` khai báo biến var là kiểu ký tự có giá trị là 200 (giá trị nằm trong phạm vi biểu diễn 0->255).
* ` int main()` hàm chính thực hiện các lệnh trong chương trình.
* ` printf("size : %d\n byte", sizeof(var));` dùng để đọc kích thước của biến **var**.
* ` printf("ky tu :%c\n",var);` xuất ký tự trong bảng mã ASCII.( kq : ╚	).
* ` var+=100;` giá trị *var* thay đổi thành 400 
* ` printf("ky tu :%c\n",var);`giá trị **var** vượt quá giới hạn tối đa biểu diễn,
200+200=144 ( kq : É	).
#### 1.2. Kiểu số nguyên (integer)
Trong ngôn ngữ C cho phép sử dụng số nguyên kiểu int, số nguyên dài kiểu long và số nguyên không dấu kiểu unsigned có kích thước khác nhau.

| Kiểu |Kích thước | Phạm vi biểu diễn | Định dạng |
| :--- | :--- | :--- | :---
| int | 2->4 byte | -2^15 đến 2^15-1 -> -2^31 đến 2^31-1 |%d, %i
| short int |2 byte | -2^15 đến 2^15-1 | %hd
| long int | 4->8 byte | -2^31 đến 2^31-1 -> -2^63 đến 2^63-1 | %ld, %li
| long long int | 8 byte | -2^63 đến 2^63-1 | %lld, %lli
| Unsigned int | 2->4 byte | 0 đến 2^16-1 -> 0 đến 2^32-1 | %u
| Unsigned long int | 4 byte | 0 đến 2^32-1 | %lu
| Unsigned long long int | 8 byte |  0 đến 2^64-1 | %llu

**Cách tính phạm vi biểu diễn :**

* Đối với int ( gồm số thực và số nguyên) 2->4byte = 16bit -> 32bit sẽ được tính theo cách sau, 2byte = -2^15 đến 2^15-1 (-32768 đến 32767) và 4byte = -2^31 đến 2^31-1.
* Đối với unsigned int ( chỉ tính số nguyên )
2->4byte = 8bit -> 16bit sẽ được tính theo cách sau, 2byte = 0 đến 2^16-1 (0 đến 65536 ) và 4byte = 0 đến 2^32-1.

Ví dụ, đây là khai báo kiểu dữ liệu integer kích thước 1 byte 
```c
#include <stdio.h>
#include <stdint.h>
int8_t var;

int main(int arg, char const *argv){
    printf("Size :%dbyte\n",sizeof(var));
    var = 200;
    printf("var = %d\n",var);

    return 0;
}
```
* `#include <stdio.h>` thư viện giao tiếp với màn hình console
* `#include <stdint.h>` thư viện sử dụng biến `int8_t` 
* `int8_t var;` biến **var** được khai báo kiểu số nguyên (số âm và dương) có kích thước 1byte=8bit (-128 đến 127 hoặc -2^7 đến 2^7-1).
* `printf("Size :%dbyte\n",sizeof(var));` xác định kích thước của biến var và xuất ra màn hình.
* ` var = 200;` gán biến **var**=200.
* ` printf("var = %d\n",var);` xuất màn hình giá trị **var**, nhưng phạm vi biểu diễn của **var** chỉ từ -128 đến 127 nên xuất ra màn hình **var**=-56.

Còn khi khai báo biến unsigned integer có kích thước 1 byte và giá trị biến **var** = 200 thì khi xuất màn hình sẽ hiện giá trị **var** = 200 ( Vì phạm vi biểu diễn từ 0 đến 255).
```c
#include <stdio.h>
#include <stdint.h>
uint8_t var;

int main(int arg, char const *argv){
    printf("Size :%dbyte\n",sizeof(var));
    var = 200;
    printf("var = %d\n",var);

    return 0;
}
``` 
#### 1.3 Kiểu phẩy động

Trong ngôn ngữ C, kiểu dữ liệu phẩy động được sử dụng để biểu diễn số thực, hay biểu diễn giá trị có phần thập phân. Có ba kiểu dữ liệu phổ biến:
| Kiểu |Kích thước | Phạm vi biểu diễn | Định dạng |
| :--- | :--- | :--- | :---
| float | 4 byte | 3.4E-38 đến 3.4E+38 |%f
| double |8 byte | 1.7E-308 đến 1.7E+308 | %lf
| long double | 10 byte | 3.4E-4932 đến 1.1E-4932 | %Lf

Ví dụ, sau đây là khai báo kiểu dữ liệu float
```c
#include <stdio.h>
float var=3.14;
int main(){
    printf("Gia tri var =%f\n",var);
    return 0;
}
```
* `#include <stdio>` giao tiếp màn hình console.
* `float var=3.14` khai báo biến **var** có kiểu float = 3.14.
* `printf("Gia tri var =%f\n",var);` xuất ra màn hình giá trị var kiểu định dạng %f, có giá trị 3.140000 (mặc định hiển trị 6 số thập phân).
* `return 0;` chương trình thực hiện xong và kết thúc.

## Hàm:
Trong ngôn ngữ lập trình, hàm là một khối mã được đặt trên, có thể tái sử dụng, và thực hiện nhiệm vụ cụ thể. Hàm giúp chia nhỏ chương trình thành đơn vị nhỏ, dễ quản lý và tái sử dụng.

Một địng nghĩa hàm bao gồm:

 ``` c
 <Kiểu trả về> <Tên hàm> ( danh sách tham số)
{
     Thân hàm
} 
```
* Kiểu trả về: là dạng dữ liệu mà hàm trả về, có thể giá về một giá trị hoặc là không trả về giá trị nào cả đó là hàm **void**.
* Tên hàm: có thể gọi hàm thực giện nhiệm vụ cụ thể và tái sử dụng khi cần.
* Tham số: khi gọi hàm cần phải truyền danh sách tham số. Danh sách tham số có các kiểu, thứ tự, số lượng tham số của hàm.
* Thân hàm: Tập hợp các lệnh xác định mà hàm có nhiệm vụ giải quyết khi được gọi hàm.
  
**Sau đây là ví dụ gọi hàm vào chương trình, trả giá trị (không phải hàm void) :**

```c
#include <stdio.h>
#include <stdint.h>

uint8_t tong (uint8_t a, uint8_t b){ 
    return a+b;
}

float thuong(uint8_t a, uint8_t b){
    if(b==0){
        printf("ERROR!! mau bang 0\n");
    }
    return (float)a/b; 
}

int main(int arg, char const *argv){
    printf("tong la: %d \n", tong(7,8));

    printf("thuong la: %f \n", thuong(7,8));
    return 0;
}
```
* `#include <stdio.h>` Thư viện nhập, xuất ngôn ngữ C và giao tiếp với màn hình console.
* `#include <stdint.h>` Thư viện định nghĩa kiểu dữ liệu có kích thước cố định.
* ` Hàm tổng ` Khai báo hàm **tổng**, kiểu trả về là unsigned int có kích thước 8bit=1byte có 2 tham số **a,b** được khai báo kiểu dữ liệu unsigned int có kích thước 8bit=1byte, thân hàm có chức năng trả về kết quả **a+b** khi được gọi hàm.
* `Hàm thương` Khai báo hàm **thương**, kiểu trả về là float có kích thước 4byte=32bit có 2 tham số **a,b** được khai báo kiểu dữ liệu unsigned int có kích thước 8bit=1byte, thân hàm sẽ kiểm trả tham số **b** nếu bằng 0 sẽ báo lổi ra màn hình, trả về kết quả là **a/b** vì là khai báo 2 tham số nguyên không dấu nên phải ép kiểu **(float)** để trả về số thực.
* `printf("tong la: %d \n", tong(7,8));`  Khi được gọi hàm **tong** sẽ truyển 2 tham số 7, 8 và thực hiện phép tính a+b trả về kết quả 15.
* ` printf("thuong la: %f \n", thuong(7,8));` Khi gọi hàm **thuong** sẽ truyển vào 2 tham số 7, 8 và thực hiện phép tính a/b trả về kết quả 0.875000.

**Sau đây là ví dụ gọi hàm vào chương trình, không trả về giá trị (hàm void) :**

```c
#include <stdio.h>
void Hienthi (){   
    printf("hello world!");
}
main(){
    Hienthi();
return 0;
}
```
* `#include <stdio.h>` Thư viện nhập, xuất ngôn ngữ C và giao tiếp với màn hình console.
* `Hàm hiển thị` Khai báo hàm **Hienthi** kiểu trả về void (không trả về giá trị), không có tham số, thân hàm thực hiện lệnh xuất màn hình `hello world!`.
* `Hàm main` Trong hàm main, hàm Hienthi được gọi và thực hiện lệnh xuất ra màn hình.
