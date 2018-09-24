#ifndef PM2ASSIGMENT1ADK98_HEADER_H
#define PM2ASSIGMENT1ADK98_HEADER_H

#include <crtdbg.h>
#include <string>
#include <iostream>

using namespace std;

template<class N>
class Node {
public:
    Node *next;
    N data;

    Node() {
        data = 0;
        next = 0;
    }

    Node(N x1, Node *x2 = 0) {
        data = x1;
        next = x2;
    }

    ~Node() {
        next = 0;
    }
};

template<class N>

class ArbitraryQueue {
public:
    Node<N> *head, *tail;

    ArbitraryQueue() {
        head, tail = 0;
    }

    ~ArbitraryQueue() {
        for (Node<N> *x3; !isEmpty();) {
            x3 = head->next;
            delete head;
            head = x3;
        }
    }

    bool isEmpty() {
        if (head == 0)
            return true;
        else
            return false;
    }

    void Push(Node<N> *x1) {
        if (tail == 0) {
            head, tail = x1;
        } else {
            Node<N> *x4 = head;
            head = x1;
            head->next = x4;
        }
    }

    void Enqueue(Node<N> *x1) {
        if (tail == 0) {
            head, tail = x1;
        } else {
            tail->next = x1;
            tail = tail->next;
        }
    }

    void Pop() {
        if (head == 0)
            throw "Error, list empty.";

        int x1 = head->data;
        Node<N> *x4 = head;
        if (head == tail) {
            head, tail = 0;
        } else {
            head = head->next;
        }
        delete x4;
        cout << x1 << "has been deleted" << endl;
    }

    void Dequeue() {
        if (head == 0)
            throw "Error, list empty.";

        int x1 = tail->data;

        if (head == tail) {
            delete head;
            head = tail = 0;
        } else {
            Node<N> *x3;
            for (x3 = head; x3->next != tail; x3 = x3->next);
            delete tail;
            tail = x3;
            tail->next = 0;
        }
        cout << x1 << "has been deleted" << endl;
    }

    N traverse(int pos) {

        Node<N> *x4 = head;

        for (int i = 0; i < pos - 1; i++) {

            if (x4 == 0)

                throw "Nah. that ain't it, out of bound";

            x4 = x4->next;

        }

        return x4->data;

    }

    void showQueue() {


        Node<N> *x4;


        for (x4 = head; x4 != NULL; x4 = x4->next)


            cout << x4->data << " " << endl;


    }

};

#endif //PM2ASSIGMENT1ADK98_HEADER_H
