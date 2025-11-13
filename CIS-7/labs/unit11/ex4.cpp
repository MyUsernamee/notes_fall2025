#include<iostream>
#include <string>

using namespace std;

string Encrypt(string, int);

int main(int argc, char *argv[]) {

    string Source;
    int Key;
    cout<<"Input message:";
    getline(cin, Source);
    cout<<"Input shift key:";
    cin>>Key;
    cout<<"Encrypted: "<< Encrypt(Source, Key) << endl;

}

string Encrypt(string Source, int Key)

{
    string Capted = Source;
    for(int Current = 0; Current < Source.length(); Current++) {
        Capted[Current] += Key;
    }
    return Capted;
}
