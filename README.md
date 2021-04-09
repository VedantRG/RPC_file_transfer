# RPC_file_transfer
Remote Procedure Call to transfer file from client to server in the form of argument.

## Detail Description
The project aims at Distributed Computation implementation of file transfer using RPC.

I have implemented the project as a part of my college assignemnt. The project helped me work with rpcgen an interface generator pre-compiler. 

### Objectives Achieved 
  1. Transferring text document from client to server.
  2. Data to be transfered in chunks.
  3. Checksum for error handling.

### Steps to compile code
  1. Check if rpcbind is installed in your linus system using the command $rpcinfo. (Make sure to use a stable version of linux. I tried to compile my code on Ubuntu 20.10 bus was unsuccessful as some rpc header files are not available in the version of ububtu, so I generated a virtual machine with Ubuntu 18.04 for the task) 
  2. If not installed then install rpcgen with the following script $sudo apt-get install rpcbind 
  3. Open the extracted folder in terminal and run following command to generate executable files $make -f Makefile.forward
  4. Now keep the two executables "forward_server" and "forward_client" in separate directories.
  5. Start server by running the command in one terminal $./forward_sever
  6. Start instance of client to share file with the command $./forward_client localhost myNewFile.txt 
     localhost is the current location of server and myNewFile.txt is the name of file to be transfered.
