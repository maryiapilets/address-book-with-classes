#include "MetodyPomocnicze.h"
#include <sstream>

using namespace std;


string MetodyPomocnicze::konwersjaIntNaString(int liczba)
    {
        ostringstream ss;
        ss << liczba;
        string str = ss.str();
        return str;
    }

string MetodyPomocnicze::wczytajLinie()
{
    string wejscie = "";
    getline(cin, wejscie);
    return wejscie;
}

