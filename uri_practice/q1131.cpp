#include<iostream>
using namespace std;

int main(){
    int x , y , a;
    int inter = 0;
    int gremio = 0;
    int grenais = 0;
    int empates = 0;
    while(true){
        if ( a == 2){
            break;
        }
        
        cin>>x>>y;
        if ( x > y){
            inter++;
            grenais++;
        }
        if( y > x){
            gremio++;
            grenais++;
        }
        if( x == y){
            empates++;
            grenais++;
        }
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        while(true){
            cin>>a;
            if ( a == 1){
                cin>>x>>y;
                if ( x > y){
                    inter++;
                    grenais++;
                }
                if( y > x){
                    gremio++;
                    grenais++;
                }
                if( x == y){
                    empates++;
                    grenais++;
                }
                cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            }
            if ( a == 2){
                break;
            }
        }

    }
    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<inter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<empates<<endl;
    if( inter > gremio){
        cout<<"Inter venceu mais"<<endl;
    }else if ( inter < gremio){
        cout<<"Gremio venceu mais"<<endl;
    }else if ( inter == gremio){
        cout<<"Não houve vencedor"<<endl;
    }

    return 0;
}