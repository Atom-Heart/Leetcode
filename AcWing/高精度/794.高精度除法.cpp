#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> div(vector<int> &A, int b, int &r){
    vector<int> C;
    r = 0;
    for(int i = A.size() - 1; i >= 0; i--){
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }
    reverse(C.begin(), C.end());
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

int main(){
    string a;
    int b;

    cin>>a>>b;

    vector<int> A;
    for(int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');

    int r;
    auto C = div(A, b, r);
    for(int i = C.size() - 1; i >= 0; i--){
        cout<<C[i];
    }
    cout<<endl<<r<<endl;

    return 0;
}

作者：CeciliaLiu
链接：https://www.acwing.com/activity/content/code/content/577438/
来源：AcWing
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。