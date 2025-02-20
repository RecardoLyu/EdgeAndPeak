###########################################################################
## Makefile generated for component 'cell_brightzone'. 
## 
## Makefile     : cell_brightzone_rtw.mk
## Generated on : Mon Feb 17 15:48:36 2025
## Final product: .\cell_brightzone.lib
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = cell_brightzone
MAKEFILE                  = cell_brightzone_rtw.mk
MATLAB_ROOT               = D:\Program Files\MATLAB\2023b
MATLAB_BIN                = D:\Program Files\MATLAB\2023b\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = D:\ws_Matlab\EdgeAndPeak
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ..\..\..
COMPILER_COMMAND_FILE     = cell_brightzone_rtw_comp.rsp
CMD_FILE                  = cell_brightzone_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
MODELLIB                  = cell_brightzone.lib

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)
# Supported Version(s):    16.0
# ToolchainInfo Version:   2023b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS /wd4251 /Zc:__cplusplus
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)\mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /O2 /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = .\cell_brightzone.lib
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_CUSTOM = 
DEFINES_STANDARD = -DMODEL=cell_brightzone

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_data.c $(START_DIR)\codegen\lib\cell_brightzone\rt_nonfinite.c $(START_DIR)\codegen\lib\cell_brightzone\rtGetNaN.c $(START_DIR)\codegen\lib\cell_brightzone\rtGetInf.c $(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_initialize.c $(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_terminate.c $(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone.c $(START_DIR)\codegen\lib\cell_brightzone\imtophat.c $(START_DIR)\codegen\lib\cell_brightzone\imerode.c $(START_DIR)\codegen\lib\cell_brightzone\imfilter.c $(START_DIR)\codegen\lib\cell_brightzone\imbinarize.c $(START_DIR)\codegen\lib\cell_brightzone\strel.c $(START_DIR)\codegen\lib\cell_brightzone\StrelImpl.c $(START_DIR)\codegen\lib\cell_brightzone\imdilate.c $(START_DIR)\codegen\lib\cell_brightzone\padarray.c $(START_DIR)\codegen\lib\cell_brightzone\isequal.c $(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_emxutil.c $(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_emxAPI.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = cell_brightzone_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj cell_brightzone_initialize.obj cell_brightzone_terminate.obj cell_brightzone.obj imtophat.obj imerode.obj imfilter.obj imbinarize.obj strel.obj StrelImpl.obj imdilate.obj padarray.obj isequal.obj cell_brightzone_emxutil.obj cell_brightzone_emxAPI.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_flat_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippfilter.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgrayto8.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwtbbhist.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwbwpackctbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_binary_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwbwunpackctbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwimfilter.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgetnumcores.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_packed.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_binary.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  /LIBPATH:"$(MATLAB_ROOT)\bin\win64" "$(MATLAB_ROOT)\bin\win64\libiomp5md.lib"

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_ = /source-charset:utf-8
CFLAGS_OPTS = /openmp /wd4101
CFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CFLAGS = $(CFLAGS) $(CFLAGS_) $(CFLAGS_OPTS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ = /source-charset:utf-8
CPPFLAGS_OPTS = /openmp /wd4101
CPPFLAGS_BASIC = $(DEFINES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_) $(CPPFLAGS_OPTS) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = /nodefaultlib:vcomp  

CPP_LDFLAGS = $(CPP_LDFLAGS) $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = /nodefaultlib:vcomp  

CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS) $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = /nodefaultlib:vcomp  

LDFLAGS = $(LDFLAGS) $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = /nodefaultlib:vcomp  

SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS) $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################


!include $(MATLAB_ROOT)\rtw\c\tools\vcdefs.mak


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@cmd /C "@echo ### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS) -out:$(PRODUCT) @$(CMD_FILE)
	@cmd /C "@echo ### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


.cc.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


.cxx.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cc.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cxx.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_brightzone}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_brightzone}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_brightzone}.cc.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_brightzone}.cxx.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cc.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cxx.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


cell_brightzone_data.obj : "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_data.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_data.c"


rt_nonfinite.obj : "$(START_DIR)\codegen\lib\cell_brightzone\rt_nonfinite.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\rt_nonfinite.c"


rtGetNaN.obj : "$(START_DIR)\codegen\lib\cell_brightzone\rtGetNaN.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\rtGetNaN.c"


rtGetInf.obj : "$(START_DIR)\codegen\lib\cell_brightzone\rtGetInf.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\rtGetInf.c"


cell_brightzone_initialize.obj : "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_initialize.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_initialize.c"


cell_brightzone_terminate.obj : "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_terminate.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_terminate.c"


cell_brightzone.obj : "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone.c"


imtophat.obj : "$(START_DIR)\codegen\lib\cell_brightzone\imtophat.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\imtophat.c"


imerode.obj : "$(START_DIR)\codegen\lib\cell_brightzone\imerode.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\imerode.c"


imfilter.obj : "$(START_DIR)\codegen\lib\cell_brightzone\imfilter.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\imfilter.c"


imbinarize.obj : "$(START_DIR)\codegen\lib\cell_brightzone\imbinarize.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\imbinarize.c"


strel.obj : "$(START_DIR)\codegen\lib\cell_brightzone\strel.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\strel.c"


StrelImpl.obj : "$(START_DIR)\codegen\lib\cell_brightzone\StrelImpl.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\StrelImpl.c"


imdilate.obj : "$(START_DIR)\codegen\lib\cell_brightzone\imdilate.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\imdilate.c"


padarray.obj : "$(START_DIR)\codegen\lib\cell_brightzone\padarray.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\padarray.c"


isequal.obj : "$(START_DIR)\codegen\lib\cell_brightzone\isequal.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\isequal.c"


cell_brightzone_emxutil.obj : "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_emxutil.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_emxutil.c"


cell_brightzone_emxAPI.obj : "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_emxAPI.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_brightzone\cell_brightzone_emxAPI.c"


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files ..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


