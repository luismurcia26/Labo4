#include <iostream>
using namespace std;
int main()
{
    string tipo;
    cout << "¿eres malo, animal o persona?";
    cin >> tipo;
    if (tipo == "malo")
    {

        cout << "Kraven te esta cazando" << endl;
    }

    else if (tipo == "Animal")
    {

        cout << "Kraven te protejería" << endl;
    }

    else if (tipo == "persona")
    {

        cout << "Kraven te saluda" << endl;
    }

    

        return 0;
    }