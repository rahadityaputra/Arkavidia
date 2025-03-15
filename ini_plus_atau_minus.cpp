#include <iostream>

using namespace std;

long long N;
long long K;

void solution( int N, long long K) {

    if ( K < 0){
        K = K - 1;
    }
    if((abs(K) > N)) {
        cout << "NO" << endl;
        return;
    }else{
    if (K == (-1 * N))
    {
        cout << "NO" << endl;
        return;
    }   
    

    if(((K - N))*-1 % 2 == 1 && K >= 0) {
        cout << "NO" << endl;
        return;
    }else if( (((K + (N-1)))*1 )% 2 == 1 && K < 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    }
} 

int main () {

    
    cin >> N >> K;

    solution(N, K);

    


}