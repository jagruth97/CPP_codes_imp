while(diff)
{
    ans++;
    diff &= (diff-1);
}

// ans gives the total number of set bits