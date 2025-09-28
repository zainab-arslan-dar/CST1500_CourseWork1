@echo off
:: Step 1: Create a folder called "myBatchScript"
mkdir myBatchScript

rem Step 2: Create a .txt file called "results.txt"
echo Knock, knock. > results.txt
echo (Who’s there?) >> results.txt
echo Recursion. >> results.txt
echo (Recursion who?) >> results.txt
echo Knock Knock... >> results.txt

rem Step 4: Copy the "results.txt" file to the "myBatchScript" folder
copy results.txt myBatchScript\

rem Step 5: Delete the original "results.txt" file
del results.txt

rem Step 6: Print the message "Task Complete!"
echo Task Complete!

rem Pause the script to view the message before closing
pause
