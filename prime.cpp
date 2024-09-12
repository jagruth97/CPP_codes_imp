// C++ program to display 
// Prime numbers till N
#include <bits/stdc++.h>
using namespace std;

// Function to check if a given 
// number is prime
bool isPrime1(int n)
{
// Since 0 and 1 is not prime 
// return false.
if(n == 1 || n == 0)return false;

// Run a loop from 2 to 
// square root of n.
for(int i = 2; i * i <= n; i++)
{
	// If the number is divisible by i, 
	// then n is not a prime number.
	if(n % i == 0)return false;
}

// Otherwise n is a prime number.
return true;
}

bool isPrime(int n){ // OPTIMAL THAN PREV
    if (n <= 1) 
        return false;
    if (n <= 3) 
        return true;
    if (n % 2 == 0 || n % 3 == 0) 
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) // current odd num or next odd num
            return false;
    }
    return true;
}



// Driver code
int main()
{
	int N = 100;

	// Check for every number from 1 to N
	for(int i = 1; i <= N; i++)
	{
	// Check if current number is prime
	if(isPrime(i)) 
	{
		cout << i << " ";
	}
	}

	return 0;
}
