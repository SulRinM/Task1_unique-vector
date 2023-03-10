/*
Описание
Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.

Пример правильной работы программы
[IN]: 1 1 2 5 6 1 2 4
[OUT]: 1 2 4 5 6
*/
#include <iostream>
#include <vector>
#include <algorithm>

void remove_duplic(std::vector<int> &v)
{
    std::cout << "[IN]: ";
    for (const auto& i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::sort(v.begin(), v.end());
    auto temp = std::unique(v.begin(), v.end());
    v.erase(temp, v.end());
    std::cout << "[OUT]: ";
    for (const auto& a : v)
    {
        std::cout << a << " ";
    }
}

int main()
{
    std::vector<int> ve = { 1, 1, 2, 5, 6, 1, 2, 4 };

    remove_duplic(ve);


    return 0;
}

