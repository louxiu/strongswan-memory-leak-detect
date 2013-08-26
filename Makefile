all : leak_detect

leak_detect : leak_detective_test.c
	gcc -g -Wl,--export-dynamic -I. leak_detective_test.c utils.c  utils/backtrace.c utils/leak_detective.c  -lpthread -o leak_detect

clean :
	rm -f *.o leak_detect
