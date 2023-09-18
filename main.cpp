#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];                       //NELEMENTS hiányzik egy "_"
    std::cout << '1-100 ertekek duplazasa'             //"; hiánya" string + kettős aposztróf + std::endl 
    for (int i = 0;)                                   //nem teljes ciklus + 1től induljon
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)                            // hibás ciklus i<=N_ELEMENTS hiányzik 
    {
        std::cout << "Ertek:"                          //innen hiányzik az érték "b[i]"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)               //ciklusban ";" + 1től induljon amíg nem <=
    {
        atlag += b[i]                                  // ";" hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
