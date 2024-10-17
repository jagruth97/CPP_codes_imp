int Sum_of_digits(int n)
{
    int num = n;
    if (num < 10)
        return n;

    return 1 + (num - 1) % 9;
}

// in O(1) time, find the sum of digits of a number untill its sum is a single digit