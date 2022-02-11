
# Build : handcricket.c
# 		gcc handcricket.c -o handcricket.exe

# Run : Build
# 		./handcricket.exe

# all:
# 	gcc -o handcricket handcricket.c
# 	./handcricket

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

SRC = handcricket.c\
src/playerbatting.c\
src/playertoss.c

#object files .o files
OBJ = handcricket.o\
src/playerbatting.o\
src/playertoss.o

# INC = handcricket.h
INC = inc
CFLAGS = -I$(INC)


#all.exe = $@
#$(SRC) = $^
all.exe: $(SRC)
	gcc $^ -I$(INC) -o $@

run:
	./all.exe

clean:
	del all.exe