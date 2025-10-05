// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=2; i<=10; i=i+2){
//         cout<<i<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    for(int i=1;i<=num;i=i+1){
        if(i%2==0){
        cout<<"It is a even no.: "<<i<<endl;
    }
    else{
        cout<<"This is a Odd no.:" << i<<endl;
    }
}
    
}