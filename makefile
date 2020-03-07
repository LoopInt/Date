include PATHS

all:
	cd $(SRC_DIR) && $(MAKE)
	cd $(TESTS_DIR) && $(MAKE)