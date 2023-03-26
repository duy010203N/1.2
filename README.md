#include <iostream> // Thêm thư viện iostream để sử dụng cin và cout
using namespace std; // Sử dụng không gian tên std để tránh việc gõ std:: trước mỗi lần sử dụng cin và cout

int linearSearch(int arr[], int n, int x) { // Khai báo hàm linearSearch với ba tham số arr, n và x
    for(int i = 0; i < n; i++) { // Dùng vòng lặp for để duyệt mảng arr từ đầu đến cuối
        if(arr[i] == x) { // Kiểm tra xem phần tử thứ i trong mảng có bằng x không
            return i; // Nếu có, trả về chỉ số i
        }
    }
    return -1; // Nếu không tìm thấy, trả về -1
}

int main() { // Hàm chính
    int arr[] = {10, 20, 30, 40, 50}; // Khởi tạo mảng arr với giá trị 10, 20, 30, 40, 50
    int n = sizeof(arr) / sizeof(arr[0]); // Tính số lượng phần tử trong mảng bằng cách chia kích thước của mảng cho kích thước của một phần tử trong mảng
    int x = 30; // Khởi tạo giá trị x cần tìm kiếm
    int result = linearSearch(arr, n, x); // Gọi hàm linearSearch để tìm kiếm x trong mảng arr
    if(result == -1) { // Nếu trả về giá trị -1, tức là không tìm thấy x trong mảng arr
        cout << "Element is not present in array" << endl; // In ra thông báo không tìm thấy x trong mảng arr
    } else { // Ngược lại, nếu trả về một chỉ số khác -1
        cout << "Element is present at index " << result << endl; // In ra thông báo tìm thấy x tại vị trí chỉ số result trong mảng arr
    }
    return 0; // Trả về giá trị 0 để đánh dấu kết thúc chương trình
}
