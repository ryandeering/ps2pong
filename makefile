EE_BIN = hello.elf
EE_OBJS = hello.o
EE_LIBS = -ldebug

all: $(EE_BIN)

clean:
	rm -f *.elf *.o *.a

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal