#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack
{
  private:
    vector<T> elements;

  public:
    void push(T const &);
    void pop();
    T top();
    bool empty();
};

template <class T>
void Stack<T>::push(T const &elem) {
    elements.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
    if (elements.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    } else {
        elements.pop_back();
    }
}

template <class T>
T Stack<T>::top() {
    if (empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

template <class T>
bool Stack<T>::empty() {
    return elements.empty();
}


int main() {
    try {
        Stack<int> intStack;       // stack of ints
        Stack<string> stringStack; // stack of strings

        // manipulate integer stack

        int num;

        cout << "Enter a number: ";
        cin >> num;



        intStack.push(num);
        cout << intStack.top() << endl;

        // manipulate string stack


        char str;

        cout <<"Enter a character: " ;
        cin >> str;

        stringStack.push(str);
        cout << stringStack.top() << std::endl;
        

        stringStack.pop();
        //stringStack.pop();
    }
    catch (exception const &ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}