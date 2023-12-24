# Minix3-OS
# CSE_335-Operating-systems-MINIX3-V3.2.1-Project

## Requirement 2 Setup and Execution Guide

This guide outlines the steps to fulfill Requirement 2, which involves changing scheduling algorithms of MINIX 3

1. **MFQ**
2. **Priority**
3. **Round Robin**

4. **Shortest Job First**

### Prerequisites

Before proceeding, ensure that the following prerequisites are met:

- Minix is installed on your system.
- You have access to the `/home` directory in Minix.

### Requirement 2 Steps

1. **Place Content to /home:**

    Place all Requirement 2 content in the `/home` directory of your Minix system.

2. **Running config file**

   First compile config.c using:
   ```bash
    cc config.c -o config
    ```
   then run using:
   ```bash
    ./config
    ```
   Select algorithm you want to compile



4. **Shutdown and Restart Minix:**

    After compiling the C files, shut down and restart your Minix system
   
5. **Compile C Files:**

    Open a terminal in Minix and navigate to the `/home` directory using the `cd` command:

    ```bash
    cd /home
    ```

    Compile each of the following C files using the provided command:

    ```bash
    cc longrun0.c -o longrun0
    cc mytest.c -o mytest
    cc test.c -o test
    ```

    This will generate executable files `longrun0`, `mytest`, and `test`.


6. **Run mytest:**

    Once Minix has restarted, run the compiled `mytest` executable:

    ```bash
    ./mytest
    ```

    This will execute the `mytest` program, and you should observe the expected behavior as per Requirement 2.



# File-System-Implement:
	
	cp /home/Requirment4/super.h /usr/src/minix/fs/mfs/super.h ; 
	cp /home/Requirment4/super.c /usr/src/minix/fs/mfs/super.c ; 
	cd /usr/src/releasetools ; 
	make hdboot ; 
	reboot
