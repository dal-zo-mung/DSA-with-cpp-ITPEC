#include <iostream>
#include <stack>


using namespace std;

// define the bracket pairs in a global 2D array!
// array indices start at 0 in the C++!!
char brackets[3][2] = {
    {'(', ')'},
    {'{', '}'},
    {'[', ']'}
};

bool is_opening_bracket(char c) {
    for (int i = 0; i < 3; i++) {
        // brackets[i][0] -> opening bracket
        if (brackets[i][0] == c) {
            return true;
        }
    }
    return false;
}

char get_closing_bracket(char c) {
    for (int i = 0; i < 3; i++) {
        // If the opening bracket matches, return its pair at index 1
        if (brackets[i][0] == c) {
            return brackets[i][1];
        }
    }
    //Null Character -> '\0'
    return '\0';
}

bool are_brackets_balanced(string expr) {
    stack<char> s; // 
    
    for (char c : expr) {
        if (is_opening_bracket(c)) {
            s.push(c);
        } else {
            // Check if stack is empty before popping to avoid errors
            if (s.empty()) {
                return false;
            }
            
            char stacked_bracket = s.top(); // Get the top element
            s.pop(); // Remove it from stack
            
            // Logic A: If expected closer != current char, it's unbalanced
            if (get_closing_bracket(stacked_bracket) != c) {
                return false;
            }
        }
    }
    
    return s.empty();
}

int main() {
    string testInput = "([])";
    
    if (are_brackets_balanced(testInput)) {
        cout << "The brackets are balanced!" << endl;
    } else {
        cout << "The brackets are NOT balanced." << endl;
    }
    
    return 0;
}