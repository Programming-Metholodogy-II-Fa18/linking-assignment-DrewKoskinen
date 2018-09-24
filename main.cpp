#include <iostream>
#include "header.h"

int main () {
    ArbitraryQueue<int> C;
    char indicator = 'a';
    int insert;
    while (indicator == 'a' || indicator == 'A') {
        cout << "Main Menu";

        cout
                << "\n1.Add to head\n2.Add to tail\n3.Delete from head\n4.Delete from tail\n5.Traverse\n6.Display Arbitrary Queue\n\n Please make your selection : ";

        int select;

        cin >> select;

        cout << endl;

        switch (select) {

            case 1:

                cout << "Enter object to be added : ";

                cin >> insert;

                Node<int> *n1;

                n1 = new Node<int>(insert, 0);

                C.Push(n1);

                cout << "\nObject added\n";

                break;

            case 2:

                cout << "Enter Object to be added : ";

                cin >> insert;

                Node<int> *n2;

                n2 = new Node<int>(insert, 0);

                C.Enqueue(n2);

                cout << "\nObject added\n";

                break;

            case 3:

                try {

                    C.Pop();

                    cout << "\nObject deleted\n";

                }
                catch (const char *error) {
                    cout << "Error: " << error << endl;
                }
                break;

            case 4:

                try {
                    C.Dequeue();

                    cout << "\nObject deleted\n";
                }
                catch (const char *error) {
                    cout << "Error: " << error << endl;
                }
                break;

            case 5:

                int x3;

                cout << "Enter position to traverse: ";
                cin >> x3;

                try {
                    cout << "Object at position " << x3 << " is " << C.traverse(x3) << endl;
                }

                catch (const char *error) {
                    cout << "Error: " << error << endl;

                }
                break;

            case 6:

                C.showQueue();

                break;

            default:

                cout << "Oof, idk what happened, get rekt. Try again.";

        }

        cout << "press a to continue : ";

        cin >> indicator;


    }


    return 0;

}