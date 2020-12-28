class Solution {
public:
    int numDecodings(string s) {
        if (s.empty()) return 0;
        int n = s.size();
        vector<int> f(n + 1, 0);
        f[0] = 1;
        for (int i = 1; i <= n; i ++ )
        {
            /*if (s[i - 1] < '0' || s[i - 1] > '9')
                return 0;
            f[i] = 0;*/
            if (s[i - 1] != '0') f[i] = f[i - 1];
            if (i > 1)
            {
                int t = (s[i-2]-'0')*10+s[i-1]-'0';
                if (t >= 10 && t <= 26)//这句话很重要
                    f[i] += f[i - 2];
            }
        }
        return f[n];
    }
};

