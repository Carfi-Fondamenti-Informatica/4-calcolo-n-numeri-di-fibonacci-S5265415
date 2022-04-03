#include <iostream>
using namespace std;

int main() {
   int n;
    double a=1,b=0,c;
    std::cin>>n;
    if(n<2){
        std::cout << "errore";
    }else{
    for (int i=1; i<n; i++) {
        c = a + b;
        std::cout << c << std::endl;
        b = a;
        a = c;
    }
    }
   return 0;
}
