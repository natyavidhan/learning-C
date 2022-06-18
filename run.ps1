$file = Read-Host "Enter the file name: "
$file = $file + ".c"
gcc $file
clear
./a.exe