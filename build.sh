#/bin/bash
 
gcc -shared -o libC_in_Java.so C_in_Java.c \
-fPIC -I/usr/lib/jvm/default-java/include \
-I/usr/lib/jvm/default-java/include/linux