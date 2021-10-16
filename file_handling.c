//file  in c language is defined as a data structure that stored data . this data structure also known as strem the data structure or strem is defined as a FILE in the c library of standard input output defination all data files in c language should be declared as a FILE  type before they can be use . FILE is a defined data type that specified the file strem or data structure 
// terms used in file handling 
/* file pointer - every file that is to be accessed in c language is given an internal name by the compiler . the compiler uses this internal name to access and manuplate the file . this internal name is acutually a file pointer to the data structure FILE , whiclh contain about the file . 
we may open several file simultaneously , when we want to perform input-output devices (jo read or write kar sak ta hai) operation or a he will need some means identifing and specifing the file which we want opreate on . this is the purpose of FILE  pointer variable . we will pass . FILE  pointer as a variable input and output function there by indentifing the file we want to perform certain operation .
File in c language to a file pointer and accessed using this file pointer 
syntax for file pointer :-
FILE *<name fo the file pointer>;
file opreation to create and manuplate data files the folloing basic file opration are required . 
1) open 
2) close 
3) reading 
4) writing 
Explation :-
1) open opreation - before on a file can be perform the file has to be opened . opening the file identified the name of the file , the mode of the file is to be open and the access limitations if any (in a multi user envirnment ) . the different mode available to a programmer in c language for opening a file or as followes (file access mode).
"w"(write mode),"r"( read mode),"a"( append mode), "w+"( write-read mode),"r+"( read-write mode),"a+"( append or create new mode).
fopen() is used to open a file 
syntax
<file pointer> = fopen(<"file name">,<"file access mode">);
file name that is the name of the file that is to be open . if a constant to be as a file name , it is enclosed with in double code maks": this file name also be suppeled as a string variable argument . in this case file name not enclode with in the codes . 
close opration : after a file is open it has to be close as soon as the opreation on  it are complete . 
fclose() is used to close a previously opened file 
syntax 
fclose(<file pointer>);
*/

#include<stdio.h>
void main()
{
    // FILE *<name fo the file pointer>;
    FILE *fp;


}