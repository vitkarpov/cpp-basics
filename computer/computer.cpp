#include <iostream>

using std::cout;

/**
 * Проверка типа компьютера через обращение
 * к байту памяти
 */
int main() {
    char *Computer = (char *)0xF000FFFE;

    cout << "Программа выполняется на ";
    switch (*Computer) {
        case (char)0xFF: cout << "ПЭВМ типа IBM PC.";
                         break;
        case (char)0xFE: cout << "ПЭВМ типа IBM PC XT.";
                         break;
        case (char)0xFD: cout << "ПЭВМ типа IBM PCjr.";
                         break;
        case (char)0xFC: cout << "ПЭВМ типа IMB PC AT.";
                         break;
        default:         cout << "ПЭВМ неизвестного типа.";
    }
}