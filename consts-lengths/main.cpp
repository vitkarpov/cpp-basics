#include <iostream>

using namespace std;

int main()
{
    cout << "\nДлины литеральных констант (в байтах)\n";
    cout << "\nsizeof \'z\' = " << sizeof 'z' << endl;
    cout << "\nsizeof \'\\n\' = " << sizeof '\n' << endl;
    cout << "\nsizeof \'\\x0004F\' = " << sizeof '\x0004F' << endl;
    cout << "\nsizeof 5 = " << sizeof 5 << endl;
    cout << "\nsizeof 55.5 = " << sizeof 55.5 << endl;
    return 0;
}