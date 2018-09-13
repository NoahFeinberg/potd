#include <string>
#include <stack>
#include <vector>
#include <iostream>

using namespace std;

bool isValid(string input) {
    stack<char> st;
    for(char c :input){
        if(c == '('|| c == '['||c == '{'){
            st.push(c);
        }
        if(c == ')'){
            if( st.empty())
                return false;
            if(st.top() != '(')
                return false;
            st.pop();
        }
        if(c == ']'){
            if( st.empty())
                return false;
            if(st.top() != '[')
                return false;
            st.pop();
        }
        if(c == '}'){
            if( st.empty())
                return false;
            if(st.top() != '{')
                return false;
            st.pop();
        }
    }

    return st.empty();
}
/**
int main() {

    vector<string> tests =
    {
        "()",
        "()[]{}!",
        "([cs225)]",
        // add your own tests here!
    };


    cout << std::boolalpha << endl;
    for (string& t : tests) {
        cout << t << " : ";
        cout << isValid(t);
        cout << endl << endl;
    }
}
**/
