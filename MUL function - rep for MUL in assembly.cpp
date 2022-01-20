#include <iostream>
using namespace std;

int MUL (int a, int b);

int main() {
  int a = 7, b = 8;
  cout << MUL (a, b) << "\n";
} 

int MUL (int a, int b){
  int c = 0;
  for (int i = b; i > 0; i--){
    c = c + a;
  }
  return c;
}
