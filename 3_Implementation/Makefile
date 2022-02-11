
# Build : handcricket.c
# 		gcc handcricket.c -o handcricket.exe

# Run : Build
# 		./handcricket.exe

# all:
# 	gcc -o handcricket handcricket.c
# 	./handcricket

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