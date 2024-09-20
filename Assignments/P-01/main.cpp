//Caleb Dozier.
//CMPS 2143-102.

//Program 01: Fraction Class.

#include <iostream>

using namespace std;

class Fraction {
private:
	int numerator;
  int denominator;
public:
      // Constructor.
      Fraction(int num, int den) : numerator(num), denominator(den) {
        if (denominator == 0)
          cout << "Invalid Fraction.\n";
      }

      // Overloaded addition operator.
      Fraction operator+(const Fraction& other); //Addition.

      Fraction operator-(const Fraction& other); //Subtraction.

      Fraction operator*(const Fraction& other); //Multiplication.

      Fraction operator/(const Fraction& other); //Divison.

      //Comparison.
      bool operator==(const Fraction& other) const {
        
        return numerator == other.numerator && denominator == other.denominator;
      
      }

      // Overload output operator (<<) for printing fractions
      friend ostream& operator<<(ostream& os, const Fraction& frac) {
          os << frac.numerator << "/" << frac.denominator;
          return os;
      }

      void readInput();
  };

  // Function to calculate Least Common Denominator (LCD)
  int lcd(int a, int b) {
    int lcd = 1; //Set variable & initalize to 1.
    for (int i = 1; i <= a && i <= b; i++) //Increase variable amount.
      {
        if (a % i == 0 && b % i == 0)  //Divide by variable amount to find LCD.
          lcd = i; //Set LCD to variable.
      }
    return a * b / lcd; //Return LCD.
  }

  // Function to calculate Least Common Multiple (LCM)
  int lcm(int a, int b) {
    int lcm = 1; //Set variable & initalize to 1.
    for (int i = 1; i <= a && i <= b; i++) //Increase variable amount.
      {
        if (a % i == 0 && b % i == 0)  //Divide by variable amount to find LCM.
          lcm = i; //Set LCM to variable.
      }
    return a * b / lcm; //Return LCM.
  }
//Overloaded addition operator
Fraction Fraction::operator+(const Fraction& other) {
  int newNum = numerator * other.denominator + other.numerator * denominator;
  int newDen = denominator * other.denominator;
  return Fraction(newNum, newDen);
}
  //Overloaded subtraction operator
  Fraction Fraction::operator-(const Fraction& other) {
    int newNum = numerator * other.denominator - other.numerator * denominator;
    int newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
  }

  // Overloaded multiplication operator
  Fraction Fraction::operator*(const Fraction& other) {
    int newNum = numerator * other.numerator;
    int newDen = denominator * other.denominator;
    return Fraction(newNum, newDen);
  }

  // Overloaded division operator
  Fraction Fraction::operator/(const Fraction& other) {
    int newNum = numerator * other.denominator;
    int newDen = denominator * other.numerator;
    return Fraction(newNum, newDen);
  }

//---------------------------------------------------------------------------//

  int main() {
    int LCD;
    int LCM;
    Fraction f1(1, 2);
    Fraction f2(3, 4);
  cout << "Fraction 1: " << f1 << endl;
  cout << "Fraction 2: " << f2 << endl;
  LCM = lcm(2, 4);
  LCD = lcd(2, 4);
  cout << "LCM: " << LCM << endl;
  cout << "LCD: " << LCD << endl;
  
    
    Fraction result = f1 + f2;
      cout << result << endl; // This will print the result    
      return 0;
  }