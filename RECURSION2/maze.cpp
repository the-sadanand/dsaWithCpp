#include<iostream>
using namespace std;
int maze (int sc,int sr,int ec,int er){
    if(sc>ec || sr>er) return 0;
    if(sc==ec && sr==er) return 1;
    int right= maze (sc+1,sr,ec,er);
    int down = maze(sc,sr+1,ec,er);
    return right+down;
}
void printPath(int sc,int sr,int ec,int er,string s){
    if(sc>ec || sr>er) return ;
    if(sc==ec && sr==er) cout<<s<<endl ;
     printPath (sc+1,sr,ec,er,s+'R');
     
    printPath(sc,sr+1,ec,er,s+'D');
     
}
int main(){
    ///cout<<maze(1,1,3,3);
    printPath(1,1,3,3,"");
}