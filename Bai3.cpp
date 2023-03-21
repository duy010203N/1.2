#include <iostream>
using namespace std;

// Khai báo kiểu dữ liệu Point
struct Point {
    float x; // hoành độ
    float y; // tung độ
};

// Định nghĩa hàm nhập cho kiểu dữ liệu Point
void nhap(Point &p) {
    cout << "Nhap hoanh do: ";
    cin >> p.x;
    cout << "Nhap tung do: ";
    cin >> p.y;
}

// Định nghĩa hàm xuất cho kiểu dữ liệu Point
void xuat(Point p) {
    cout << "(" << p.x << "," << p.y << ")";
}

int main() {
    Point A;

    // Nhập giá trị cho điểm A
    cout << "Nhap toa do diem A: " << endl;
    nhap(A);

    // Xuất giá trị của điểm A
    cout << "Toa do diem A: ";
    xuat(A);

    return 0;
}
