#include <iostream>
#include <iomanip>
template<typename T>
T summ(T x, T y)
{
    return x + y;
}
int main()
{
    char a[40], b[40], c='.';
    int count=0, k, a1=0, a2=0;
    std::cout << "Vvedite dva chisla dlya summirovania: " << std::endl;
    std::cin >> a >> b;
    for (int i=0; a[i]; i++)
    {
        if(a[i]==c)
        {
        count++;
        k=i;
        }
    }
    for (int i=k+1; a[i]; i++)
    {
        a1++;
    }
    for (int i=0; b[i]; i++)
    {
        if(b[i]==c)
        {
        count++;
        k=i;
        }
    }
    for (int i=k+1; b[i]; i++)
    {
        a2++;
    }
    if (a1>a2)
    k=a1;
    else
    k=a2;
    if (count>0)
    std::cout << std::fixed << std::setprecision(k) << "Rezultat: " << summ(std::stof(a),std::stof(b)) << std::endl;
    else
    std::cout << "Rezultat: " << summ(std::stoi(a), std::stoi(b)) << std::endl;  
    return 0;
}