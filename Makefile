.PHONY: all
all: stack_smash stack_smash_pac

stack_smash: stack_smash.c
	gcc stack_smash.c -g -fno-stack-protector -march=armv8.3-a -o stack_smash

stack_smash_pac: stack_smash.c
	gcc stack_smash.c -g -fno-stack-protector -march=armv8.3-a -o stack_smash_pac -mbranch-protection=standard 

.PHONY: clean
clean:
	rm stack_smash stack_smash_pac *.o