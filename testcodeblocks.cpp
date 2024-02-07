#include<bits/stdc++.h>
using namespace std;

string encrypt(string plaintext,string keyw){

    string cipher_t = "";int ind = 0;
    for(int i = 0;plaintext[i];i++){
        cipher_t += char(( (plaintext[i] - 'a') + (keyw[ind++] - 'a')%keyw.size() )%26  + 97);
    }

    return cipher_t;
}
string decrypt(string encrypt,string keyw){
     string s = "";int ind = 0;
     for(int i = 0;encrypt[i];i++){
         s += char(  ( (encrypt[i] - 'a') - (keyw[ind++] - 'a')%keyw.size() )%26   + 97 );
     }
     return s;
}
int main(){
    string keyw,plaintext;
    cout << "enter the plain text : ";
    cin >> plaintext;
    cout << "enter the key word : ";
    cin >> keyw;
    string entext = encrypt(plaintext,keyw);
    cout << "encrypted text : " << entext << endl;
    cout << "decrypt : " << decrypt(entext,keyw) << endl;


return 0;
}
