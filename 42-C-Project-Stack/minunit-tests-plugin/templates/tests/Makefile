TESTFILE 	= tests_{{project_name_for_plugin | lower}}.c
TESTPROGRAM = {{project_name_for_plugin | lower}}.tests
SRCDIR		= ../srcs/
INCLUDE		= ../includes
NAME		= ../{{project_name_for_plugin | lower}}
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