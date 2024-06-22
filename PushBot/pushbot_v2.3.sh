#!/bin/bash

echo "Clean..."

# Gizli dosyaları sil
find . -type f -name ".*" -print -exec rm -rf {} \;

# Gizli dizinleri sil
find . -type d -name ".*" -print -exec rm -rf .[!.]* {} \;

# .vscode dizinlerini sil
find . -name ".vscode" -type d -print -exec rm -rf {} \;

# İsmi '1' olan dosyaları sil
find . -type f -name "1" -print -exec rm -rf {} \;

# .log uzantılı dosyaları sil
find . -type f -name "*.log" -print -exec rm -rf {} \;

# .swp uzantılı dosyaları sil
find . -type f -name "*.swp" -print -exec rm -rf {} \;

# .DS_Store dosyalarını sil
find . -type f -name ".DS_Store" -print -exec rm -rf {} \;

# a.out dosyalarını sil
find . -type f -name "a.out" -print -exec rm -rf {} \;

# Dosyaların genişletilmiş özniteliklerini temizle
find . -type f -exec xattr -c {} \;

# Dizinlerin genişletilmiş özniteliklerini temizle
find . -type d -exec xattr -c {} \;

# .c uzantılı dosyalarda "#include" var mı kontrol et
echo ".c uzantılı dosyalarda kütüphaneler kontrol ediliyor..."
find . -name "*.c" -type f -exec sh -c 'grep -q "#include" {} && echo -e "\033[1;31mKütüphane Tanımlı!: {}\033[0m"' \;

# .c uzantılı dosyalarda "int main" var mı kontrol et
echo ".c uzantılı dosyalarda int main fonksiyonu kontrol ediliyor..."
find . -name "*.c" -type f -exec sh -c 'grep -q "main(" {} && echo -e "\033[1;31mMain Fonksiyonu Var: {}\033[0m"' \;

# .c dosyalarında norminette kontrolü yap
echo ".c dosyalarında norminette kontrolü yapılıyor..."
find . -type f -name "*.c" -exec norminette -R CheckForbiddenSourceHeader {} \;

# Bilgilendirme mesajı
echo -e "\033[1;32mPushBot V2.3!\nDeveloped By -> Mr. Norkum <-\033[0m"
