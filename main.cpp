#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //NELEMENTS nincs deklarálva (N_ELEMENTS kellene)
    std::cout << '1-100 ertekek duplazasa' //szimpla idézőjel (') helyett dupla (") kell, és hiányzik a pontosvessző (;)
    for (int i = 0;) //hiányzik a ciklus feltétele és a növekmény
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //a feltétel (i) hibás, így a ciklus sosem fut le (i < N_ELEMENTS kellene)
    {
        std::cout << "Ertek:" //hiányzik a pontosvessző (;) és nem írja ki az értéket (b[i])
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //az atlag változónak nincs kezdőértéke (0 kellene)
    for (int i = 0; i < N_ELEMENTS, i++) //a vessző (,) helyett pontosvessző (;) kell a ciklusba
    {
        atlag += b[i] //hiányzik a pontosvessző (;) a sor végéről
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}