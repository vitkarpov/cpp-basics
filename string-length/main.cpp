#include <iostream>

using namespace std;

int lengthString( const char *st )
{
    int cnt = 0;

    if (st)
        // поскольку стока всегда заканчивается
        // нулевым символом, увеличивая указатель на 1,
        // выйдем из цикла после перебора всей строки
        while (*st++)
            ++cnt;

    return cnt;
}

const char *st = "Количество символов в этой строке";

int main()
{
    cout << st << ": " << lengthString(st) << "\n";
    return 0;
}