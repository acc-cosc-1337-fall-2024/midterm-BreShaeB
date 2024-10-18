#include<iostream>
#include "question2.h"
using std::cout; using std::cin;

int main()
{
    string dna;
    string output;
    cout<<"Enter a DNA string to be converted to RNA: \n";
    cin>>dna;
    output = transcribe_dna_into_rna(dna);
    cout<<"The corresponding RNA is: "; cout<<output; cout<<"\n";
    return 0;
}