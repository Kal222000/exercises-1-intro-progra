
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
  double multpos;
    double multnegat;
    multpos = (-B+sqrt(B*B-(4*A*C)));
    multnegat = (-B-sqrt(B*B-(4*A*C)));
    double totalpos = multpos/(2*A);
    double totalnegat = multnegat/(2*A);
    cout<<totalpos<<" "<<totalnegat;
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
    else{
        
    }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  int aux = s5.size() - 1;
    if(s1[0] == s5[aux]){
        cout << "Hemos encontrado algo!" << endl;
    }
    else{
        cout << "Aun sin suerte" << endl;
    }
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  cin >> number;
  if (number == 11235813) {
    return "Se encontro Fibonacci";
  }
  else {
    return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}