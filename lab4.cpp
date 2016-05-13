#include <iostream>
#include <cstring>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
void factorizar(int*,int);
int main(int argc, char const *argv[])
{
	int opciones=0;
	while(opciones!=3){
		cout<<"ingrese la opcion a la que desea ingresar\n1-factorizar\n2-conjugar\n3-salir"<<endl;
		cin>>opciones;
		if(opciones==1){
			int size=3;
			int* array=new int[size];
			cout<<"ingrese los valores A, B y C del polinomio cuadratico"<<endl;
			cout<<"ingrese el A"<<endl;
			cin>>array[0];
			cout<<"ingrese el B"<<endl;
			cin>>array[1];
			cout<<"ingrese el C"<<endl;
			cin>>array[2];
			factorizar(array,size);
			delete[] array;
		}else if(opciones==2){
			char* array=new char[35];
			cout<<"ingrese la palabra"<<endl;
			cin>>array;
			int tama=strlen(array);
			char* array2=new char[35];	
			strncpy(array2,array,tama-2);
			if (array[tama-2]=='e'&&array[tama-1]=='r'||array[tama-2]=='i'&&array[tama-1]=='r'||array[tama-2]=='a'&&array[tama-1]=='r')
			{
				if (array[tama-2]=='e')
				{
					cout<<array2<<"i"<<endl;
					cout<<array2<<"o"<<endl;
					cout<<array2<<"ere"<<endl;	
				}
				if (array[tama-2]=='i')
				{
					cout<<array2<<"i"<<endl;
					cout<<array2<<"o"<<endl;
					cout<<array2<<"ire"<<endl;	
				}
				if (array[tama-2]=='a')
				{
					cout<<array2<<"e"<<endl;
					cout<<array2<<"o"<<endl;
					cout<<array2<<"are"<<endl;	
				}
			}
			
			delete[] array2;
			delete[] array;
		}
	}
	return 0;
}
void factorizar(int* array,int size){
	double a,b;
	a=-1*(((-1*(double)array[1])+sqrt(pow((double)array[1],2)-4*(double)array[0]*(double)array[2]))/(2*(double)array[0]));
    b=-1*((-1*(double)array[1])-sqrt(pow((double)array[1],2)-4*(double)array[0]*(double)array[2]))/(2*(double)array[0]);
    cout<<array[0]<<"x^2+("<<array[1]<<")x+("<<array[2]<<")=(x+("<<a<<"))(x+("<<b<<"))"<<endl;

}