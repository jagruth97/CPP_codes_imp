int gcdfind(int a, int b) 
    { 
        while (b != 0) 
        {
        int temp = b;
        b = a % b;
        a = temp;
        }
        return a;
    }

int lcmfind(int a, int b){

    return (a*b)/gcdfind(a,b);
}