#include <iostream>
#include <string>
#include <bitset>
using namespace std;
void string_to_binary(string s){
    int int_part;
    double dec_part;
    //int i = s.find('.', 0);
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '.')continue;
        int_part = stoi(s.substr(0, i));
        dec_part = stod(s.substr(i, s.length()-i));
    }
    //string int_string = bitset<32>(int_part).to_string();
    string int_string = "";
    while(int_part > 0){
        int digit = int_part %2;
        int_part = int_part >> 1;
        int_string = to_string(digit) + int_string;
    }
    string dec_string="";
    while(dec_part > 0){
        if(dec_string.length()>32){
            cout<<"Error";return;
        }
        dec_part = dec_part*2;
        if(dec_part >= 1){
            dec_string += "1";
            dec_part -= 1;
        }
        else{
            dec_string += "0";
        }
        
    }
    cout<<int_string<<"."<<dec_string<<endl;
}
int main()
{
    string s ="32.75";
    string_to_binary(s);
    
    return 0;
}