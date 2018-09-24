#include "header3.h"

linkedList::linkedList() {

    head = NULL;

}

void linkedList::Push(int data) {

    node *newNode, *T;

    newNode = new node;

    newNode->data = data;
    ;
    newNode->next = NULL;

    if (head == NULL) {

        head = newNode;

    } else {

        T = head;

        head = newNode;

        head->next = T;

    }

}

void linkedList::Pop() {

    //int forpeek =head->data;
    node *T = head;

    head = head->next;

    delete T;

}

int linkedList::Peek() {


    return head->data;

}

//int linkedList::PastPeekPopper() {             <- My attempt
    //node linkedList.unsorted = head;
   // node *C = head;
   // int forpeek;
   // while (C != NULL) {

       // if (C->data == forpeek) {
           // node *T = head;

            //head = head->next;

            //delete T;
        //}
       //C = C->next;

   // }

   // cout << endl;

//}

//int linkedList::PastPeek() {

    //int Num1,Num2,Num3,Num4,Num5;
    //unsorted.Push(Num1);
    //unsorted.Push(Num2);
    //unsorted.Push(Num3);
    //unsorted.Push(Num4);
    //unsorted.Push(Num5);

    //return head->data;
//}


void linkedList::insertionSort() {

    if (head == NULL || head->next == NULL)

        return;

    node *newNode = new node;

    newNode->data = head->data;

    newNode->next = NULL;

    node *C = head->next;


    while (C != NULL) {


        node *pointer1 = newNode;

        node *next = C->next;


        if (C->data <= newNode->data) {

            node *head1 = newNode;
            cout<<"Swapped "<<C->data<<" with "<<newNode->data<<endl;
            newNode = C;

            newNode->next = head1;

        } else {

            while (pointer1->next != NULL) {

                if (C->data > pointer1->data && C->data <= pointer1->next->data) {

                    node *next1 = pointer1->next;

                    pointer1->next = C;

                    C->next = next1;

                }

                pointer1 = pointer1->next;

            }

            if (pointer1->next == NULL && C->data > pointer1->data) {

                pointer1->next = C;

                C->next = NULL;

            }

        }

        C = next;

    }

    head = newNode;
    cout<<"Sort Finished:"<<endl;
}

void linkedList::print() {

    node *C = head;

    while (C != NULL) {

        cout << C->data << " " << endl;

        C = C->next;

    }

    cout << endl;

}

int linkedList::size() {

    node *C = head;

    int count = 0;

    while (C != NULL) {

        count++;

        C = C->next;

    }

    return count;

}