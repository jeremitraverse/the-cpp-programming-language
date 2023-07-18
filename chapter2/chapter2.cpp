#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

constexpr double square(double x) {
    return x * x;
}

void print_square(double x) {
    cout << "the square of " << x << " is " << square(x) << "\n";
}

// Conditionals
bool accept1()
{
    cout << "Do you accept to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'y') return true;
    return false;
}

bool accept2()
{
    cout << "Do you accept to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;

    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that as a no.\n";
            return false;
    }
}

bool accept3()
{
    int tries = 1;
    while (tries < 4) {
        cout << "Do you accept to proceed (y or n)?\n";

        char answer = 0;
        cin >> answer;

        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "Sorry, I don't understand that.\n";
                ++tries;
        }
    }

    return false;
}

// Loops
void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10];

    for (auto i=0; i!=10;++i) {
        v2[i] = v1[i];
    }
}

void print()
{
    int v[10] = {0,1,2,3,4,5,6,7,8,9};

    for (auto x : v) {
        cout << x << '\n';
    }

    for (auto x : {10, 21, 32, 43, 54, 65}) {
        cout << x << '\n';
    }
}

void increment()
{
    int v[10] = {00,10,20,30,40,50,60,70,80,90};
    int* p = v; 

    // Will not permanently modify the value of v[x]
    for (auto r : v) {
        cout << r << '\n';
    }

    // auto& r is a reference to the value that holds v[x]
    // Will permanently modify the value of v[x]
    for (auto& x : v) {
        ++x;
        cout << x << '\n';
    }

    cout << ++p << '\n';
    cout << &p[0] << '\n';
}

/// @brief Count the number of occurence of x in p
/// @param p 
/// @param x 
/// @return Number of occurence of x in p
int count_x(char* p, char x)
{
    if (p==nullptr) return 0;
    int count = 0;
    for(; *p!=0;++p) {
        if (*p==x)
            ++count;
    }
    

    return count;
}

/*
struct Vector {
    int sz; // number of elements
    double* elem; // pointer to elements
};

void vector_init(Vector& v, int s)
{
    v.elem = new double[s]; // new allocate memory from the heap
    v.sz = s;
}

*/
/*
class Vector {
    public:
        Vector(int s) :elem{new double[s]}, sz{s} {}
        double& operator[](int i) { return elem[i]; } // function/operator overloading
        int size() { return sz; }
    private:
        double* elem; // pointer to the elements
        int sz;
};

*/

double read_and_sum(int s)
{
    Vector v(s);
    for (int i=0; i!=s; ++i)
        cin>>v[i]; // read into elements
    
    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v[i];
    
    return sum;
}

void fill_vector(Vector v)
{
    for (int i=0; i!=v.size(); ++i)
        cin>>v[i]; // read into elements
}

double sqrt_sum(Vector& v)
{
    double sum=0;
    for(auto i=0;i!=v.size();++i) {
        sum+=sqrt(v[i]);
    }
    return sum;
}

enum class Color { red, gray, green };
enum class Traffic_light { green, yellow, red };

Color col = Color::red;
Traffic_light light = Traffic_light::red;

void f(Vector& v)
{
    //..
    try {
        v[v.size() + 1] = 7;
    }
    catch(out_of_range) {
        // Handle error
        cerr << "Error: Couldn't access vector at that position\n";
    }
}

int main() {
    // increment();
    // char chars[5] = {'a', 'b', 'c', 'a', 'a'};
    // cout << count_x(chars, 'a') << '\n';
    Vector v(5);
    fill_vector(v);
    cout<<sqrt_sum(v)<<'\n';
    cout<<&v<<'\n';
    static_assert(sizeof(int)<=4, "Size of int is too small on that system"); // Assertion at runtime
    f(v);
}