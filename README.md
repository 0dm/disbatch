# disbatch
Converts batch to exe using MinGW.

Batch files are converted to C and compiled with MinGW

# Examples
test.bat
```bat
echo hi
echo bye
pause
```
becomes
test.c
```c
int main(){system("echo hi && echo bye && pause && rem");}
```
which is then compiled with gcc to create a functional executable.
