//  Created by MH on 1/22/18.
//  Copyright © 2018 MH. All rights reserved.
#include <iostream>
#include <cstdlib>

using namespace std;

int gcd(int u, int v);

int main()
{
    int x, y, result;
    cout << "Input the first number: ";
    cin >> x;
    
    cout << "Input the second number: ";
    cin >> y;
    
    result = gcd(x,y);
    
    cout << "The GCD of " << x << " and " << y << " is " << result << endl;
    
    return 0;
}

int gcd(int u, int v)
{
    return (v != 0) ? gcd(v, u % v) : u;
}


