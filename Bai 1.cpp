#include<iostream>
#include<cmath>
using namespace std;
bool checkmate(int a[] , int b[],int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(a[i] == a[j]){
                return true ;
                break;
            }
            if(b[i] == b[j]){
                return true ;
                break;
            }
            if(abs(a[i] - a[j]) - abs(b[i] - b[j]) == 0){
                return true ;
                break;
            }
        }
    }
    return false ;
}
int main(){
    int n ;
    cin >> n ;
    int a[n+1];
    int b[n+1];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] >> b[i];
    }
    if(checkmate(a,b,n) == true) {
        cout <<"yes";
    }
    else {
        cout <<"no";
    }
    return 0;
}
