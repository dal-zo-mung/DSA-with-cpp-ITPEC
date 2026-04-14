#include <iostream>
#include <vector>
#include <string>
#include <sstream> //Stream string

using namespace std;

// စာကြောင်းကို စကားလုံးများအဖြစ် ခွဲထုတ်ခြင်း
vector<string> 
split(string text){
    vector<string>words;
    stringstream ss(text);
    string word;
    while (ss >> word){
        words.push_back(word);
    }
    return words;
}

void printNgrams(int n, string text){
    vector<string> words = split(text);
    int length = words.size();

    // Loop A: The starting point of each n-gram
    // We stop at (length - n) to ensure we don't go out of bounds
    for (int i = 0; i<=length-n; i++){
        string s = "";

        // Loop B: Collect 'n' words starting from index 'i'
        for (int j = i; j<i+n; j++){
            s = s + words[j] + " ";
        }

        cout<<"-> "<<s<<endl;
    }
}

int main(){
    string myText = "ITPEC includes members from 6 countries";
    
//    cout<<"--- Bigrams (n=2) ---"<<endl;
//    printNgrams(2, myText);

    cout<<"--- Trigrams (n=3) ---"<<endl;
    printNgrams(3, myText);

    return 0;
}
