#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--)
    {
        string input;
        string even_result = "";
        string odd_result = "";
        cin >> input;
        // cout << input;
        for(int i = 0; i < input.length(); i++)
        {
            if(i % 2 == 0)
            {
                even_result = even_result + input[i];
            }
            else
            {
                odd_result = odd_result + input[i];
            }
        }
        cout << even_result << " " << odd_result << endl;
    }   
    return 0;
}
