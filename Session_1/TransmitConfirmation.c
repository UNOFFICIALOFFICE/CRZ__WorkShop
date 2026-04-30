#include <stdbool.h>

extern int VolatileFunc();
void userfunction(int * shared_mem);
bool TXConf_Status = false;

void userfunction(int* const TxConfReg_ADDR){

    /*Please complete the code by following below step:
    1. Declare an integer pointer and assign it with TxConfReg_ADDR which is given as the argument.
        INFO :TxConfReg_ADDR is a controller register address which will be set to 1 by the controller
        once message transmitted successfully.
    2. Initialise the value at pointer to 0
    2. Wait till value at ptr is set to 1 by using while or any other loop. // 
    3. If ptr sets to 1 then come out of the loop and make TXConf_Status as true

    Note : Please use the same name TXConf_Status for setting the status to true*/
}

int main(){
    VolatileFunc();
}