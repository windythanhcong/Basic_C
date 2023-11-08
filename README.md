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

| Kiểu | Số ký tự | Kích thước | Phạm vi biểu diễn |
| :--- | :--- | :--- | :--- |
| Char (Signed char) | 256 | 1 byte | -128 đến 127
| Unsigned char | 256 | 1 byte | 0 đến 255 | 

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
* ` unsigned char var = 200;` khai báo biến var có giá trị là 200 (giá trị nằm trong phạm vi biểu diễn 0->255).
* ` int main()` hàm chính thực hiện các lệnh trong chương trình.
* ` printf("size : %d\n byte", sizeof(var));` dùng để đọc kích thước của biến **var**.
* ` printf("ky tu :%c\n",var);` xuất ký tự trong bảng mã ASCII.( kq : ╚	).
* ` var+=100;` giá trị *var* thay đổi thành 400 
* ` printf("ky tu :%c\n",var);`giá trị **var** vượt quá giới hạn tối đa biểu diễn,
200+200=144 ( kq : É	).
#### 1.2. Kiểu số nguyên (integer)

