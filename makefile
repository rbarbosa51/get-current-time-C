NAME := main
$(NAME): $(NAME).c
	gcc -o $@ $?
.PHONY: clean
clean:
	rm $(NAME)

