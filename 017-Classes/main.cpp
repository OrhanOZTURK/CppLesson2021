#include <iostream>
#include <vector>

using namespace std;

class istack{
public:
    void push(int val);
    void pop();
    int &top();
    const int &top()const;
    bool empty()const;
    size_t size()const;

private:
    vector<int> mvec;

};

void istack::push(int val)
{
    mvec.push_back(val);
}

void istack::pop()
{
    mvec.pop_back(); //cıakrtma
}

int & istack::top()
{
    return mvec.back();
}

const int & istack::top() const
{
    return mvec.back();
}

bool istack::empty() const
{
    return mvec.empty();
}

size_t istack::size() const
{
    return mvec.size();
}

int main()
{

    istack mystack;

    for (int i = 0; i < 10; ++i) {
        mystack.push(i);
    }

    cout << "size : " << mystack.size() << "\n";

    while (!mystack.empty()) {
        cout << mystack.top() << "\n";
        mystack.pop();
    }

}


/***************************************************/
/***************************************************/








