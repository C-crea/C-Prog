#include <iostream>

using namespace std;
void fibonacci(int n){
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for (int i = 2; i < n; i++) {
        fib[i]=fib[i-1]+ fib[i-2];
    }
    cout<<"Suite de FIBONACCI:"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<fib[i]<<"";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"entrer les nombres:";
    cin>>n;
    fibonacci(n);
}
