TESTFILE 	= tests_{{program_name | lower}}.c
TESTPROGRAM = {{program_name | lower}}.tests
SRCDIR		= ../srcs/
INCLUDE		= ../includes
NAME		= ../{{program_name | lower}}
OBJS		= ${SRCS:.c=.o}

test:		fclean
			make -C ..
			@cc -o ${TESTPROGRAM} -I ${INCLUDE} ${TESTFILE}
			@./${TESTPROGRAM}

leakfull:	test
			valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${TESTPROGRAM}

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME} ${TESTPROGRAM}