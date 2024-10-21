#include <iostream>
#include <cmath>


int main() {
    double x1, y1, r; 
    double x2, y2, R; 

    std::cout << "Введите координаты центра первого круга (x1, y1) и радиус r: ";
    std::cin >> x1 >> y1 >> r;
    std::cout << "Введите координаты центра второго круга (x2, y2) и радиус R: ";
    std::cin >> x2 >> y2 >> R;

    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (dist + r <= R) {
        std::cout << "Да" << std::endl; 
    } 
    else if (dist + R <= r) {
        std::cout << "Да, но справедливо обратное для двух фигур" << std::endl; 
    }
    else if (dist < r + R) {
        std::cout << "Фигуры пересекаются" << std::endl; 
    }
    else {
        std::cout << "Ни одно условие не выполнено" << std::endl; 
    }

    return 0;
}