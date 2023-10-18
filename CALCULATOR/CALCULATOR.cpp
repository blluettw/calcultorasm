
#include <iostream>
extern "C" int somadepoisubtrai(int a, int b,int c);
extern "C" int multiplicar(int a, int b);
int main()
{
    int x, y, z;
    std::cout <<"[+] ESCOLHA DOIS VALORES PARA UMA SOMA , O TECEIRO VALOR VAI SUBTRAIR OS OUTROS 2 " << "\n";
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    std::cout << somadepoisubtrai(x,y,z) << "\n";
    std::cout << "\n\n\n[+] ESCOLHA DOIS VALORES PARA MULTIPLICAR" << "\n";
    std::cin >> x;
    std::cin >> y;
    std::cout << multiplicar(x,y) << "\n";
    

}

