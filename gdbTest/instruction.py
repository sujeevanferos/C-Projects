from fpdf import FPDF

# Create a PDF class
class GDBGuidePDF(FPDF):
    def header(self):
        self.set_font("Arial", "B", 14)
        self.cell(0, 10, "GDB Debugger - Beginner's Guide", ln=True, align="C")
        self.ln(5)

    def chapter_title(self, title):
        self.set_font("Arial", "B", 12)
        self.set_fill_color(200, 220, 255)
        self.cell(0, 10, title, ln=True, fill=True)
        self.ln(2)

    def chapter_body(self, body):
        self.set_font("Arial", "", 11)
        self.multi_cell(0, 10, body)
        self.ln()

pdf = GDBGuidePDF()
pdf.add_page()

# Content Sections
sections = {
    "What is GDB?": """GDB (GNU Debugger) is a command-line tool used to debug programs written in C, C++, and other languages. It allows you to run your code line-by-line, set breakpoints, inspect memory and variables, and find errors in logic or memory usage.""",

    "Getting Started": """1. Compile your program with debugging symbols using `-g`:
   gcc -g program.c -o program

2. Start GDB:
   gdb ./program""",

    "Basic GDB Commands": """run or r             - Start the program
break <location>      - Set a breakpoint (e.g., break main or break 12)
next or n             - Execute the next line (skip function calls)
step or s             - Step into functions
continue or c         - Continue execution until the next breakpoint
print or p <var>      - Print a variable's value
list or l             - Show source code
backtrace or bt       - Show function call stack
quit or q             - Exit GDB""",

    "Workflow Example": """1. Compile:
   gcc -g program.c -o program

2. Start GDB:
   gdb ./program

3. In GDB:
   (gdb) break main
   (gdb) run
   (gdb) next
   (gdb) print x
   (gdb) continue
   (gdb) quit""",

    "Tips for Efficient Use": """- Use conditional breakpoints: break 15 if x > 10
- Use watchpoints: watch var (to track changes)
- Use display: display var (auto-print variable each step)
- Use info commands: info locals, info breakpoints, info registers
- Use help inside GDB: help <command>""",

    "Example Program": """#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    int result = square(a);
    printf("Result: %d\\n", result);
    return 0;
}"""
}

# Add each section to the PDF
for title, content in sections.items():
    pdf.chapter_title(title)
    pdf.chapter_body(content)

# Save PDF
output_path = "~/C-Projects/gdbTest/instruction.pdf"
pdf.output(output_path)
output_path

