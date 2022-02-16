#include <iostream>

int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int temp[3][3];

void rotate(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = arr[n-1-j][i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}
void anti_rotate(int n) {
    for (int i = 0; i < n; i++) {
        rotate(n);
    }
}

int main() {
    rotate(3);
    std::cout << arr[0][0] << std::endl;
    std::cout << arr[0][1] << std::endl;
    std::cout << arr[0][2] << std::endl;
    anti_rotate(3);
    std::cout << arr[0][0] << std::endl;
    std::cout << arr[0][1] << std::endl;
    std::cout << arr[0][2] << std::endl;
}


