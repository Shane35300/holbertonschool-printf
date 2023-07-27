# holbertonschool-printf
C - project _printf()
int _printf(const char *format, ...);

[Description]
The functions _printf() write output to stdout, the standard output stream. This function write the output under the control of a \
format string that specifies how subsequent arguments are converted for output.

[Compilation command]
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

When you run this gcc command, it will compile all the C source files (ending with .c) in the current directory while enabling various warning options. If there are any warning messages, they will be treated as errors due to the -Werror option, and the compilation process will stop. The use of strict warning options like -Wall, -Wextra, and -pedantic can help you write cleaner and more robust code by catching potential issues early in the development process.

[Requirements]
The main _printf function can be separated into more modular shorter functions
More functionality can still be added (e.g. support field width specifiers, etc)

[Exemples]
#include "main.h"
int main(void)
{
_printf("Character : [%c]\n", 'A');
_printf("String : [%s\n]", "Thank you !");
_printf("Integer : [%d\n]", "-45");
_printf("Integer : [%i\n]", "50");

return (0);
}

Output :
Character : [A]
String : [Thank you !]
Integer : [-45]
Integer : [50]

[Man page]
A man page is a detailed documentation of standard C language functions. These pages provide essential information on how to use s\
tandard C functions and libraries appropriately. use the "man" command followed by ./ and the function name "man_3_printf" to display the man \
page for this function.

[Flowchart]
![alt text](C:\Users\Antoine\Pictures\Saved Pictures\Flowchart.png)

[For clone us _printf]
git clone git@github.com:Shane35300/holbertonschool-printf.git
