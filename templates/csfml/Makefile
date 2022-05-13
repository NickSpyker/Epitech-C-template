##
## EPITECH PROJECT, 2021
## Epitech-C-template
## File description:
## Makefile
##

CFLAGS		= 	-W -Wall -Werror -Wextra

CSFML		=	-lcsfml-graphics \
				-lcsfml-window \
				-lcsfml-system \
				-lcsfml-network \
				-lcsfml-audio

LIBS		=	-lmy

CPPFLAGS	=	-Iinclude/

SRC 		:=	$(shell find ./ -name "*.c")

OBJ 		= 	$(SRC:.c=.o)

TARGET		= 	bin_name

all: $(TARGET)

$(TARGET): $(OBJ)
	make -C lib
	$(CC) -o $(TARGET) $(OBJ) -Llib $(LIBS) $(CSFML)
	@echo "Build OK"

clean :
	make clean -C lib
	$(RM) $(OBJ)

fclean : clean
	make fclean -C lib
	$(RM) $(TARGET)

re : fclean all
