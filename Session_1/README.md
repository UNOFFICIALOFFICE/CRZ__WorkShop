# CrazzyController
~~Software for Hardware~~ Software is a Hardware.

This repo demonstrates the use case of the volatile keyword through a device driver example.

**Files Overview:**
| File Name | Description |
|-----------|-------------|
| `Driver.o` | Driver object file. Contains the compiled driver implementation; the provided driver code is currently incomplete and requires the transmit confirmation functionality to be implemented. |
| `TransmitConfirmation.c` | Source file where the `TxConfirmation()` function needs to be implemented to complete the driver functionality and handle transmission confirmation callbacks. |
| `crazycontroller` | Executable file that mimics or emulates the hardware controller behavior, allowing the driver to be tested without actual hardware. |

**Steps to Run:**
1. Write the TransmitConfirmation.c file as outlined.
2. Run following command.

   ```bash
   i. gcc -O3 -o TransmitConfirmation.o -c TransmitConfirmation.c
   ```
      - which compiles .c file and optimizes it.

   ```bash  
   ii. gcc Driver.o TransmitConfirmation.o -o Driver
   ```
      - which links both Driver.o and TransmitConfirmation.o object files and creats an executable file.
        
4. Open two terminals:
5. Run `./crazycontroller` command in one terminal.
6. Run `./Driver` command in the other.
7. Modify the pointer in TransmitConfirmation.c to volatile, recompile, and rerun.
![image](https://github.com/user-attachments/assets/e5829c0c-32a7-4183-85b6-3c6646fcd937)

**Observation** 
1. With a non-volatile pointer, the while loop does not terminate.
2. With a volatile pointer, the code executed as expected.

But why !!!

**Hint**(AI generated image + some edits)
![image](https://github.com/user-attachments/assets/5a6c5801-5376-42cb-a5fb-5d58a891c2c2)

## **Impotant INFO:**

This example is just a use case of volatile keyword but the real purpose of the volatile keyword is ,it tells the processor to always read the variable’s value directly from memory rather than using a cached copy. This ensures that changes made by hardware or other threads are immediately visible to the program.

