# Список файлов .c в текущем каталоге
C_FILES=$(ls *.c)

# Компиляция каждого файла
for file in $C_FILES; do
    gcc -o /dev/null -c "$file" &>/dev/null
    if [ $? -eq 0 ]; then
        echo "File $file compiled successfully."
    else
        echo "Error compiling $file."
    fi
done
