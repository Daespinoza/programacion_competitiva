#include <iostream>
using namespace std;

int main() {
    
  cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	int T, N, a, b, k, r, c;
	cin >> T;
	for(int i = 0; i<T; i++){
	    k = 0;
	    r = 0;
	    c = 0;
	    cin >> N;
	    int M[N][N];
	    bool ext[N]; //¿Existe?
	    for(a = 0; a<N; a++){
	        //Al principio, todos existen
	        for(b = 0; b<N; b++ ) ext[b] = true;
	        for(b = 0; b<N; b++ ){
	            cin >> M[a][b];
	            if ( a == b ) k += M[a][b];
	            // pone en false los existentes
	            ext[ M[a][b] - 1 ] = false;
	        }
	        // calculo los r
	        for(b = 0; b<N; b++){
	            // si entra al if, es que un elemento
	            // no fue cambiado a false, osea true.
	            if( true && ext[b] ){
	                r += 1;
	                break;
	            }
	        }
	    }
	    // calculate c
	    for(b = 0; b<N; b++){
	        for(a = 0; a<N; a++ ) ext[a] = true;
	        for(a = 0; a<N; a++ ) ext[ M[a][b] - 1 ] = false;
	        
	        for(a = 0; a<N; a++) if( true && ext[a] ){
	            c += 1;
	            break;
	        }
	    }
	    
	    cout <<"Case #"<<i+1<<": "<<k;
	    cout <<" "<<r<<" "<<c;
	    if(i+1 != T) cout << "\n";
	}
