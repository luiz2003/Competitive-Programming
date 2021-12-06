#include <iostream>
#include <algorithm>

using namespace std;
struct pilot{
    int id,points;
    int position[100];
};
struct point_system{
    int k;
    int pos_value[100];
};


int main(){
    int g, p;

    while (cin >> g >> p, g!=0 and p!=0)
    {
        pilot pilots[p];
        int pos;
        //define o id dos pilotos
        for (int i = 0; i < p; ++i){
            pilots[i].id= i+1;
        }
        // guarda as posições dos pilotos
        for (int i = 0; i < g; ++i){
            for(int j = 0; j <p; ++j){
                cin >> pos;
                pilots[j].position[i] = pos;
            }            
        }
        
        int s;
        cin >> s;
        point_system table[s];
        // guarda os sistemas de pontuação
        for (int i = 0; i < s; ++i){
            cin >> table[i].k;

            for (int j = 0; j < table[i].k; ++j){
                cin  >> table[i].pos_value[j];
            }
        }

        // processamento dos dados
        for (int i = 0; i < g; ++i){
            
            for (int j = 0; i < p; ++j){

                pilots[j].points += table[g].pos_value[pilots[j].position[g]]; // qual
            }
        }
    }
    
}