#include <iostream>
using namespace std;

int maxim(int a, int b, int c) {
    if(a > b && a > c){
    cout << "a est le plus grand." << endl;
    }else if(b > a && b > c){
    cout << "b est le plus grand." << endl;
    }else{
    cout << "c est le plus grand." << endl;
    }
    return 0;
}

int main() {
    int n1;
    int n2;
    int n3;

    cout << "a: ";
    cin >> n1;
    cout << endl;

    cout << "b: ";
  	cin >> n2;
    cout << endl;

    cout << "c: ";
  	cin >> n3;
    cout << endl;

    cout << "Entrée utilisateur : a = " << n1 << ", b = " << n2 << " et c = " << n3 << endl;
    maxim(n1, n2, n3);
    return 0;
}
