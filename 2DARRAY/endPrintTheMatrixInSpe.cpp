#include<iostream>
#include<vector>
using namespace std;
int main(){
    int minr,maxr,minc,maxc,tne,count=0;
    vector<int>v;
    vector<vector<int>>matrix;
     while (minr<=maxr && minc<=maxc){
        for(int j=minc;j<=maxc && count< tne ;j++){
            v.push_back(matrix[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && count<tne;i++){
            v.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && count<tne;j--){
            v.push_back(matrix[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && count<tne;i--){
            v.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
     } 
    
}