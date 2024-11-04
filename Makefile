ROOTDIR		=	$(shell pwd)
SRCSDIR		=	$(ROOTDIR)/src
INCL		=	$(ROOTDIR)/include
ARS			=	$(ROOTDIR)/archives
GNLDIR		=	$(SRCSDIR)/get_next_line
FPFDIR		=	$(SRCSDIR)/ft_printf
FTDIR		=	$(SRCSDIR)/libft_src
LIBFT		=	$(ARS)/libinternalft.a
LIBFPF		=	$(ARS)/libftprintf.a
LIBGNL		=	$(ARS)/libgnl.a
SRCDIRS		=	$(FTDIR) $(GNLDIR) $(FPFDIR)
ARCHIVES	=	$(LIBFT) $(LIBGNL) $(LIBFPF)
MRI			=	$(SRCSDIR)/script.m
NAME		=	libft.a

all			:	$(NAME)

$(NAME)		:	$(ARCHIVES) $(MRI)
			ar -M < $(MRI)

$(MRI)		:
			echo "create $(ROOTDIR)/$(NAME)" >$@
			@for i in $(shell seq 1 $(words $(SRCDIRS))); do \
				echo "addlib $$(echo $(ARCHIVES) | cut -d ' ' -f $$i)" >>$@; \
			done
			echo "save" >>$@
			echo "end" >>$@

$(ARCHIVES)	: $(ARS)
			@for i in $(shell seq 1 $(words $(SRCDIRS))); do \
				make NAME="$$(echo $(ARCHIVES) | cut -d ' ' -f $$i)" \
						-C $$(echo $(SRCDIRS) | cut -d ' ' -f $$i) \
						INCLUDE="$$(echo $(INCL))"; \
			done
$(ARS)		:
			mkdir $(ARS)

print		:
			@for i in $(shell seq 1 $(words $(SRCDIRS))); do \
				echo $$i $$(echo $(ARCHIVES) | cut -d ' ' -f $$i) \
						"-C" $$(echo $(SRCDIRS) | cut -d ' ' -f $$i); \
			done
fclean		:
			@for i in $(shell seq 1 $(words $(SRCDIRS))); do \
				make fclean -C $$(echo $(SRCDIRS) | cut -d ' ' -f $$i) \
						NAME="$$(echo $(ARCHIVES) | cut -d ' ' -f $$i)"; \
			done
			rm -f $(NAME) $(ARCHIVES) $(MRI)

clean		:
			@for dir in $(SRCDIRS); do \
				make clean -C $$dir; \
			done
			rm -f $(ARCHIVES) $(MRI)

re		:	fclean all

.PHONY	:	fclean clean all re
