###########################################
#             VARIABLES                   #
###########################################

NAME			=	replace
OBJ_DIR			=	obj
SRC				= 	replace.cpp	\
					main.cpp
CPP				=	c++
CPPFLAGS		=	-Wall -Werror -Wextra -std=c++98 -MMD -MP -g
OBJ				=	$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

###########################################
#                 RULES                   #
###########################################

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling Replace 42"
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@

###########################################
#                 RULES                   #
###########################################

-include $(OBJ=.o=.d)

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