#include <iostream>
using namespace std;

void duplicate_1(int Zahl) {
    Zahl *= 2;
    cout << "in Dup1 : " << Zahl << "\n";
}
void duplicate_2(int& Zahl) {
    Zahl *= 2;
    cout << "in Dup2 : " << Zahl << "\n";
}

int main()
{
    int Zahl = 1;
    cout << "Startwert: " << Zahl << "\n";
    duplicate_1(Zahl);
    cout << "nach Dup1: " << Zahl << "\n";
    duplicate_2(Zahl);
    cout << "nach Dup2: " << Zahl << "\n";
}
