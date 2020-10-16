# disbatch
Converts batch to exe.

# Requires MinGW

Batch files are first converted to C and then compiled.

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
