# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 19:14:12 by seozcan           #+#    #+#              #
#    Updated: 2024/02/08 16:43:00 by seozcan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include settings.mk

# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::DIRECTORIES::

S		=	src/
O		=	obj/
I 		=	inc/
D 		=	dep/

# ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::CUSTOM FLAGS::

CFLAGS	+=	-I$I

CLFAGS	+=	-Wconversion

ifeq (debug, $(filter debug,$(MAKECMDGOALS)))
	CFLAGS	+=	-g3
endif
ifeq (sanadd, $(filter sanadd,$(MAKECMDGOALS)))
	CFLAGS	+=	-fsanitize=address
endif
ifeq (santhread, $(filter santhread,$(MAKECMDGOALS)))
	CFLAGS	+=	-fsanitize=thread
endif

RM		=	/bin/rm -rf

SPACE 	= 	awk -F ':' '{ printf "%-61s %s\n", $$1 ":", $$2 }'


# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::OBJECTS::

OBJ		=	$(SRC:$S%=$O%.o)

DEP		=	$(SRC:$S%=$D%.d)

# :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::RULES::

all: h2 message $(NAME)

$O:
	@mkdir -p $@
	@echo "$(HIGREEN)creating $O folder:[OK]$(RESET)" | $(SPACE)

$(OBJ): | $O

$(OBJ): $O%.o: $S%
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(HIGREEN)compiling $<:[OK]$(RESET)" | $(SPACE)

$D:
	@mkdir -p $@
	@echo "$(HIGREEN)creating $D folder:[OK]$(RESET)" | $(SPACE)

$(DEP): | $D

$(DEP): $D%.d: $S%
	@$(CC) $(CFLAGS) -MM -MF $@ -MT "$O$*.o $@" $<
	@echo "$(HIGREEN)compiling $<:[OK]$(RESET)" | $(SPACE)


$(NAME): $(OBJ) $(DEP)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@echo "$(HIGREEN)compiling $(NAME):[OK]$(RESET)" | $(SPACE)

debug:		all
	
sanadd:		all
	
santhread:	all

cleanobj:
	@$(RM) $(O)
	@echo "$(HIORANGE)removing $O folder:[RM]$(RESET)" | $(SPACE)


cleandep:
	@$(RM) $(D)
	@echo "$(HIORANGE)removing $D folder:[RM]$(RESET)" | $(SPACE)

clean: h2 cleanobj cleandep

fclean: h2 clean
	@$(RM) $(NAME)
	@echo "$(HIORANGE)removing $(NAME):[RM]$(RESET)" | $(SPACE)

re:	h2 fclean all

include colors.mk output.mk header.mk

.PHONY:	all clean fclean re