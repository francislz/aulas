#include <iostream>

using namespace std;
// Tipos primitivos: int, char, wchart_t, double, float, bool

/* Caracteres especiais: 
  \n -> new line
  \t -> tab
  \b -> backspace
  \' -> single quote
  \" -> double quote
*/

int main() {
  cout << (1 == 1) << endl; // igualdade
  cout << (1 != 2) << endl; // diferença
  cout << (!true) << endl; // negacao
  cout << (1 == 1 && 2 == 2) << endl; // AND logico
  cout << (1 == 1 || 2 != 2) << endl; // OR logico

  int i = 0;
  //char[] raca = "golden";

  cin >> i;

  if (i == 0) {
    cout << "i equals to 0" << endl;
  } else if (i == 1) {
    cout << "i equals to 1" << endl;
  } else {
    cout << "i equals to other thing" << endl;
  }

  switch (i) {
    case 0: {
      cout << "case: i equals to 0" << endl;
      break;
    }
    case 1:
      cout << "case: i equals to 1" << endl;
      break;
    default:
      cout << "Default" << endl;
      break;
  }

  /* 
  if (i == 0) {
    // .....
  }

  if (i != 0) {
    // .....
  }

  if (raca == "golden"){
  }

  if ((i != 0) && (i != 2) && (i < 10)){
    // .....
  }

  if (((i != 0) && (i != 2) && (i < 10)) || (i == 99)){
    // .....
  }

  if (!((i != 0) && (i != 2) && (i < 10)) || (i == 99)){
    // .....
  } */
  return 0;
}

