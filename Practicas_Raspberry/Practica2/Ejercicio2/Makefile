LD = ld 
AS = as 
ASFLAGS_THUMB = -mthumb-interwork
LDFLAGS_THUMB = --thumb-entry=_start

CC = gcc
CFLAGS = -O2 -Wall
LFLAGS =


all:	hello


hello:	hello.o
	$(LD) $(LDFLAGS) -o hello hello.o

hello.o:	hello.s
	$(AS) $(ASFLAGS) -o hello.o hello.s


submit:	hello.s Makefile README
	tar -czvf P3_FSEsubmit.tar.gz hello.s Makefile README

clean:	
	rm -f *~ *.o hello