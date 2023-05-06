#include<iostream>

void update(int n){
    n++;
}
void update01(int& n){
    n++;
}

int main(){
    int n=5;
    std :: cout<<"before "<<n<<'\n';
   
    update(n);
    std :: cout<<"after "<<n<<'\n';
    update01(n);
    std::cout<<"after "<<n;

}