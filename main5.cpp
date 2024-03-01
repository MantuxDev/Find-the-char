//in un vettore sono memorizzati dei caratteri alfanumerici.
//stampa qunate volte compare un certo carattere dato in input

#include<iostream>
#include<cstdlib> //libreria che include system("cls")

using namespace std;

const int e=100; //dimensione massima del vettore


//prototipi
int menu();
void carica(char v[]);
void trova(char v[]);

int main(){

    int scelta;
	char v[e];


    string s1;

    do{

        scelta=menu();

        switch(scelta){
            
            case 1:{
                carica(v);
                break;
            }

            case 2:{
                trova(v);
                break;
            }

            case 0:{
                cout<<"Sei uscito dal programma"<<endl;
            }
            
        }

    }while(scelta!=0);

	
	system("pause");
	return 0;
}

int menu(){

    int scegli;

    cout<<"\t -----MENU'-----"<<endl;
    cout<<"1) Carica il vettore"<<endl;
    cout<<"2) Trova carattere"<<endl;
    cout<<"0) Termina programma"<<endl;

    cout<<endl;

    cout<<"Fai una scelta: ";
    cin>>scegli;

    cout<<endl;

    if(scegli<0 || scegli>2){
        cout<<"Scelta sbagliata"<<endl;
        cout<<endl;

        cout << "Premi un tasto per continuare...";
        cin.ignore();// pulizia buffer input
        cin.get(); 
    }

    system("cls");

    return scegli;
}

void carica(char v[]){

    int e1;

    cout<<"Quanti caratteri vuoi inserire? ";
    cin>>e1;
    cout<<endl;

    system("cls");
	
	cout<<"-----Carica vettore-----"<<endl;
	
	for(int i=0; i<e1;i++){

		cout<<"Inserisci il "<<i+1<<" elemento: ";
        cin>>v[i];
        
	}

    cout<<endl;

    cout << "Premi un tasto per continuare...";
    cin.ignore();// pulizia buffer input
    cin.get();

    system("cls");

}

void trova(char v[]){

    char cerca;
    bool x=false;
    int z=0;

    cout<<"-----Trova carattere-----"<<endl;
    cout<<"Inserisci il carattere da cercare: ";
    cin>>cerca;

    cout<<endl; 

    for(int i=0; i<e;i++){
        if(v[i]==cerca){
            z++;
            x=true;
        }
    }

    if(x==true){
        cout<<"Il carattere '"<<cerca<<"' e' presente "<<z<<" volte"<<endl;
    }
    else{
        cout<<"Il carattere '"<<cerca<<"' non e' presente"<<endl;
    }

    cout << "Premi un tasto per continuare...";
    cin.ignore();// pulizia buffer input
    cin.get(); 

    system("cls");
}