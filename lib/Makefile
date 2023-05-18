.PHONY: all

clean: 
	rm -rf .build

all: clean
	cmake -B.build -DCMAKE_INSTALL_DIR=$(PROJECT_ROOT_DIR)/sdk . 
	make -C .build all 
	cmake --install .build
	rm -rf .build
