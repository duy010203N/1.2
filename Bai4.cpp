#include <iostream>
using namespace std;

// Khai báo kiểu dữ liệu Point3D
struct Point3D {
    float x; // hoành độ
    float y; // tung độ
    float z; // cao độ
};

// Định nghĩa hàm nhập cho kiểu dữ liệu Point3D
void nhap(Point3D &p) {
    cout << "Nhap hoanh do: ";
    cin >> p.x;
    cout << "Nhap tung do: ";
    cin >> p.y;
    cout << "Nhap cao do: ";
    cin >> p.z;
}

// Định nghĩa hàm xuất cho kiểu dữ liệu Point3D
void xuat(Point3D p) {
    cout << "(" << p.x << "," << p.y << "," << p.z << ")";
}

int main() {
    Point3D A;

    // Nhập giá trị cho điểm A
    cout << "Nhap toa do diem A: " << endl;
    nhap(A);

    // Xuất giá trị của điểm A
    cout << "Toa do diem A: ";
    xuat(A);

    return 0;
}
