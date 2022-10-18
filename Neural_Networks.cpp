// NeuralNetworks.cpp : This file contains the 'main' function. Program execution begins and ends there.//
#include <iostream>
#include "MLP.h"



int main() {
    srand(time(NULL));
    rand();

    cout << "\n\n--------Logic Gate Example----------------\n\n";
    cout << "OR";
    Perceptron *p = new Perceptron(2);

//    p->set_weights({10, 10, -15}); //AND
     p->set_weights({15, 15, -10}); //OR

    cout << "Gate: " << endl;
    cout << p->run({0, 0}) << endl;
    cout << p->run({0, 1}) << endl;
    cout << p->run({1, 0}) << endl;
    cout << p->run({1, 1}) << endl;

    cout << "\n\n--------HardCoded XOR Example-------------\n\n";
    MultiLayerPerceptron mlp = MultiLayerPerceptron({2,2,1});  //mlp
    mlp.set_weights({{{-10,-10,15},{15,15,-10}}, {{10,10,-15}}});
    cout << "Hard-coded weights:\n";
    mlp.print_weight();

    cout<< "XOR:" << endl;
    cout <<"0 0 = "<< mlp.run({0,0})[0]<< endl;
    cout <<"0 1 = "<< mlp.run({0,1})[0]<< endl;
    cout <<"1 0 = "<< mlp.run({1,0})[0]<< endl;
    cout <<"0 1 = "<< mlp.run({1,1})[0]<< endl;



    return 0;
}
