#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &x, int &y, int &z, int &w) {

    int numbers[] = {x, y, z, w};

    for (int i = 3; i > 0; i--) {
        int j = rand() % (i + 1); 
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
    x = numbers[0];
    y = numbers[1];
    z = numbers[2];
    w = numbers[3];
}
