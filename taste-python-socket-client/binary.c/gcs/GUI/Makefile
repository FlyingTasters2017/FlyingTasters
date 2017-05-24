# The directories containing the source files, separated by ':'
VPATH=.:../../auto-src

# To make "debug" the default configuration if invoked with just "make":
#
ifeq ($(CFG),)
CFG=debug
endif

# The source files: regardless of where they reside in the source tree,
# VPATH will locate them...
Group0_SRC = project2app.cpp telecmds.cpp 
Group1_SRC = dataview-uniq.c asn1crt.c real.c queue_manager.c timeInMS.c debug_messages.c acn.c xer.c ber.c PrintTypes.c PrintTypesAsASN1.c

# Build a Dependency list and an Object list, by replacing the .cpp
# extension to .d for dependency files, and .o for object files.
Group0_DEP = $(patsubst %.cpp, deps/Group0_%.d, ${Group0_SRC})
Group1_DEP = $(patsubst %.c, deps/Group1_%.d, ${Group1_SRC})
Group0_OBJ = $(patsubst %.cpp, objs.$(CFG)/Group0_%.o, ${Group0_SRC})
Group1_OBJ = $(patsubst %.c, objs.$(CFG)/Group1_%.o, ${Group1_SRC})

# Your final binary
TARGET=gcs_GUI

# What compiler to use for generating dependencies: it will be invoked with -MM
CCDEP = g++
CXXDEP = g++
CPPFLAGS = $(shell wx-config --cppflags || exit 1)

# What include flags to pass to the compiler
INCLUDEFLAGS= -I. -I../../auto-src ${CPPFLAGS}

# Separate compile options per configuration
ifeq ($(CFG),debug)
CXXFLAGS += -g -Wall ${INCLUDEFLAGS} -DwxUSE_UNICODE
else
CXXFLAGS += -O2 -Wall ${INCLUDEFLAGS} $(shell wx-config --cxxflags) -DwxUSE_UNICODE
endif

# A common link flag for all configurations 
# hardcoded "-m32" to crash 64bit distros, since the native encodings won't verifiably 
# work between 32bit linux binaries and 64bit GUIs.
LDFLAGS = $(shell wx-config --libs) -lrt

all:	inform ConstraintErrors.inc bin.$(CFG)/${TARGET}

ConstraintErrors.inc:	dataview-uniq.h
	perl ./buildErrorCheck.pl dataview-uniq.h

inform:
ifneq ($(CFG),release)
ifneq ($(CFG),debug)
	@echo "Invalid configuration "$(CFG)" specified."
	@echo "You must specify a configuration when running make, e.g."
	@echo  "make CFG=debug"
	@echo  
	@echo  "Possible choices for configuration are 'release' and 'debug'"
	@exit 1
endif
endif
	@echo "Configuration "$(CFG)
	@echo "------------------------"

bin.$(CFG)/${TARGET}: ${Group0_OBJ} ${Group1_OBJ} | inform
	@mkdir -p bin.$(CFG)
	$(CXX) -g -o $@ $^ ${LDFLAGS}

objs.$(CFG)/Group0_%.o: %.cpp
	@mkdir -p objs.$(CFG)
	$(CXX) -c $(CXXFLAGS) -o $@ $<

objs.$(CFG)/Group1_%.o: %.c
	@mkdir -p objs.$(CFG)
	$(CC) -c $(subst -Wall,,$(CXXFLAGS)) -o $@ $<

deps/Group0_%.d: %.cpp ConstraintErrors.inc
	@mkdir -p deps
	@echo Generating dependencies for $<
	@set -e ; $(CXXDEP) -MM $(INCLUDEFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,objs.$(CFG)\/Group0_\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

deps/Group1_%.d: %.c ConstraintErrors.inc
	@mkdir -p deps
	@echo Generating dependencies for $<
	@set -e ; $(CCDEP) -MM $(INCLUDEFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,objs.$(CFG)\/Group0_\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

clean:
	@rm -rf deps objs.debug objs.release bin.debug bin.release

# Unless "make clean" is called, include the dependency files
# which are auto-generated. Don't fail if they are missing
# (-include), since they will be missing in the first invocation!
ifneq ($(MAKECMDGOALS),clean)
-include ${Group0_DEP} ${Group1_DEP}
endif
