cmake_minimum_required(VERSION 3.13.1)

# Set the board before finding Zephyr
set(BOARD native_posix)

# Find Zephyr package
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(zephyr_app)

# Add source files from src directory
target_sources(app PRIVATE src/Zephyr_Attr.c src/Zephyr_Sync.c src/Zephyr_Thread_Creation.c)
