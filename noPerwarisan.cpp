#include <iostream>
using namespace std;

class baseClass final {
    public:
    virtual void perkenalan() {
        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : public baseClass{
    public: 
    void perkenalan(){
        cout << "Hallo saya Function dari derivedClass";
    }
};

int main(){
    derivedClass a;
    a.perkenalan();

    return 0;
}