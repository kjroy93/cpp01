###########################################
#             VARIABLES                   #
###########################################

NAME			=	violence
OBJ_DIR			=	obj
SRC				= 	src/HumanA.cpp	\
					src/HumanB.cpp	\
					src/Weapon.cpp	\
					main.cpp
INCLUDES		=	include
CPP				=	g++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98 -I$(INCLUDES) -g
OBJ				=	$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

###########################################
#                 RULES                   #
###########################################

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling Violence 42"
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

###########################################
#               CLEANING                  #
###########################################

clean:
	@echo "Removing object files"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "Removing executables"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re