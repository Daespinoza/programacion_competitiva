#include <iostream>
#include <string>
using namespace std;

int main() {
	
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	
	string p;
	char l;
	int psize, flag = 0;
	
	while(getline(cin, p)){
		psize = p.size();
		
		for(int i = 0; i < psize; i++){
			l = p[i];
			
			if( int(l) == 34 ) flag++;
			if( int(l) == 34 ){
				if (flag <= 1) cout << "``";
				else {
					cout << "\'" << "\'";
					flag = 0;
				};
			}
			else cout << l ;
			
		}
		
		cout << "\n";
	}
	
	return 0;
}
