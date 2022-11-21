#include <iostream>
#include <string.h>
#include <clocale>
#include <fstream>
#include <ctime>
const char separator[]=" /,\n\t";
namespace calc
{
void menu();
int getnumber()
{
    int v;
    std::cin >> v;
        while (std::cin.fail() || std::cin.get() != '\n')
        {
        std::cout << "Nekorrektnie dannie. Povtorite vvod" << std::endl;
        std::cin.clear();
        std::cin.ignore(99999, '\n');
        std::cin.sync();
        std::cin >> v;
        }
        return v;
}
void kilos ()
{
    std::ofstream file;
    file.open("conv.log", std::ios::app);
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
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
    k=getnumber();
    switch (k)
    {
    case 1:
        std::cout << "Vvedite ves:" << std::endl;
        h=getnumber();
        std::cout << h << " t = " << h*1000 << " kg." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " t = " << h*1000 << " kg." << std::endl;
        break;
    case 2:
        std::cout << "Vvedite ves:" << std::endl;
        h=getnumber();
        std::cout << h << " kg = " << h << " kg." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " kg = " << h << " kg." << std::endl;
        break;
    case 3:
        std::cout << "Vvedite ves:" << std::endl;
        h=getnumber();
        std::cout << h << " g = " << h/1000 << " kg." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " g = " << h/1000 << " kg." << std::endl;
        break;
    case 4:
        std::cout << "Vvedite ves:" << std::endl;
        h=getnumber();
        std::cout << h << " ct = " << h*0.0002 << " kg." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " ct = " << h*0.0002 << " kg." << std::endl;
        break;
    case 5:
        std::cout << "Vvedite ves:" << std::endl;
        h=getnumber();
        std::cout << h << " lb = " << h*0.453592 << " kg." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " lb = " << h*0.453592 << " kg." << std::endl;
        break;
    case 6:
        std::cout << "Vvedite ves:" << std::endl;
        h=getnumber();
        std::cout << h << " oz = " << h*0.0283495 << " kg." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " oz = " << h*0.0283495 << " kg." << std::endl;
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
    k=getnumber();
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
    std::ofstream file;
    file.open("conv.log", std::ios::app);
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
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
    k=getnumber();
    switch (k)
    {
    case 1:
        std::cout << "Vvedite dlinu:" << std::endl;
        h=getnumber();
        std::cout << h << " km = " << h*1000 << " m." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " km = " << h*1000 << " m." << std::endl;
        break;
    case 2:
        std::cout << "Vvedite dlinu:" << std::endl;
        h=getnumber();
        std::cout << h << " m = " << h << " m." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " m = " << h << " m." << std::endl;
        break;
    case 3:
        std::cout << "Vvedite dlinu:" << std::endl;
        h=getnumber();
        std::cout << h << " dm = " << h/10 << " m." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " dm = " << h/10 << " m." << std::endl;
        break;
    case 4:
        std::cout << "Vvedite dlinu:" << std::endl;
        h=getnumber();
        std::cout << h << " sm = " << h/100 << " m." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " sm = " << h/100 << " m." << std::endl;
        break;
    case 5:
        std::cout << "Vvedite dlinu:" << std::endl;
        h=getnumber();
        std::cout << h << " mm = " << h/1000 << " m." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " mm = " << h/1000 << " m." << std::endl;
        break;
    case 6:
        std::cout << "Vvedite dlinu:" << std::endl;
        h=getnumber();
        std::cout << h << " ft = " << h*0.3048 << " m." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " ft = " << h*0.3048 << " m." << std::endl;
        break;
    case 7:
        menu();
        break;
    default:
        std::cout << "Nepravilniy nomer punkta." << std::endl;
        meters();
        break;
    }
    std::cout << "1. Vibrat druguyu velichinu." << std::endl;
    std::cout << "2. Vibrat drugie edinitsi izmereniya." << std::endl;
    k=getnumber();
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
    std::ofstream file;
    file.open("conv.log", std::ios::app);
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
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
    k=getnumber();
    switch (k)
    {
    case 1:
        std::cout << "Vvedite vremya:" << std::endl;
        h=getnumber();
        std::cout << h << " w = " << h*604800 << " s." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " w = " << h*604800 << " s." << std::endl;
        break;
    case 2:
        std::cout << "Vvedite vremya:" << std::endl;
        h=getnumber();
        std::cout << h << " d = " << h*86400 << " s." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " d = " << h*86400 << " s." << std::endl;
        break;
    case 3:
        std::cout << "Vvedite vremya:" << std::endl;
        h=getnumber();
        std::cout << h << " hrs = " << h*3600 << " s." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " hrs = " << h*3600 << " s." << std::endl;
        break;
    case 4:
        std::cout << "Vvedite vremya:" << std::endl;
        h=getnumber();
        std::cout << h << " min = " << h*60 << " s." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " min = " << h*60 << " s." << std::endl;
        break;
    case 5:
        std::cout << "Vvedite vremya:" << std::endl;
        h=getnumber();
        std::cout << h << " s = " << h << " s." << std::endl;
        file << now->tm_hour << ':' << now->tm_min << " - " << h << " s = " << h << " s." << std::endl;
        break;
    case 6:
        std::cout << "Vvedite vremya:" << std::endl;
        h=getnumber();
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
    k=getnumber();
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
    k=getnumber();
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
}
void comcalc(long int k, double h)
{
    std::ofstream file;
    file.open("conv.log", std::ios::app);
    std::time_t q = std::time(nullptr);
    std::tm* now = std::localtime(&q);
    enum mesun 
    {
        t=20, kg=117, g=7, ct=320, lb=122, oz=1526,
        km=1113, m=13, dm=413, sm=1913, mm=1313, ft=620,
        w=23, d=4, hrs=81819, min=13914, s=19, ms=1319
    };
    switch (k)
    {
        case t:
            std::cout << h << " t = " << h*1000 << " kg." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " t = " << h*1000 << " kg." << std::endl;
            break;
        case kg:
            std::cout << h << " kg = " << h << " kg." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " kg = " << h << " kg." << std::endl;
            break;
        case g:
            std::cout << h << " g = " << h/1000 << " kg." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " g = " << h/1000 << " kg." << std::endl;
            break;
        case ct:
            std::cout << h << " ct = " << h*0.0002 << " kg." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " ct = " << h*0.0002 << " kg." << std::endl;
            break;
        case lb:
            std::cout << h << " lb = " << h*0.453592 << " kg." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " lb = " << h*0.453592 << " kg." << std::endl;
            break;
        case oz:
            std::cout << h << " oz = " << h*0.0283495 << " kg." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " oz = " << h*0.0283495 << " kg." << std::endl;
            break;
        case w:
            std::cout << h << " w = " << h*604800 << " s." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " w = " << h*604800 << " s." << std::endl;
            break;
        case d:
            std::cout << h << " d = " << h*86400 << " s." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " d = " << h*86400 << " s." << std::endl;
            break;
        case hrs:
            std::cout << h << " hrs = " << h*3600 << " s." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " hrs = " << h*3600 << " s." << std::endl;
            break;
        case min:
            std::cout << h << " min = " << h*60 << " s." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " min = " << h*60 << " s." << std::endl;
            break;
        case s:
            std::cout << h << " s = " << h << " s." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " s = " << h << " s." << std::endl;
            break;
        case ms:
            std::cout << h << " ms = " << h/1000 << " s." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " ms = " << h/1000 << " s." << std::endl;
            break;
        case km:
            std::cout << h << " km = " << h*1000 << " m." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " km = " << h*1000 << " m." << std::endl;
            break;
        case m:
            std::cout << h << " m = " << h << " m." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " m = " << h << " m." << std::endl;
            break;
        case dm:
            std::cout << h << " dm = " << h/10 << " m." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " dm = " << h/10 << " m." << std::endl;
            break;
        case sm:
            std::cout << h << " sm = " << h/100 << " m." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " sm = " << h/100 << " m." << std::endl;
            break;
        case mm:
            std::cout << h << " mm = " << h/1000 << " m." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " mm = " << h/1000 << " m." << std::endl;
            break;
        case ft:
            std::cout << h << " ft = " << h*0.3048 << " m." << std::endl;
            file << now->tm_hour << ':' << now->tm_min << " - " << h << " ft = " << h*0.3048 << " m." << std::endl;
            break;
        default:
            std::cout << "Nekorrektniy vvod." << std::endl;
            break;
    }
}
}
int main(int argc, char *argv[])
{
    std::ofstream file;
    if (argc==1)
    {
        calc::menu();
        return 0;
    }
    else
    {
        setlocale(LC_ALL,"");
        std::string cs, as;
        char ch = ' ';
        int u = 1;
        while (u < argc)
        {
            double m = atof(argv[u]);
            cs = argv[u+1];
            for (unsigned int i = 0; i < cs.size(); i++) 
            {
                ch = cs.at(i);
                as+=std::to_string(ch - 'a' + 1);
            }
            long int unit = stol(as);
            calc::comcalc (unit, m);
            as.clear();
            u+=2;
        }
    }
    system("PAUSE");
}