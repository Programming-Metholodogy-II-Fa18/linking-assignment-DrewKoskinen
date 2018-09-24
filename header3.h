#ifndef PM2ASSIGNMENT1_3_ADK98_HEADER_H
#define PM2ASSIGNMENT1_3_ADK98_HEADER_H

#include<iostream>

using namespace std;

struct node {

    int data;

    node *next;

};

class linkedList {

    node *head;

public:

    linkedList();

    void Push(int data);

    void Pop();

    int Peek();

    void insertionSort();

    void print();

    int size();

};
linkedList unsorted;

#endif //PM2ASSIGNMENT1_3_ADK98_HEADER_H
