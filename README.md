# disbatch
Converts batch to exe.

# Requires GCC - Compatible with Windows

Batch files are first converted to C and then compiled.
# Usage
```
b2e <input> <output> 
// OR 
b2e <input>
```

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

# todo: far from perfect
- support escape characters
- do everything better
