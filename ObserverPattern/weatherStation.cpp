#include "Iobservant.h"
#include "Iobserver.h"
#include <bits/stdc++.h>
using namespace std;
class Weather: public Iobservant{
    private:
        int state = 0;
    public:
    vector<Iobserver*> ob;
    void Register(Iobserver* Ob){
        ob.push_back(Ob);
    }
    void notify(){
        for(auto O: ob){
            O->update();
        }
    }
    int getState(){
        return state;
    }
    void changeState(int newValue){
        state = newValue;
        this->notify();
    }

};