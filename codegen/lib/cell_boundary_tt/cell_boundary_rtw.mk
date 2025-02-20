###########################################################################
## Makefile generated for component 'cell_boundary'. 
## 
## Makefile     : cell_boundary_rtw.mk
## Generated on : Mon Feb 17 16:11:34 2025
## Final product: .\cell_boundary.lib
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

PRODUCT_NAME              = cell_boundary
MAKEFILE                  = cell_boundary_rtw.mk
MATLAB_ROOT               = D:\Program Files\MATLAB\2023b
MATLAB_BIN                = D:\Program Files\MATLAB\2023b\bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)\win64
START_DIR                 = D:\ws_Matlab\EdgeAndPeak
TGT_FCN_LIB               = ISO_C
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ..\..\..
COMPILER_COMMAND_FILE     = cell_boundary_rtw_comp.rsp
CMD_FILE                  = cell_boundary_rtw.rsp
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
NODEBUG                   = 1
MODELLIB                  = cell_boundary.lib

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

PRODUCT = .\cell_boundary.lib
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
DEFINES_STANDARD = -DMODEL=cell_boundary

DEFINES = $(DEFINES_CUSTOM) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)\codegen\lib\cell_boundary\cell_boundary_data.c $(START_DIR)\codegen\lib\cell_boundary\rt_nonfinite.c $(START_DIR)\codegen\lib\cell_boundary\rtGetNaN.c $(START_DIR)\codegen\lib\cell_boundary\rtGetInf.c $(START_DIR)\codegen\lib\cell_boundary\cell_boundary_initialize.c $(START_DIR)\codegen\lib\cell_boundary\cell_boundary_terminate.c $(START_DIR)\codegen\lib\cell_boundary\cell_boundary.c $(START_DIR)\codegen\lib\cell_boundary\imfilter.c $(START_DIR)\codegen\lib\cell_boundary\svd.c $(START_DIR)\codegen\lib\cell_boundary\svd1.c $(START_DIR)\codegen\lib\cell_boundary\xnrm2.c $(START_DIR)\codegen\lib\cell_boundary\xdotc.c $(START_DIR)\codegen\lib\cell_boundary\imbinarize.c $(START_DIR)\codegen\lib\cell_boundary\imclose.c $(START_DIR)\codegen\lib\cell_boundary\bwpack.c $(START_DIR)\codegen\lib\cell_boundary\imdilate.c $(START_DIR)\codegen\lib\cell_boundary\imerode.c $(START_DIR)\codegen\lib\cell_boundary\bwunpack.c $(START_DIR)\codegen\lib\cell_boundary\imopen.c $(START_DIR)\codegen\lib\cell_boundary\bwlabel.c $(START_DIR)\codegen\lib\cell_boundary\strel.c $(START_DIR)\codegen\lib\cell_boundary\any.c $(START_DIR)\codegen\lib\cell_boundary\colon.c $(START_DIR)\codegen\lib\cell_boundary\minOrMax.c $(START_DIR)\codegen\lib\cell_boundary\padarray.c $(START_DIR)\codegen\lib\cell_boundary\find.c $(START_DIR)\codegen\lib\cell_boundary\intline.c $(START_DIR)\codegen\lib\cell_boundary\cell_brightzone.c $(START_DIR)\codegen\lib\cell_boundary\imtophat.c $(START_DIR)\codegen\lib\cell_boundary\StrelImpl.c $(START_DIR)\codegen\lib\cell_boundary\isequal.c $(START_DIR)\codegen\lib\cell_boundary\xaxpy.c $(START_DIR)\codegen\lib\cell_boundary\xrotg.c $(START_DIR)\codegen\lib\cell_boundary\xrot.c $(START_DIR)\codegen\lib\cell_boundary\xswap.c $(START_DIR)\codegen\lib\cell_boundary\setPackedFillBits.c $(START_DIR)\codegen\lib\cell_boundary\bwareaopen.c $(START_DIR)\codegen\lib\cell_boundary\bwmorph.c $(START_DIR)\codegen\lib\cell_boundary\cell_boundary_emxutil.c $(START_DIR)\codegen\lib\cell_boundary\cell_boundary_emxAPI.c $(START_DIR)\codegen\lib\cell_boundary\cell_boundary_rtwutil.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = cell_boundary_data.obj rt_nonfinite.obj rtGetNaN.obj rtGetInf.obj cell_boundary_initialize.obj cell_boundary_terminate.obj cell_boundary.obj imfilter.obj svd.obj svd1.obj xnrm2.obj xdotc.obj imbinarize.obj imclose.obj bwpack.obj imdilate.obj imerode.obj bwunpack.obj imopen.obj bwlabel.obj strel.obj any.obj colon.obj minOrMax.obj padarray.obj find.obj intline.obj cell_brightzone.obj imtophat.obj StrelImpl.obj isequal.obj xaxpy.obj xrotg.obj xrot.obj xswap.obj setPackedFillBits.obj bwareaopen.obj bwmorph.obj cell_boundary_emxutil.obj cell_boundary_emxAPI.obj cell_boundary_rtwutil.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwippfilter.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgrayto8.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwtbbhist.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwbwpackctbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwbwunpackctbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwbwlookup_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_nonflat_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_flat_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_binary_tbb.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwimfilter.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwgetnumcores.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_packed.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_nonflat.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_flat.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_binary.lib $(MATLAB_ROOT)\extern\lib\win64\microsoft\libmwmorphop_ipp.lib

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


{$(START_DIR)\codegen\lib\cell_boundary}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_boundary}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_boundary}.cc.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\codegen\lib\cell_boundary}.cxx.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cc.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)}.cxx.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


cell_boundary_data.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_data.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_data.c"


rt_nonfinite.obj : "$(START_DIR)\codegen\lib\cell_boundary\rt_nonfinite.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\rt_nonfinite.c"


rtGetNaN.obj : "$(START_DIR)\codegen\lib\cell_boundary\rtGetNaN.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\rtGetNaN.c"


rtGetInf.obj : "$(START_DIR)\codegen\lib\cell_boundary\rtGetInf.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\rtGetInf.c"


cell_boundary_initialize.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_initialize.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_initialize.c"


cell_boundary_terminate.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_terminate.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_terminate.c"


cell_boundary.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary.c"


imfilter.obj : "$(START_DIR)\codegen\lib\cell_boundary\imfilter.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imfilter.c"


svd.obj : "$(START_DIR)\codegen\lib\cell_boundary\svd.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\svd.c"


svd1.obj : "$(START_DIR)\codegen\lib\cell_boundary\svd1.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\svd1.c"


xnrm2.obj : "$(START_DIR)\codegen\lib\cell_boundary\xnrm2.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\xnrm2.c"


xdotc.obj : "$(START_DIR)\codegen\lib\cell_boundary\xdotc.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\xdotc.c"


imbinarize.obj : "$(START_DIR)\codegen\lib\cell_boundary\imbinarize.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imbinarize.c"


imclose.obj : "$(START_DIR)\codegen\lib\cell_boundary\imclose.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imclose.c"


bwpack.obj : "$(START_DIR)\codegen\lib\cell_boundary\bwpack.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\bwpack.c"


imdilate.obj : "$(START_DIR)\codegen\lib\cell_boundary\imdilate.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imdilate.c"


imerode.obj : "$(START_DIR)\codegen\lib\cell_boundary\imerode.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imerode.c"


bwunpack.obj : "$(START_DIR)\codegen\lib\cell_boundary\bwunpack.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\bwunpack.c"


imopen.obj : "$(START_DIR)\codegen\lib\cell_boundary\imopen.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imopen.c"


bwlabel.obj : "$(START_DIR)\codegen\lib\cell_boundary\bwlabel.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\bwlabel.c"


strel.obj : "$(START_DIR)\codegen\lib\cell_boundary\strel.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\strel.c"


any.obj : "$(START_DIR)\codegen\lib\cell_boundary\any.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\any.c"


colon.obj : "$(START_DIR)\codegen\lib\cell_boundary\colon.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\colon.c"


minOrMax.obj : "$(START_DIR)\codegen\lib\cell_boundary\minOrMax.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\minOrMax.c"


padarray.obj : "$(START_DIR)\codegen\lib\cell_boundary\padarray.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\padarray.c"


find.obj : "$(START_DIR)\codegen\lib\cell_boundary\find.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\find.c"


intline.obj : "$(START_DIR)\codegen\lib\cell_boundary\intline.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\intline.c"


cell_brightzone.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_brightzone.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_brightzone.c"


imtophat.obj : "$(START_DIR)\codegen\lib\cell_boundary\imtophat.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\imtophat.c"


StrelImpl.obj : "$(START_DIR)\codegen\lib\cell_boundary\StrelImpl.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\StrelImpl.c"


isequal.obj : "$(START_DIR)\codegen\lib\cell_boundary\isequal.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\isequal.c"


xaxpy.obj : "$(START_DIR)\codegen\lib\cell_boundary\xaxpy.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\xaxpy.c"


xrotg.obj : "$(START_DIR)\codegen\lib\cell_boundary\xrotg.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\xrotg.c"


xrot.obj : "$(START_DIR)\codegen\lib\cell_boundary\xrot.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\xrot.c"


xswap.obj : "$(START_DIR)\codegen\lib\cell_boundary\xswap.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\xswap.c"


setPackedFillBits.obj : "$(START_DIR)\codegen\lib\cell_boundary\setPackedFillBits.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\setPackedFillBits.c"


bwareaopen.obj : "$(START_DIR)\codegen\lib\cell_boundary\bwareaopen.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\bwareaopen.c"


bwmorph.obj : "$(START_DIR)\codegen\lib\cell_boundary\bwmorph.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\bwmorph.c"


cell_boundary_emxutil.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_emxutil.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_emxutil.c"


cell_boundary_emxAPI.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_emxAPI.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_emxAPI.c"


cell_boundary_rtwutil.obj : "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_rtwutil.c"
	$(CC) $(CFLAGS) -Fo"$@" "$(START_DIR)\codegen\lib\cell_boundary\cell_boundary_rtwutil.c"


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


