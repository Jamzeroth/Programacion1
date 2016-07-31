/*ofstream archivo;  // objeto de la clase ofstream

    archivo.open("datos.txt");

    archivo << "Primera línea de texto" << endl;
    archivo << "Segunda línea de texto" << endl;
    archivo << "Última línea de texto" << endl;

    archivo.close();*/

    #include <iostream>
    #include <fstream>
    using namespace std;

class Punto{
    private:
        int x,y;
    public:
        Punto (int x, int y){
            this->x=x;
            this->y=y;
        }
        friend ostream& operator<<(ostream& os, Punto& p){
                os<<"( "<<p.x<<" , "<<p.y<<" )";

        }
        friend istream& operator>> (istream &in,Punto& p){
            ofstream archivo;  // objeto de la clase ofstream
            archivo.open("c:/ArchivosC/PuntoInfo.txt",ios::app);
            archivo << p.x;
            archivo << p.y << endl;
            archivo.close();
        }
};
int main(){
    Punto P1(4,5);
    Punto P2(7,8);
    cin>>P1;
    cin>>P2;
    cout<<P1;
    cout<<P2;
    return 0;
}
