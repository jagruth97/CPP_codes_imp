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
	if (n == 1 || n == 0)
		return false;

	// Run a loop from 2 to
	// square root of n.
	for (int i = 2; i * i <= n; i++)
	{
		// If the number is divisible by i,
		// then n is not a prime number.
		if (n % i == 0)
			return false;
	}

	// Otherwise n is a prime number.
	return true;
}

bool isPrime(int n)
{ // OPTIMAL THAN PREV
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0) // current odd num or next odd num
			return false;
	}
	return true;
}

// Fastest Prime Counter/generator
// for generator, need to use DP,
// here it only counts the primes
// SIEVE OF ERANTHOSTHENES
int countPrimes(int n)
{
	vector<int> primes(n, 1); // mark all numbers as primes initially

	if (n == 0 || n == 1)
		return 0;

	for (int i = 2; i * i < n; i++)
	{
		if (primes[i]) // if it is prime
		{
			for (int j = i * i; j < n; j += i) // iterate thru all i's factors or i multiples
				primes[j] = 0;				   // mark them as non primes
		}
	}

	int count(0);
	for (int i = 2; i < n; i++) // check from 2 to n-1 values, cuz 0 & 1 are set primes as default
								// which are not needed
		if (primes[i])
			count++;

	return count;
}

// Driver code
int main()
{
	int N = 100;

	// Check for every number from 1 to N
	for (int i = 1; i <= N; i++)
	{
		// Check if current number is prime
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}

	return 0;
}
