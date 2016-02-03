//Matthew Bonsall
//MVB0005
//Compiled using g++ compiler
//Hw3.cpp

#include <cstdlib>
#include <iostream>
using namespace std;


bool at_least_two_alive(bool A_alive, bool B_alive, bool C_alive){
    
    if(((A_alive && B_alive) || (A_alive && C_alive) || (B_alive && C_alive))){
        cout << "At least two people are alive!\n";
        return true;
    }
    cout << "There are not two people alive!\n";
    return false;
}

void test_two_alive(){
    bool Alive, Blive, Clive;

    Alive = true;
    Blive = true;
    Clive = true;
    cout << "Case 1: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }

    Alive = true;
    Blive = true;
    Clive = false;
    cout << "Case 2: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }
    

    Alive = true;
    Blive = false;
    Clive = true;
    cout << "Case 3: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }
    Alive = false;
    Blive = true;
    Clive = true;

    cout << "Case 4: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }

    Alive = true;
    Blive = false;
    Clive = false;
    cout << "Case 5: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(!at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }

    Alive = false;
    Blive = false;
    Clive = true;
    cout << "Case 6: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(!at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }
    
    Alive = false;
    Blive = true;
    Clive = false;

    cout << "Case 7: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(!at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }


    Alive = false;
    Blive = false;
    Clive = false;
    cout << "Case 8: Aaron Alive? : " << Alive << " Bob Alive? : " << Blive << " Charlie Alive? : " << Clive << "\n";
    if(!at_least_two_alive(Alive, Blive, Clive)){
        cout << "Test Passed\n";
    } else {
        cout << "Test Failed\n";
    }
}

void aaron_shoots(bool& Blive, bool& Clive){

}

void bob_shoots(bool& Alive, bool& Clive){

}

void charlie_shoots(bool& Alive, bool& Blive){

}
int strat1(){
	bool Aaron= true, Bob = true, Charlie = true;
	
	while(Aaron || Bob || Charlie){
		if(Aaron && (rand() % 9 + 1 < 4)){
			if(Charlie){
                Charlie = false;
			} else{
			    Bob = false;
			}
		}
        if(Bob && (rand() % 10 + 1 < 6 )){
            if(Charlie){
                Charlie = false;
            } else{
                Aaron = false;
            }
        }
        if(Charlie){
            if(Bob){
                Bob = false;
            } else{
                Aaron = false;
            }
        }
    if(!((Aaron && Bob) || (Aaron && Charlie) || (Bob && Charlie))){
            if(Aaron){
                return 0;
            }
            if(Bob){
                return 1;
            }
            if(Charlie){
                return 2;
            }
	}
    }
	return 0;
}

int main()
{
    test_two_alive();
    return 0;
}


int strat2(){


	return 0;
}
