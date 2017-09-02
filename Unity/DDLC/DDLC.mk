##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DDLC
ConfigurationName      :=Debug
WorkspacePath          :=/home/brian/projects/DDLC
ProjectPath            :=/home/brian/projects/DDLC
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Brian
Date                   :=05/04/17
CodeLitePath           :=/home/brian/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
ObjectsFileList        :="DDLC.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)/usr/include $(IncludeSwitch)/usr/include/SDL2 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)SDL2 $(LibrarySwitch)SDL2_image 
ArLibs                 :=  "SDL2" "SDL2_image" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/lib/x86_64-linux-gnu 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/game.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/sprite.cpp$(ObjectSuffix) $(IntermediateDirectory)/input.cpp$(ObjectSuffix) $(IntermediateDirectory)/graphics.cpp$(ObjectSuffix) 



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
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/game.cpp$(ObjectSuffix): game.cpp $(IntermediateDirectory)/game.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/brian/projects/DDLC/game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/game.cpp$(DependSuffix): game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/game.cpp$(DependSuffix) -MM game.cpp

$(IntermediateDirectory)/game.cpp$(PreprocessSuffix): game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/game.cpp$(PreprocessSuffix) game.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/brian/projects/DDLC/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/sprite.cpp$(ObjectSuffix): sprite.cpp $(IntermediateDirectory)/sprite.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/brian/projects/DDLC/sprite.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sprite.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sprite.cpp$(DependSuffix): sprite.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sprite.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sprite.cpp$(DependSuffix) -MM sprite.cpp

$(IntermediateDirectory)/sprite.cpp$(PreprocessSuffix): sprite.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sprite.cpp$(PreprocessSuffix) sprite.cpp

$(IntermediateDirectory)/input.cpp$(ObjectSuffix): input.cpp $(IntermediateDirectory)/input.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/brian/projects/DDLC/input.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/input.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/input.cpp$(DependSuffix): input.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/input.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/input.cpp$(DependSuffix) -MM input.cpp

$(IntermediateDirectory)/input.cpp$(PreprocessSuffix): input.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/input.cpp$(PreprocessSuffix) input.cpp

$(IntermediateDirectory)/graphics.cpp$(ObjectSuffix): graphics.cpp $(IntermediateDirectory)/graphics.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/brian/projects/DDLC/graphics.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/graphics.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/graphics.cpp$(DependSuffix): graphics.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/graphics.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/graphics.cpp$(DependSuffix) -MM graphics.cpp

$(IntermediateDirectory)/graphics.cpp$(PreprocessSuffix): graphics.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/graphics.cpp$(PreprocessSuffix) graphics.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


