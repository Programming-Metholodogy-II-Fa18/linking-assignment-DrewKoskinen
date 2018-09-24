#ifndef PM2ASSIGNMENT1_4_ADK98_PROBLEM4FUNCTIONS_H
#define PM2ASSIGNMENT1_4_ADK98_PROBLEM4FUNCTIONS_H
#include <bits/stdc++.h>
using namespace std;
void ProblemFourA(string& str) {
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void ProblemFourB(int A[],int B[],int x,int y,int sum){

    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            if(A[i]+B[j]==sum){
                cout<<"("<<A[i]<<","<<B[j]<<")"<<endl;
            }
        }
    }
}

void ProblemFourC(int )

#endif //PM2ASSIGNMENT1_4_ADK98_PROBLEM4FUNCTIONS_H
