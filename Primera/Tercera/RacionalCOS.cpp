#include <iostream>

using namespace std;

class Num_Racional{
	private:
		int num, den;
    public:
		Num_Racional(int num, int den){
			this -> num = num;
            this -> den = den;
		}

        ~Num_Racional(){}

        void simplificar(){
            int d=mcd(num,den);
            num/=d;
            den/=d;
        }

        int mcd(int a, int b){
             if(b==0)
                return a;
            else
                return mcd(b,a%b);
        }

        void ingresar(){
			cout << "Ingrese el numerador: ";
            cin >> num;
			do{
			cout << "Ingrese el denominador: ";
			cin >> den;
			}while (den == 0);
			simplificar();
		}

		void imprimir(){
			cout << num << "/" << den;
		}

        void impra(){
            double a;
            a=(double)num/(double)den;
            cout<<a<<endl;
        }

        void sumar(Num_Racional A, Num_Racional B){
			this -> num = A.num*B.den +A.den*B.num;
			this -> den = A.den*B.den;
			simplificar();
		}

		void resta(Num_Racional A, Num_Racional B){
		    this -> num = A.num*B.den - A.den*B.num;
			this -> den = A.den*B.den;
			simplificar();
		}

		void multi(Num_Racional A, Num_Racional B){
		    this -> num = A.num*B.num;
			this -> den = A.den*B.den;
			simplificar();
		}

		void dividir(Num_Racional A, Num_Racional B){
		    this -> num = A.num*B.den;
			this -> den = A.den*B.num;
			simplificar();
		}
};

int main(){
	Num_Racional R1(1,1), R2(1,1), R3(1,1);
    int opc=1;
    do{
        do{
            cout<<"\n\t\tMENU\n1)Ingresar numeros\n";
            cout<<"2)Imprimir numeros racionales\n3)Imprimir numero decimales\n";
            cout<<"4)Suma\n5)Resta\n6)Multiplicacion\n7)Division\n0)Salir\n";
            cout<<"Opcion: ";
            cin>>opc;
        }while(opc<0 || opc>7);
        switch(opc){
        case 1:
            cout<<"\n\tPrimer Numero\n";
            R1.ingresar();
            cout<<"\tSegundo Numero\n";
            R2.ingresar();
            break;
        case 2:
            cout<<"\nPrimer Numero: ";
            R1.imprimir();
            cout<<"\nSegundo Numero: ";
            R2.imprimir();
            cout<<endl;
            break;
        case 3:
            cout<<"\nPrimer Numero: ";
            R1.impra();
            cout<<"Segundo Numero: ";
            R2.impra();
            break;
        case 4:
            cout<<endl;
            R1.imprimir();
            cout<<" + ";
            R2.imprimir();
            cout<<" = ";
            R3.sumar(R1,R2);
            R3.imprimir();
            cout<<endl;
            break;
        case 5:
            cout<<endl;
            R1.imprimir();
            cout<<" - ";
            R2.imprimir();
            cout<<" = ";
            R3.resta(R1,R2);
            R3.imprimir();
            cout<<endl;
            break;
        case 6:
            cout<<endl;
            R1.imprimir();
            cout<<" * ";
            R2.imprimir();
            cout<<" = ";
            R3.multi(R1,R2);
            R3.imprimir();
            cout<<endl;
            break;
        case 7:
            cout<<endl;
            R1.imprimir();
            cout<<" / ";
            R2.imprimir();
            cout<<" = ";
            R3.dividir(R1,R2);
            R3.imprimir();
            cout<<endl;
            break;
        }
    }while(opc!=0);
}

