include ..\..\PATHS

$(TESTS_BIN_DIR)\unitTests.exe : \
			$(TESTS_BIN_DIR)\unitTests.obj \
			$(TESTS_BIN_DIR)\YearTests.obj \
			$(BIN_DIR)\Year.obj 
	cd $(TESTS_BIN_DIR)
	$(LINK) /OUT:$(TESTS_BIN_DIR)\tests.exe \
	$(TESTS_BIN_DIR)\unitTests.obj \
	$(TESTS_BIN_DIR)\YearTests.obj \
	$(BIN_DIR)\Year.obj \
	gtestd.lib IsolatorCore.lib /LIBPATH:$(MW_LIB) /LIBPATH:$(SDK_LIB) /LIBPATH:$(SDK_LIB2) /LIBPATH:$(GTEST_LIB) /LIBPATH:$(TYPEMOCK_LIB)

$(TESTS_BIN_DIR)\unitTests.obj : unitTests.cpp
	$(CMP) unitTests.cpp /c /Fo$(TESTS_BIN_DIR)\unitTests.obj /I$(GTEST_INC) /I$(VS_INC) /I$(WSDK_INC)

$(TESTS_BIN_DIR)\YearTests.obj : YearTests.cpp
	$(CMP) YearTests.cpp /c /Fo$(TESTS_BIN_DIR)\YearTests.obj /I$(GTEST_INC) /I$(TYPEMOCK_INC) /I$(VS_INC) /I$(WSDK_INC) /I$(WSDK_INC2) /I$(WSDK_INC3) /I$(SRC_DIR)