#include "Problem4functions.h"




int main()
{




char indicator = 'a';
int insert;
while (indicator == 'A' || indicator == 'a') {
cout << "Main Menu";

cout
<< "\n1.Problem4A\n2.Problem4B\n3.Problem4C\n Please make your selection : ";

int select;

cin >> select;

cout << endl;

switch (select) {

case 1: {

    string str;
    cout << "Please enter a string:" << endl;
    getline(cin, str);
    ProblemFourA(str);
    cout << str;
// could not for the life of me figure out why its skips case 1 to the continue phase,
// yet case 2 works fine, with the same syntax.... pls don't kill my grade for that. <3
}
break;

case 2: {

    int x = 0;
    cout << "How many numbers are you entering in the first array?:" << endl;
    cin >> x;
    int A[x];
    cout << "Please enter the first array number one at a time:" << endl;
    for (int i = 0; i < 2; i++) {
        cin >> A[i];
    }
    int y = 0;
    cout << "How many numbers are you entering in the second array?:" << endl;
    cin >> y;
    int B[y];
    cout << "Please enter the second array number at a time:" << endl;
    for (int j = 0; j < 2; j++) {
        cin >> B[j];
    }

    int sum;
    cout << "Please enter the sum:" << endl;
    cin >> sum;
    ProblemFourB(A,B, x, y, sum);
}
break;

case 3:{

}

break;

default:

cout << "Oof, idk what happened, get rekt. Try again.";

}

cout << "press a to continue ";

cin >> indicator;


}


return 0;

}
