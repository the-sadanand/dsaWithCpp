#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(3,6);
    // size 3 with initial value all of 6
    vector<vector<int>> v2(3,vector<int>(2,8));
    // 2d vector 2 rows 3 colum value with 8
    cout<< v[0]<<"  "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<v2[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<v2.size()<< endl;
    cout<<v2[0].size();
}