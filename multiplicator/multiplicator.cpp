#include <iostream>
#include <iomanip>
#include <string.h>
int main()
{
    char a[40], b[40], c='.';
    int count=0;
    std::cout << "Vvedite dva chisla dlya summirovania: " << std::endl;
    std::cin >> a >> b;
    for (int i=0; i<strlen(a); i++)
    {
        if(a[i]==c)
        {
            count++;
        }
    }
    for (int i=0; i<strlen(b); i++)
    {
        if(b[i]==c)
        {
            count++;
        }
    }
    if (count>0)
    std::cout << std::fixed << std::setprecision(1) << "Rezultat: " << std::stof(a)+std::stof(b) << std::endl;
    else
    std::cout << "Rezultat: " << std::stoi(a)+std::stoi(b) << std::endl;  
    return 0;
}