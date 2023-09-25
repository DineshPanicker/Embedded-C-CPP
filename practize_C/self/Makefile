CFLAGS=-Wall -g -Wextra -pthread -lpthread

EXECUTABLES := $(patsubst %.c,%,$(wildcard main*))

.PHONY: clean

clean:
	@echo "Cleaning executables..."
	@rm -f $(EXECUTABLES)
	@echo "removed: " $(EXECUTABLES)
	@echo "Clean completed."
	 
