
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  if (s1 <= s2 && s1 <= s3){
        cout << s1;
    } 
    else if (s2 <= s1 && s2 <= s3){
        cout << s2;
    } 
    else if (s3 <= s1 && s3 <= s2){
        cout << s3;
    }
}

void exercise_2(double A, double B, double C) {
    if(A == 0 && B == 0){
      cout << "";
    }
  else if(A == 0){
    cout << -C/B << endl;
  }
    else {
    double contenido_raiz = (B*B-(4*A*C));
  if(contenido_raiz < 0){
    cout << "";
  }
  else {
  double positivo = (-B+sqrt(contenido_raiz));
  double negativo = (-B-sqrt(contenido_raiz));
  double resultado_positivo = positivo/(2*A);
  double resultado_negativo = negativo/(2*A);
  if(resultado_positivo == resultado_negativo){
      cout << resultado_positivo << endl;
  }
  else {
      cout << resultado_positivo << " " << resultado_negativo << endl;
  }   
  }
    }
  }

void exercise_3(int a, int b) {
  if (b == 0) {
      string impo = "Impossible";
      cout << impo << endl;
  } 
  else {
    int result = a / b;
      cout << result << endl;
}
}

void exercise_4(double n, double a, double b, double x, double y) {
  if (n > b) {
      double resulty = (n - (n/100 * y));
      cout << resulty << endl;
  }
  else if (n > a) {
      double resultx = (n - (n/100 * x));
      cout << resultx << endl;
  } 
  else {
      cout << n << endl;
  }
}

void exercise_5(char character) {
  if(character >= 'a' && character <= 'z'){
        cout << "lower-case alphabet" << endl;
    }
    else if(character >= 'A' && character <= 'Z'){
        cout << "upper-case alphabet" << endl;
    }
    else{
        cout << "not an alphabet" << endl;
    }
}

void exercise_6(int number) {
  switch(number){
      case 1: cout<<"Monday"<<endl;
      break;
      case 2: cout<<"Tuesday"<<endl;
      break;
      case 3: cout<<"Wednesday"<<endl;
      break;
      case 4: cout<<"Thursday"<<endl;
      break;
      case 5: cout<<"Friday"<<endl;
      break;
      case 6: cout<<"Saturday"<<endl;
      break;
      case 7: cout<<"Sunday"<<endl;
      break;
      default: cout<<"Invalid input"<<endl;
      break;
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r < 0) {
        cout << "Error: Radius cannot be negative." << endl;
    }
    else {
    double number = (r * r); 
    double pi = 3.14;
    double Radius = (4 * pi * number);
    cout << Radius << endl;    
    }
}

void exercise_8(long int seconds) {
    if(seconds < 0){
        cout << "Error: Input seconds cannot be negative." << endl;
    }
    else if(seconds == 0){
        cout << "00:00:00" << endl;
    }
    else{
        string reloj;
  string hora = "0";
  string minuto = ":0";
  string segundo = ":";
  int x = seconds/3600;
    int y = seconds%3600;
    int z = y/60;
    int b = y%60;
    hora += to_string(x);
   minuto += to_string(z);
    segundo += to_string(b);
    reloj += hora;
    reloj += minuto;
    if(segundo.size() == 2){
        segundo.resize(3, '0');
        reloj += segundo;
        cout << reloj << endl;
    }
    else {
      reloj += segundo;
      cout << reloj << endl;
    }
    }
    }

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  int auxl = s5.size() - 1;
  string aux;
    aux += s1[0];
    aux += s2[0];
    aux += s3[0];
    aux += s4[0];
    aux += s5[0];
    if(s1[0] == s5[auxl]){
      cout << aux << endl;
      return "Hemos encontrado algo!";
    }
    else{
      cout << aux << endl;
      return "Aun sin suerte";
    }
}

int exercise_10(int a, int b) {
  int result;
      string z;
  if( a < 0 || b < 0){
      cout << 0 << endl;
      return 0;
  }
  else{
      int aux = a + b;
      z = to_string(aux);
      result = aux * z.size();
      cout << result << endl;
      return result;
  }
}

string exercise_11(int number) {
  if (number == 11235813) {
    return "Se encontro a Fibonacci";
  }
  else {
    return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  if(color2 == color4 && numb2 == numb4 && color3 == color4 && numb3 == numb4 && color1 == color4 && numb1 == numb4){
      cout << 1 << endl;
      cout << 2 << endl;
      cout << 3 << endl;
  }
  else if(color2 == color4 && numb2 == numb4){
      cout << 2 << endl;
  }
  else if(color3 == color4 && numb3 == numb4){
      cout << 3 << endl;
  }
  else if(numb1 == numb4){
      cout << 1 << endl;
  }
  else if(color2 != color4 && color3 != color4 && color1 != color4){
      cout << "";
  }
  else if(color1 == color4 && color2 == color4){
      cout << 1 << endl;
      cout << 2 << endl;
  }
  else if(color2 == color4 && color3 == color4){
      cout << 2 << endl;
      cout << 3 << endl;
  }
  else if(color3 == color4 && color1 == color4){
    cout << 1 << endl;
    cout << 3 << endl;
  }
}

string exercise_13(int age, int years_of_experience) {
  if(age < 18){
      return "Not eligible";
  }
  else{
      if(years_of_experience < 3){
          return "Project coordinator";
      }
      else if(years_of_experience >= 3 && years_of_experience < 5){
          return "Project manager";
      }
      else{
          return "Senior project manager";
      }
  }
}

string exercise_14(int number_of_docs) {
  if(number_of_docs <= 0){
      return "No se encontraron documentos";
  }
  else if(number_of_docs == 1){
      return "Se encontro un documento";
  }
  else{
      string x = to_string(number_of_docs);
      x += " documentos encontrados";
      return x;
  }
}

void exercise_15(int a, int b, int c) {
  int aux1 = c;
  int aux2 = a;
  int aux3 = b;
  cout << "Los valores son: a = 51 b = 876 y c = 235" << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;
  cout << "Los valores despues de la permutacion son: a = 235 b = 51 c = 876" << endl;
}

void exercise_16(int debut, int fin) {
  if(debut < 0 || debut > 24 || fin < 0 || fin > 24){
      cout << "Las horas deben estar entre 0 y 24!" << endl;
  }
  else if(debut == fin){
      cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
  }
  else if(debut > fin){
      cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
  }
  else{
      if(debut >= 0 && fin <= 7){
          int aux = fin - debut;
          int result = aux * 1;
          string aux1 = to_string(aux);
          aux1 += " hora(s) con el tarifario de 1 boliviano(s)";
          cout << "Haz alquilado una bicicleta por" << endl;
          cout << aux1 << endl;
          cout << "El monto total a pagar es de " << result << " boliviano(s)." << endl;
      }
      else if(debut >= 17 && fin <= 24){
          int aux = fin - debut;
          int result = aux * 1;
          string aux1 = to_string(aux);
          aux1 += " hora(s) con el tarifario de 1 boliviano(s)";
          cout << "Haz alquilado una bicicleta por" << endl;
          cout << aux1 << endl;
          cout << "El monto total a pagar es de " << result << " boliviano(s)." << endl;
      }
      else if(debut >= 7 && fin <= 17){
          int aux = fin - debut;
          int result = aux * 2;
          string aux1 = to_string(aux);
          aux1 += " hora(s) con el tarifario de 2 boliviano(s)";
          cout << "Haz alquilado una bicicleta por" << endl;
          cout << aux1 << endl;
          cout << "El monto total a pagar es de " << result << " boliviano(s)." << endl;
      }
      else{
          unsigned int aux0 = 7 - debut;
          int aux1 = 7 - debut;
          unsigned int aux2 = 10 - aux1;
          int aux3 = 10 - aux1;
          unsigned int aux4 = fin - aux1 - aux3;
          int suma = aux0 + aux4;
          int result = (aux2 * 2) + suma; 
          string pos1 = to_string(suma);
          string pos2 = to_string(aux2);
          pos1 += " hora(s) con el tarifario de 1 boliviano(s)";
          pos2 += " hora(s) con el tarifario de 2 boliviano(s)";
          cout << "Haz alquilado una bicicleta por" << endl;
          cout << pos1 << endl;
          cout << pos2 << endl;
          cout << "El monto total a pagar es de " << result << " boliviano(s)." << endl;
          }
      }
  }