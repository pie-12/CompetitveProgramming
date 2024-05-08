    #include <iostream>
    using namespace std;

    long long power(long long a, long long b)
        {
    long long result = 1;
    for(int i = 1; i <= b; i++)
        result *= a;
    return result;
        }
    long long tim_sum (long long n, long long value)
    {
        long long sum = 0;
        for (long long i = 1; i <= n-1 ; i++)
            sum+=9*i*power(10,(i-1));
        return sum;
    }
    long long tim_so_chu_so(long long value)
    {
        long long sum = 0;
        for (long long i = 1; ; i++)
        {
            sum+=9*i*power(10,(i-1));
            if (sum >= value) return i;
        }
    }
    long long tim_vi_tri(long long new_value, long long n)
    {
        long long d = new_value % n;
        if (d == 0) return (new_value / n - 1 )%10 ;
        if (d == 1) return (new_value/(n*power(10,n - 1))) + 1 ;
        if (d != 0 && d != 1)
            {
                d = n - d + 1;
                return (new_value / (n*power(10,d - 1)))%10;
            }
    }
    int main()
    {
        long long value, new_value;
        cin >> value;
        long long n = tim_so_chu_so(value);
        if (n == 1) new_value = value + 1;
        else new_value = value - tim_sum (n, value);
        long long ans = tim_vi_tri(new_value, n);
        cout << ans ;
        return 0;
    }

