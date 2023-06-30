#include "Iobserver.h"
#include "Iobservant.h"
#include <bits/stdc++.h>
using namespace std;
class sub: public Iobserver{
    public:
    Iobservant *OB;
    void AddObservant(Iobservant *ob){
        OB = ob;
    }
    void update(){
        cout << "The new value is: " <<this->OB->getState() << endl;
    }
};