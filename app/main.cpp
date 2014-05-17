#include <iostream>
#include <converter.h>

using namespace std;

int main()
{
    Converter adder;
    int year;
    cout << "Year: ";
    cin >> year;
    cout << "Century: " << adder.yearToCentury(year) << endl;
    return 0;
}
