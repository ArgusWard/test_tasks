#include <iostream>
#include <iomanip>
template<typename T, typename K>
K summ(T x, K y)
{
    T z=x+y
    return z;
}
int main()
{
    std::cout << "Summ : " << summ(2, 3) << std::endl;
    std::cout << "Summ : " << summ(2.5, 3) << std::endl;
    std::cout << "Summ : " << summ(2, 3.1) << std::endl;
    std::cout << "Summ : " << summ(2.5, 2.6) << std::endl;
    return 0;
}