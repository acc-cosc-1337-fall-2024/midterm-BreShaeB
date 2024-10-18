#include "question2.h"

bool test_config()
{
    return true;
}

string transcribe_dna_into_rna(string dna)
{
    int total = dna.size();
    string switched = "";
    for (auto i = 0; i < total; i++)
    {
        if( dna[i] == 'T')
        {
            switched += 'U';
        }
        else if( dna[i] == 'U')
        {
            switched += 'T';
        }
        else
        {
            switched += dna[i];
        }
    }
    return switched;
}