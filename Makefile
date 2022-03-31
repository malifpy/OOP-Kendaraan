CC = g++

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = src

ALL_CPP = $(shell find $(SRC_DIR) -name "*.cpp")
ALL_OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(ALL_CPP))

EXEC_NAME = main

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(OBJ_DIR)
	$(CC) -c $< -o $@

$(BIN_DIR)/$(EXEC_NAME): $(ALL_OBJ)
	mkdir -p $(BIN_DIR)
	$(CC) $^ -o $@

build: $(BIN_DIR)/$(EXEC_NAME)

run: $(BIN_DIR)/$(EXEC_NAME)
	./$<

clean:
	rm -rf $(BIN_DIR)
	rm -rf $(OBJ_DIR)
