#include <iostream>
#include <vector>
#include <chrono>

void recursive(float& sum, int start, int end)
{
    sum+=1.f/start;
    if(start==end)
        return;
    recursive(sum,start+1,end);
}

void solve_it_rec(int end_value)
{
    float sum=0.f;
    recursive(sum,1,end_value);
    std::cout << "Value in the end is:" << sum << " recursive" << std::endl;
}

void solve_it_iter(int end_value)
{
    std::vector<float> numbers;
    for(int x =1;x<=end_value;x++)
        numbers.emplace_back(1.f/x);
    float sum =0.f;
    for(auto& nb:numbers)
        sum+=nb;
    std::cout << "Value in the end is:" << sum << " iterative"<< std::endl;
}



int main() {
    solve_it_rec(1000);
    solve_it_iter(1000);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
