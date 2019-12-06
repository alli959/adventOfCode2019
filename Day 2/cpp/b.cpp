#include <iostream>
#include <vector>


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





int main() {
    int magicNumber = 19690720;
    vi numbers;
	int value;
	char separator;
	cin >> value;
	numbers.push_back( value );
    while (cin >> separator >> value && separator == ',' ) {
        numbers.push_back( value );
    }
    for(int noun = 0; noun < 100; noun++){
        for(int verb = 0; verb < 100; verb++){
            vi temp = numbers;
            temp[1] = noun;
            temp[2] = verb;
            for(int i = 0; i<temp.size(); i+=4){
                if(temp[i] == 99){
                    if(temp[0] == magicNumber){
                        cout <<(100 * noun) + verb<< endl;;
                    }
                    break;
                }
                else{
                    if(temp[i] == 1){
                        temp[temp[i+3]] = add(temp[temp[i+1]], temp[temp[i+2]]);
                    }
                    else if(temp[i] == 2){
                        temp[temp[i+3]] = mult(temp[temp[i+1]], temp[temp[i+2]]);
                    }

                }

            }
            if(temp[0] == magicNumber){
                cout <<(100 * noun) + verb<< endl;;
            }
        }
    }
}