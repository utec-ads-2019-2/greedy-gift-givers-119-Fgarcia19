#include <iostream>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

map<string,int> personas;


int main() {
    int cantidad_personas,monto;
    int f=0;
    vector<string> nombres;
    string nombre,actual,persona_regalar;
    int regalos,precio_regalo;
    while(cin>>cantidad_personas)
    {
        if(f!=0)
            cout<<endl;
        f++;
        for(int i=0;i<cantidad_personas;i++) {
            cin >> nombre;
            personas.insert(pair<string, int>(nombre, 0));
            nombres.push_back(nombre);
        }
        for(int i=0;i<cantidad_personas;i++)
        {
            cin>>actual>>monto>>regalos;
            if(regalos!=0) {
                precio_regalo = monto / regalos;

                for (int j = 0; j < regalos; j++) {
                    cin >> persona_regalar;
                    personas[persona_regalar] += precio_regalo;
                    personas[actual] -= precio_regalo;

                }
            }
        }
        for(auto itr:nombres)
        {
            cout<<itr<<" "<<personas[itr]<<endl;
        }

        nombres.clear();
        personas.clear();

    }
    return 0;
}