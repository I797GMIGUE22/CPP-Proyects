//     cout << myAge << " es menor que " << yourAge << "?\n"; es similar a printf("%d es menor que %d ?\n", myAge, yourAge);

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>

using namespace std;

int main() {
    int yourAge;
    const int myAge = 16;

    printf("Insert your age  > ");
    cin >> yourAge;
    cout << "\nMy age is: " << myAge << "\nYour age is: " << yourAge << "\n";
    printf("\n%d es menor que %d ?\n", myAge, yourAge);
    getch();

    if (myAge < yourAge) printf("\nSi, %d es menor que %d :v", myAge, yourAge);
    else if (myAge > yourAge) printf("\nNo, %d es mayor que %d >:D", myAge, yourAge);
    else printf("\nSon iguales ._.");

}
