#include <bits/stdc++.h>
#include "weatherStation.cpp"
#include "subscriber.cpp"
using namespace std;

int main(){
    Weather Station;
    sub sub1, sub2;
    sub1.AddObservant(&Station);
    sub2.AddObservant(&Station);
    Station.Register(&sub1);
    Station.Register(&sub2);
    Station.changeState(2);
    return 0;
}