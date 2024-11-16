cmake_minimum_required(VERSION 3.29)
project(codewars_solutions C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS ON)

string(APPEND CMAKE_C_FLAGS "-D_GNU_SOURCE")

# ---------------- 8 kyu ---------------- #

# Will you make it?
add_executable(5861d28f124b35723e00005e 8kyu/5861d28f124b35723e00005e.c)

# Switch it Up!
add_executable(5808dcb8f0ed42ae34000031 8kyu/5808dcb8f0ed42ae34000031.c)

# Calculate average
add_executable(57a2013acf1fa5bfc4000921 8kyu/57a2013acf1fa5bfc4000921.c)

# Basic Mathematical Operations
add_executable(57356c55867b9b7a60000bd7 8kyu/57356c55867b9b7a60000bd7.c)

# Sum Arrays
add_executable(53dc54212259ed3d4f00071c 8kyu/53dc54212259ed3d4f00071c.c)

# Function 2 - squaring an argument
add_executable(523b623152af8a30c6000027 8kyu/523b623152af8a30c6000027.c)

# Is it even?
add_executable(555a67db74814aa4ee0001b5 8kyu/555a67db74814aa4ee0001b5.c)
target_link_libraries(555a67db74814aa4ee0001b5 m)

# Keep up the hoop
add_executable(55cb632c1a5d7b3ad0000145 8kyu/55cb632c1a5d7b3ad0000145.c)

# Beginner Series #4 Cockroach
add_executable(55fab1ffda3e2e44f00000c6 8kyu/55fab1ffda3e2e44f00000c6.c)

# Get the mean of an array
add_executable(563e320cee5dddcf77000158 8kyu/563e320cee5dddcf77000158.c)

# Double Char
add_executable(56b1f01c247c01db92000076 8kyu/56b1f01c247c01db92000076.c)

# Sum without highest and lowest number
add_executable(576b93db1129fcf2200001e6 8kyu/576b93db1129fcf2200001e6.c)

# Find Maximum and Minimum Values of a List
add_executable(577a98a6ae28071780000989 8kyu/577a98a6ae28071780000989.c)

# Remove exclamation marks
add_executable(57a0885cbb9944e24c00008e 8kyu/57a0885cbb9944e24c00008e.c)

# Simple multiplication
add_executable(583710ccaa6717322c000105 8kyu/583710ccaa6717322c000105.c)

# A Needle in the Haystack
add_executable(56676e8fabd2d1ff3000000c 8kyu/56676e8fabd2d1ff3000000c.c)

# Beginner Series #1 School Paperwork
add_executable(55f9b48403f6b87a7c0000bd 8kyu/55f9b48403f6b87a7c0000bd.c)

# Are You Playing Banjo?
add_executable(53af2b8861023f1d88000832 8kyu/53af2b8861023f1d88000832.c)

# Convert a Boolean to a String
add_executable(551b4501ac0447318f0009cd 8kyu/551b4501ac0447318f0009cd.c)

# How good are you really?
add_executable(5601409514fc93442500010b 8kyu/5601409514fc93442500010b.c)

# Sentence Smash
add_executable(53dc23c68a0c93699800041d 8kyu/53dc23c68a0c93699800041d.c)

# Calculate BMI
add_executable(57a429e253ba3381850000fb 8kyu/57a429e253ba3381850000fb.c)

# Array plus array
add_executable(5a2be17aee1aaefe2a000151 8kyu/5a2be17aee1aaefe2a000151.c)

# ---------------- 7 kyu ---------------- #

# Credit Card Mask
add_executable(5412509bd436bd33920011bc 7kyu/5412509bd436bd33920011bc.c)

# Regex validate PIN code
add_executable(55f8a9c06c018a0d6e000132 7kyu/55f8a9c06c018a0d6e000132.c)

# Sum of Minimums!
add_executable(5d5ee4c35162d9001af7d699 7kyu/5d5ee4c35162d9001af7d699.c)

# Check the exam
add_executable(5a3dd29055519e23ec000074 7kyu/5a3dd29055519e23ec000074.c)

# Small enough? - Beginner
add_executable(57cc981a58da9e302a000214 7kyu/57cc981a58da9e302a000214.c)

# Square Every Digit
add_executable(546e2562b03326a88e000020 7kyu/546e2562b03326a88e000020.c)
