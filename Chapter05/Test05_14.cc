#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> sv;
    string word;
    string pre_word;
    string max_times_word;
    int max_times = 1;
    int cur_times = 1;
    while(cin >> word){
        if(word == pre_word) {
           ++cur_times;
        }else {
            if(cur_times > max_times) {
                max_times = cur_times;
                max_times_word = pre_word;
                cur_times = 1;
            }
            pre_word = word;
        }
    }
    if(max_times > 1){
        cout << "The word [" << max_times_word << "] occurred " 
            << max_times << " times." << endl;
    }else {
        cout << "No word was repeated." << endl;
    }
    return 0;
}
