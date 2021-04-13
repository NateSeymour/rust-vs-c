SRC_DIR=../src
BUILD_DIR=.

CLANG_OPT=-O2
RUST_OPT=-O

CLANG_COMPILE=clang $(CLANG_OPT)
RUST_COMPILE=rustc $(RUST_OPT)

arrays:
	mkdir -p arrays
	$(CLANG_COMPILE) $(SRC_DIR)/arrays/array.c -o arrays/array-c
	$(CLANG_COMPILE) $(SRC_DIR)/arrays/array-safe.c -o arrays/array-c-safe
	clang $(SRC_DIR)/arrays/array-safe.c -o arrays/array-c-safe-unoptimized
	$(CLANG_COMPILE) $(SRC_DIR)/arrays/array-safe-utilize.c -o arrays/array-c-safe-utilize
	$(RUST_COMPILE) $(SRC_DIR)/arrays/array.rs -o arrays/array-rust

loops:
	mkdir -p loops
	$(CLANG_COMPILE) $(SRC_DIR)/loops/loop.c -o loops/loop-c
	$(RUST_COMPILE) $(SRC_DIR)/loops/loop.rs -o loops/loop-rust

all: arrays loops

clean:
	ls $(BUILD_DIR) | grep -v Makefile | xargs rm -rf