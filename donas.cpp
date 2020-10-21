#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct producto{
    string nombre;
    float price;
};

struct pedido{
    string apellido;
    vector<producto> comida;
};


void carretilla();
void md();
void mc();
void mo();




int main(){
	
	
    int opciones_menu;
    int opciones_menu2; 
    int donitas; 
    int opcionesf; 
    float td;
    float tp;
    float d;
    float p;
    
    producto comidita;
    producto donuts;    
    vector<producto> Dona;
    vector<producto> Plato;
    pedido pd;
    pedido pp;
    pedido sumad;
    pedido sumap;
    queue<pedido> cd;
    queue<pedido> cp;

    do
    {
    	
        carretilla();
        cin>>opciones_menu;
 
        switch(opciones_menu)
        {
            case 1:
            system("cls");
            do{
                mo();
                cin>>opciones_menu2;
                switch(opciones_menu2)
                {
                    case 1: 
                            cout<<"Su apellido:";
                            cin>>pd.apellido;
                            do{
                                md();
                                cin>>donitas;
                                switch(donitas)
                                {
                                    case 1:
                                    donuts.nombre = "Sencilla";
                                    donuts.price = 1.00;
                                    Dona.push_back(donuts);
                                    cout<<"Haz agregado el siguiente producto:" << donuts.nombre<<"\n";
                                    td += 1.00;
                                    break;
                                    case 2:
                                    donuts.nombre = "Rellena";
                                    donuts.price = 1.25;
                                    Dona.push_back(donuts);
                                    cout<<"Haz agregado el siguiente producto:" <<donuts.nombre<<"\n";     
                                    td += 1.25;                                          
                                    break;
                                    case 3:
                                    donuts.nombre = "Especial";
                                    donuts.price = 1.50;
                                    Dona.push_back(donuts);
                                    cout<<"Haz agregado el siguiente producto:" <<donuts.nombre<<"\n";    
                                    td += 1.50;                                           
                                    break;
                                   }
                                    pd.comida = Dona;                                  
                                }while(donitas!=4);
                                
                                system("pause");
                                cout<<endl;
                                cout<<"Cantidad total de donas:"<<pd.comida.size()<<"\n";
                                cout<<"Total de dinero:"<<td<<"\n";



                                cd.push(pd);
                                cout<<endl;
                                system("pause");

                                break;
                        case 2:  
                                cout<<"Apellido:";
                                cin>>pp.apellido;
                                do{
                                    mc();
                                    cin>> opcionesf;
                                    switch(opcionesf)
                                    {
                                        case 1:
                                        comidita.nombre = "Desayuno";
                                        comidita.price = 2.50;
                                        Plato.push_back(comidita);
                                        cout<<"Haz agregado el siguiente producto::" << comidita.nombre<<"\n";
                                        tp += 2.50;
                                        break;

                                        case 2:
                                        comidita.nombre = "Almuerzo";
                                        comidita.price = 5.00;
                                        Plato.push_back(comidita);
                                        cout<<"Haz agregado el siguiente producto::" << comidita.nombre<<"\n"; 
                                        tp += 5.00;
                                            break;
                                        case 3:
                                        comidita.nombre = "Cena";
                                        comidita.price = 3.50;
                                        Plato.push_back(comidita);
                                        cout<<"Haz agregado el siguiente producto::" << comidita.nombre<<"\n"; 
                                        tp += 3.50;
                                        break;
                                    }
                                    pp.comida = Plato;     
                                }while(opcionesf!=4);
								
                                system("pause");
                                cout<<endl;
                                cout <<"Carrito de compra" << endl;
                                cout<<"Total de Platillos agregados:"<<pp.comida.size()<<"\n";
                                cout<<"Total de compra:"<<tp<<"\n";
                                cp.push(pp);
                                cout<<endl;
                                system("pause");
                    }
                    cout<<endl<<endl; 
                    system("cls"); 
                }while(opciones_menu2!=3);
                break;
            case 2:
            	 if (cd.empty()){
                        cout<<"No posees donas en tu carrito.\n";
                    }else
                    {
                        cout<<"Pedidos realizados: \n"<<cd.size()<<"\n";
                        
                        while(!cd.empty()){
                        sumad = cd.front();
                        
                     
                        cd.pop();
                        }
                       
                }
                system("pause");
                 
                break;
            case 3:
            	if (cp.empty()){
                        cout<<"No posees platos fuertes en tu carrito.\n";
                    }
                    else
                    {
                        cout<<"Pedidos realizados: \n"<<cp.size()<<"\n";
                        
                        while(!cp.empty()){
                        sumap = cp.front();
                        
                     
                        cp.pop();
                    }
                        
            }
                system("pause");
                 
                break;
        }
        cout<<endl<<endl; 
        system("cls");    
    }while(opciones_menu!=4);

    system("pause");
    return 0;
}




void md()
{
    cout<<"Menu de Donas" << endl;
    cout<<" 1. Sencilla $1"<<endl;
    cout<<" 2. Rellena de leche $1.25"<<endl;
    cout<<" 3. Moca, caramelo $1.50"<<endl;
    cout<<" 4. Volver"<<endl;
    cout<<"\n Ingrese la dona que usted desea ";
}

void carretilla()
{
    cout<<"Caja registradora"<< endl;
    cout<<" 1. Pedido de clientes"<<endl;
    cout<<" 2. Ganancias en donas"<<endl;
    cout<<" 3. Ganancias en platos"<<endl;
    cout<<" 4. Salir                   "<<endl;
    cout<<"\n Digite una opcion ";
}
void mc()
{
    cout<<"Caja registradora: Platos Fuertes" << endl;
    cout<<" 1. Desayunos en familia $2.50"<<endl;
    cout<<" 2. Lunch Ejecutivo $5.00"<<endl;
    cout<<" 3. Cenas Tipicas $3.50"<<endl;
    cout<<" 4. Regresar"<<endl;
    cout<<"Digite una opcion: ";
}
void mo()
{
    cout<<"Seleccion entre donas y platos fuertes" << endl;
    cout<<" 1. Donas 2x1"<<endl;
    cout<<" 2. Platos fuertes"<<endl;
    cout<<" 3. Regresar"<<endl;
    cout<<"Digite una opcion: ";
}