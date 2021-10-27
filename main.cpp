#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926536
using namespace std;


//Funciones 

//translacion
void trsl_2D (char x1, char x2, char y1, char y2){
	cout << "Respuesta: (" << x1+x2 << "," << y1+y2 << ")" << endl; 
}

//rotacion
void RT_2D (char x1, char i, char y1){
	float Seno, Radio ,Coseno, x, y;
	if (i < 0){
	Seno = sin( Radio);
  Radio = i*PI/180;
	Coseno = cos( Radio);
	y = x1 * Seno + y1 * Coseno;
	x = x1 * Coseno - y1 * Seno ; 
	cout <<" x = " << x << endl;
	cout <<" y = " << y  << endl;
  cout << "Respuesta: (" << x << "," << y << ")" << endl;
	}else{
  Radio = i*PI/180;
	Coseno = cos( Radio);
	Seno = sin( Radio);
	x = x1 * Coseno - y1 * Seno ; 
	y = x1 * Seno + y1 * Coseno;
	cout <<" x = " << x << endl;
	cout <<" y = " << y  << endl;
  cout << "Respuesta: (" << x << "," << y << ")" << endl;
	}
}



int main(int argc, char *argv[]){ 
int O = atoi(argv[1]);
  cout << "Eliga una opcion                      " << endl;
  cout << "1-Traslacion de un punto o vector     " << endl;
  cout << "2-Rotacion de un punto o vector       " << endl;

  
 if(O==1){
  float x1, x2, y1, y2;
	x1 = atoi(argv[3]);
	y1 = atoi(argv[5]);
  x2 = atoi(argv[8]);
	y2 = atoi(argv[10]);
 
  cout << "Translacion de vectores 2D" << endl;
	cout << "Translacion: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;//operacion
  trsl_2D(atoi(argv[3]), atoi(argv[8]), atoi(argv[5]) , atoi(argv[10]));//resultado
  }
  if(O==2) {
  float x1, y1, e;
	x1 = atoi(argv[3]);
  y1 = atoi(argv[5]);
  e = atoi(argv[8]);
  
  cout << "Rotacion de vectores 2D" << endl;
  cout << "Rotacion: " << endl;
  cout <<	"(" << x1 << ") ( Cos " << e << " -Sen " << e << ") " << endl;//operacion
  cout <<	"(" << y1 << ") ( Sen " << e << "  Cos " << e <<") " << endl;//operacion
  RT_2D(atoi(argv[3]), atoi(argv[8]),  atoi(argv[5]) );//final
}
}