
#include<iostream>
#include<random>

using namespace std;

short dice()
{
    random_device r;
    default_random_engine e(r());
    uniform_int_distribution<int> uniform_dist(1, 6);
    return uniform_dist(e);
}

int main()
{
    short a = dice();
    cout << a;
    return 0;
}
