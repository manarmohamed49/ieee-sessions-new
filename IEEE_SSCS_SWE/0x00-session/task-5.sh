 wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/all_in_one.c
 gcc all_in_one.c -o main
 wget https://raw.githubusercontent.com/OmarKHDR/IEEE-SSCS-SWE-2025/refs/heads/main/0x00-session/tasks-related-files/task4/numbers.txt
./main < numbers.txt > output.txt 2> error.txt
