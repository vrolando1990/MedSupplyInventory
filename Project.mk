##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Project
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/vrola/OneDrive/Documents/CPPWorkspace/SummerClass
ProjectPath            :=C:/Users/vrola/OneDrive/Documents/CPPWorkspace/SummerClass/Project
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vrola
Date                   :=16/10/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Project.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++17 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Item.cpp$(ObjectSuffix) $(IntermediateDirectory)/Database.cpp$(ObjectSuffix) $(IntermediateDirectory)/User.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Item.cpp$(ObjectSuffix): Item.cpp $(IntermediateDirectory)/Item.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vrola/OneDrive/Documents/CPPWorkspace/SummerClass/Project/Item.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Item.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Item.cpp$(DependSuffix): Item.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Item.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Item.cpp$(DependSuffix) -MM Item.cpp

$(IntermediateDirectory)/Item.cpp$(PreprocessSuffix): Item.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Item.cpp$(PreprocessSuffix) Item.cpp

$(IntermediateDirectory)/Database.cpp$(ObjectSuffix): Database.cpp $(IntermediateDirectory)/Database.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vrola/OneDrive/Documents/CPPWorkspace/SummerClass/Project/Database.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Database.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Database.cpp$(DependSuffix): Database.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Database.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Database.cpp$(DependSuffix) -MM Database.cpp

$(IntermediateDirectory)/Database.cpp$(PreprocessSuffix): Database.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Database.cpp$(PreprocessSuffix) Database.cpp

$(IntermediateDirectory)/User.cpp$(ObjectSuffix): User.cpp $(IntermediateDirectory)/User.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/vrola/OneDrive/Documents/CPPWorkspace/SummerClass/Project/User.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/User.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/User.cpp$(DependSuffix): User.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/User.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/User.cpp$(DependSuffix) -MM User.cpp

$(IntermediateDirectory)/User.cpp$(PreprocessSuffix): User.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/User.cpp$(PreprocessSuffix) User.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


