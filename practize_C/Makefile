CFLAGS=-Wall -g

EXECUTABLES := $(patsubst %.c,%,$(wildcard ex*))

.PHONY: clean

clean:
	@echo "Cleaning executables..."
	@rm -f $(EXECUTABLES)
	@echo "removed: " $(EXECUTABLES)
	@echo "Clean completed."
	 
