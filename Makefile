CIRCLEHOME = ../..

OBJS    = main.o Arduino.o

LIBS    = $(CIRCLEHOME)/lib/libcircle.a

include $(CIRCLEHOME)/Rules.mk

-include $(DEPS)
