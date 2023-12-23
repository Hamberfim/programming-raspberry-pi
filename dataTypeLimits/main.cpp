#include <cfloat>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    cout << "Char ranges from " << CHAR_MIN;
    cout << " up to " << CHAR_MAX;
    cout << endl << endl;

    cout << "Short ranges from " << SHRT_MIN;
    cout << " up to " << SHRT_MAX;
    cout << endl << endl;

    cout << "Unsigned short ranges up to " << USHRT_MAX;
    cout << endl << endl;

    cout << "Int ranges from " << INT_MIN;
    cout << " up to " << INT_MAX;
    cout << endl << endl;

    cout << "Unsigned int ranges up to " << UINT_MAX;
    cout << endl << endl;

    cout << "Long int ranges from " << LONG_MIN;
    cout << " up to " << LONG_MAX;
    cout << endl << endl;

    cout << "Unsigned long int ranges up to " << ULONG_MAX;
    cout << endl << endl;

    cout << "Long long int ranges from " << LLONG_MIN;
    cout << " up to " << LLONG_MAX;
    cout << endl << endl;

    cout << "Unsigned long long int ranges up to " << ULLONG_MAX;
    cout << endl << endl;

    cout << "Float ranges from " << FLT_MIN;
    cout << " up to " << FLT_MAX;
    cout << endl << endl;

    cout << "Double ranges from " << DBL_MIN;
    cout << " up to " << DBL_MAX << endl;

    return 0;
}
