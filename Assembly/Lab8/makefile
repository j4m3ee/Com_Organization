debug: Lab8_1
	as -g -o Lab8_1.o Lab8_1.s
	gcc -o Lab8_1 Lab8_1.o
	gdb Lab8_1

Lab8_2:
	gcc -o Lab8_2 Lab8_2.s

Lab8_3:
	gcc -o Lab8_3 Lab8_3.s

file = "default"

debugVar: $(file)
	as -g -o $(file).o $(file).s
	gcc -o $(file) $(file).o
	gdb $(file)

makeVar:
	gcc -o $(file) $(file).s
