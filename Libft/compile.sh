# Получить список файлов .c в текущем каталоге
C_FILES=$(ls *.c)

# Переменная для отслеживания результата
success=1

# Компиляция и запуск каждого файла
for file in $C_FILES; do
    # Компилировать файл
    gcc -o "${file%.c}" "$file" &>/dev/null
    if [ $? -eq 0 ]; then
        echo "File $file compiled successfully."
        # Запустить скомпилированный файл
        ./"${file%.c}"
    else
        echo "Error compiling $file."
        success=0
    fi
done

# Если все файлы успешно скомпилированы, предложить пролистывать результаты
if [ $success -eq 1 ]; then
    read -p "All files compiled successfully. Press Enter to continue."
fi
