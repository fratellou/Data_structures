FLAGS=-Wall -Wextra -Werror
ENTRY=./structures/
STRUCTURES_C = *.cpp
STRUCTURES_O = *.o

all: list_tasks stack_tasks encapsulation inheritance polymorphism recursion hash_tasks queue_tasks

list_tasks: structures.a
	g++ $(FLAGS) list_tasks.cpp list.o -o list_tasks
	rm -rf list.o

stack_tasks: structures.a
	g++ $(FLAGS) stack_tasks.cpp stack.o -o stack_tasks
	rm -rf stack.o

hash_tasks: structures.a
	g++ $(FLAGS) hash_tasks.cpp hash.o -o hash_tasks
	rm -rf hash.o

queue_tasks: structures.a
	g++ $(FLAGS) queue_tasks.cpp queue.o -o queue_tasks
	rm -rf queue.o

encapsulation:
	g++ $(FLAGS) encapsulation.cpp -o encapsulation

inheritance:
	g++ $(FLAGS) inheritance.cpp -o inheritance

recursion:
	g++ $(FLAGS) recursion.cpp -o recursion

polymorphism:
	g++ $(FLAGS) polymorphism.cpp -o polymorphism

structures.a:
	g++ $(FLAGS) -c $(ENTRY)$(STRUCTURES_C) 
	ar rcs structures.a $(STRUCTURES_O)

clean: 
	rm -rf *.o *.a list_tasks stack_tasks encapsulation inheritance polymorphism recursion hash_tasks queue_tasks

rebuild:clean all

default: rebuild