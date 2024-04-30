
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
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if (r < 0) {
        cout << "Error: Radius cannot be negative.";
    }
    else {
    double number = (r * r); 
    double pi = 3.14;
    double Radius = (4 * pi * number);
    cout << Radius;    
    }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
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