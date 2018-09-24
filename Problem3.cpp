#include <iostream>
#include"linkedlist.cpp"

using namespace std;

int main() {
    int Num1, Num2, Num3, Num4, Num5;
    linkedList list;
    cout << "Please enter number1:" << endl;
    cin >> Num1;
    list.Push(Num1);
    cout << "Please enter number2:" << endl;
    cin >> Num2;
    list.Push(Num2);
    cout << "Please enter number3:" << endl;
    cin >> Num3;
    list.Push(Num3);
    cout << "Please enter number4:" << endl;
    cin >> Num4;
    list.Push(Num4);
    cout << "Please enter number5:" << endl;
    cin >> Num5;
    list.Push(Num5);

    cout << "Before sort: " << endl;

    list.print();

    list.insertionSort();

    cout << "After sort: " << endl;

    list.print();

    cout << "Peek1: " << list.Peek() << " \ndata " << list.Peek() << " has been popped" << endl;

    list.Pop();

    cout << "Peek2: " << list.Peek() << "\ndata " << list.Peek() << " has been popped" << endl;

    list.Pop();

    cout << "Peek3: " << list.Peek() << endl;

}