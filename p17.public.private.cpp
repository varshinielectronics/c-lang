#include <iostream>
using namespace std;
 class person
 {
 public:
    void hello()
    {
        cout<<"hello";
    }
 private:
    void hello2()
    {
        cout<<"hello2";
    }
 };
int main(){
    person p1;
    p1.hello();
}