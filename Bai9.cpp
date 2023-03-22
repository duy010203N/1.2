#include <iostream> // Thêm thư viện iostream để sử dụng cin, cout
using namespace std; // Sử dụng không gian tên std

struct Point { // Khai báo kiểu dữ liệu điểm
    double x, y; // Tọa độ của điểm
};

struct Circle { // Khai báo kiểu dữ liệu đường tròn
    Point center; // Tâm của đường tròn
    double radius; // Bán kính của đường tròn
};

void inputCircle(Circle& circle) { // Định nghĩa hàm nhập đường tròn
    cout << "Enter the center of the circle (x, y): "; // Yêu cầu người dùng nhập tọa độ tâm đường tròn
    cin >> circle.center.x >> circle.center.y; // Nhập tọa độ tâm của đường tròn
    cout << "Enter the radius of the circle: "; // Yêu cầu người dùng nhập bán kính đường tròn
    cin >> circle.radius; // Nhập bán kính của đường tròn
}

void outputCircle(const Circle& circle) { // Định nghĩa hàm xuất đường tròn
    cout << "The circle with center (" << circle.center.x << ", " << circle.center.y
         << ") and radius " << circle.radius << endl; // Xuất thông tin về đường tròn (tọa độ tâm và bán kính) ra màn hình
}

int main() { // Hàm chính của chương trình
    Circle myCircle; // Khai báo biến kiểu Circle để lưu trữ đường tròn
    inputCircle(myCircle); // Gọi hàm nhập đường tròn từ bàn phím
    cout << "You entered: ";
    outputCircle(myCircle); // Gọi hàm xuất đường tròn ra màn hình
    return 0; // Trả về giá trị 0 để kết thúc chương trình
}
