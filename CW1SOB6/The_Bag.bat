@echo off
rem This file contains a main folder named "The_Bag"
mkdir The_Bag

rem change directory to "The_Bag"
cd The_Bag

rem create 3 empty text files
echo. > file1.txt
echo. > file2.txt
echo. > file3.txt

rem create 3 folders
mkdir Folder1
mkdir Folder2
mkdir Folder3

rem move each text file into a corresponding folder
move file1.txt Folder1
move file2.txt Folder2
move file3.txt Folder3

rem display the completion message
echo The 6 items are in The Bag!

