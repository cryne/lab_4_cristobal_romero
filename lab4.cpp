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
		cout<<"ingrese la opcion a la que desea ingresar\n1-factorizar\n2-conjugar"<<endl;
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