#include <iostream>
using namespace std;
void menu();
void kilos();
void meters();
void seconds();
void kilos ()
{
    int k;
    double h;
    std::cout << "Vibirite edinitsi dlya convertacii:" << std::endl;
    std::cout << "1. 1 tonna (t) = 1000 kg" << std::endl;
    std::cout << "2. 1 kilogramm (kg) = 1 kg" << std::endl;
    std::cout << "3. 1 gramm (g) = 0,001 kg" << std::endl;
    std::cout << "4. 1 carat (ct) = 0.0002 kg" << std::endl;
    std::cout << "5. 1 funt (lb) = 0.453592 kg" << std::endl;
    std::cout << "6. 1 uncia (oz) = 0.0283495 kg" << std::endl;
    std::cout << "7. Vozvrat k prediduschemu menu." << std::endl;
    cin >> k;
    switch (k)
    {
    case 1:
        std::cout << "Vvedite ves:" << std::endl;
        cin >> h;
        std::cout << h << " t = " << h*1000 << " kg." << std::endl;
        break;
    case 2:
        std::cout << "Vvedite ves:" << std::endl;
        cin >> h;
        std::cout << h << " kg = " << h << " kg." << std::endl;
        break;
    case 3:
        std::cout << "Vvedite ves:" << std::endl;
        cin >> h;
        std::cout << h << " g = " << h/1000 << " kg." << std::endl;
        break;
    case 4:
        std::cout << "Vvedite ves:" << std::endl;
        cin >> h;
        std::cout << h << " ct = " << h*0.0002 << " kg." << std::endl;
        break;
    case 5:
        std::cout << "Vvedite ves:" << std::endl;
        cin >> h;
        std::cout << h << " lb = " << h*0.453592 << " kg." << std::endl;
        break;
    case 6:
        std::cout << "Vvedite ves:" << std::endl;
        cin >> h;
        std::cout << h << " oz = " << h*0.0283495 << " kg." << std::endl;
        break;
    case 7:
        menu();
        break;
    default:
        std::cout << "Nepravilniy nomer punkta." << std::endl;
        kilos();
        break;
    }
    std::cout << "1. Vibrat druguyu velichinu." << std::endl;
    std::cout << "2. Vibrat drugie edinitsi izmereniya." << std::endl;
    cin >> k;
    switch (k)
    {
    case 1:
        kilos();
        break;
    case 2:
        menu();
        break;
    }
}
void meters()
{
    int k;
    double h;
    std::cout << "Vibirite edinitsi dlya convertacii:" << std::endl;
    std::cout << "1. 1 kilometr (km) = 1000 m" << std::endl;
    std::cout << "2. 1 metr (m) = 1 m" << std::endl;
    std::cout << "3. 1 decimetr (dm) = 0,1 m" << std::endl;
    std::cout << "4. 1 santimetr (sm) = 0.01 m" << std::endl;
    std::cout << "5. 1 milimetr (mm) = 0.001 m" << std::endl;
    std::cout << "6. 1 fut (ft) = 0.3048 m" << std::endl;
    std::cout << "7. Vozvrat k prediduschemu menu." << std::endl;
    cin >> k;
    switch (k)
    {
    case 1:
        std::cout << "Vvedite dlinu:" << std::endl;
        cin >> h;
        std::cout << h << " km = " << h*1000 << " m." << std::endl;
        break;
    case 2:
        std::cout << "Vvedite dlinu:" << std::endl;
        cin >> h;
        std::cout << h << " m = " << h << " m." << std::endl;
        break;
    case 3:
        std::cout << "Vvedite dlinu:" << std::endl;
        cin >> h;
        std::cout << h << " dm = " << h/10 << " m." << std::endl;
        break;
    case 4:
        std::cout << "Vvedite dlinu:" << std::endl;
        cin >> h;
        std::cout << h << " sm = " << h/100 << " m." << std::endl;
        break;
    case 5:
        std::cout << "Vvedite dlinu:" << std::endl;
        cin >> h;
        std::cout << h << " mm = " << h/1000 << " m." << std::endl;
        break;
    case 6:
        std::cout << "Vvedite dlinu:" << std::endl;
        cin >> h;
        std::cout << h << " ft = " << h*0.3048 << " m." << std::endl;
        break;
    case 7:
        menu();
        break;
    default:
        std::cout << "Nepravilniy nomer punkta." << std::endl;
        meters();
        break;
    }
    switch (k)
    {
    case 1:
        meters();
        break;
    case 2:
        menu();
        break;
    }
}
void seconds()
{
    int k;
    double h;
    std::cout << "Vibirite edinitsi dlya convertacii:" << std::endl;
    std::cout << "1. 1 nedelya (w) =  604800 s" << std::endl;
    std::cout << "2. 1 sutki (d) = 86400 s" << std::endl;
    std::cout << "3. 1 chas (h) = 3600 s" << std::endl;
    std::cout << "4. 1 minuta (min) = 60 s" << std::endl;
    std::cout << "5. 1 sekunda (s) = 1 s" << std::endl;
    std::cout << "6. 1 milisekunda (ms) = 0.001 s" << std::endl;
    std::cout << "7. Vozvrat k prediduschemu menu." << std::endl;
    cin >> k;
    switch (k)
    {
    case 1:
        std::cout << "Vvedite vremya:" << std::endl;
        cin >> h;
        std::cout << h << " w = " << h*604800 << " m." << std::endl;
        break;
    case 2:
        std::cout << "Vvedite vremya:" << std::endl;
        cin >> h;
        std::cout << h << " d = " << h*86400 << " s." << std::endl;
        break;
    case 3:
        std::cout << "Vvedite vremya:" << std::endl;
        cin >> h;
        std::cout << h << " h = " << h*3600 << " s." << std::endl;
        break;
    case 4:
        std::cout << "Vvedite vremya:" << std::endl;
        cin >> h;
        std::cout << h << " min = " << h*60 << " s." << std::endl;
        break;
    case 5:
        std::cout << "Vvedite vremya:" << std::endl;
        cin >> h;
        std::cout << h << " s = " << h << " s." << std::endl;
        break;
    case 6:
        std::cout << "Vvedite vremya:" << std::endl;
        cin >> h;
        std::cout << h << " ms = " << h/1000 << " s." << std::endl;
        break;
    case 7:
        menu();
        break;
    default:
        std::cout << "Nepravilniy nomer punkta." << std::endl;
        seconds();
        break;
    }
    std::cout << "1. Vibrat druguyu velichinu." << std::endl;
    std::cout << "2. Vibrat drugie edinitsi izmereniya." << std::endl;
    cin >> k;
    switch (k)
    {
    case 1:
        seconds();
        break;
    case 2:
        menu();
        break;
    }
}
void menu()
{
    int k;
    std::cout << "Vibirite edinitsi izmereniya:" << std::endl;
    std::cout << "1. kg" << std::endl;
    std::cout << "2. metri" << std::endl;
    std::cout << "3. sekundi" << std::endl;
    std::cout << "4. vihod" << std::endl;
    do
    {
    cin >> k;
    switch(k)
    {
        case 1:
            kilos();
            break;
        case 2:
            meters();
            break;
        case 3:
            seconds();
            break;
        case 4:
            std::cout << "Programma zavershina" << std::endl;
            break;
        default:
        std::cout << "Nepravilniy nomer punkta. Povtorite vvod" << std::endl;
        menu();
        break;
    }
    } while (k!=4);    
}
int main()
{
    menu();
    return 0;
}