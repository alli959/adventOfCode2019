#include <iostream>
#include <vector>
#include <map>


using namespace std;
typedef vector<int> vi;


int add(int first, int second){
	int value = first + second;
	return value;
}

int mult(int first, int second){
	int value = first * second;
	return value;
}


int main ()
{
	vi numbers;
	int value;
	char separator;
	cin >> value;
	numbers.push_back( value );
    while (cin >> separator >> value && separator == ',' ) {
        numbers.push_back( value );
    }
	numbers[1] = 12;
	numbers[2] = 2;
	for(int i = 0; i<numbers.size(); i+=4){
		if(numbers[i] == 99){
			break;
		}
		else{
			if(numbers[i] == 1){
				numbers[numbers[i+3]] = add(numbers[numbers[i+1]], numbers[numbers[i+2]]);
			}
			else if(numbers[i] == 2){
				numbers[numbers[i+3]] = mult(numbers[numbers[i+1]], numbers[numbers[i+2]]);
			}

		}
	}
	cout << numbers[0] << endl;

	return 0;
}