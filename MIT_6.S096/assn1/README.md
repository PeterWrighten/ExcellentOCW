# Assign 1 MEMO

## GCC Command

#### 1.```gcc [-c|-S|-E] [-std=standard]```

```gcc -c``` means compiling the xxx.c, ```-S|-E``` means generate and execute prog. This will compile ```xxx.c``` file and give the output file as ```a.out``` file which is default name of output file given by gcc compiler.

#### 2.```-Werror ```

Show warnings and errors. ```-W``` would show warnings.

#### 3.```-Wall```

check not only for warnings and errors, but also ```unused variables errors``` and so on.

#### 4.```-ggdb3```

Allow debug by ```gdb```. ```-g``` option is debugging.

#### 5.```-lm```

```-l``` option is used for linking particular library. For math.h, use ```-lm```.

```
gcc -Wall source.c -o opt -lm
```

#### 5.```-std=c11```

Choose the standard version.

#### 6.```-v```

This option is used for the verbose perpose.

```
$ gcc -v -Wall -std=c99  0085-kadai6-3.c -o 0085-kadai6-3_1

Apple clang version 11.0.3 (clang-1103.0.32.59)
Target: x86_64-apple-darwin20.6.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
 "/Library/Developer/CommandLineTools/usr/bin/clang" -cc1 -triple x86_64-apple-macosx10.15.4 -Wdeprecated-objc-isa-usage -Werror=deprecated-objc-isa-usage -emit-obj -mrelax-all -disable-free -disable-llvm-verifier -discard-value-names -main-file-name 0085-kadai6-3.c -mrelocation-model pic -pic-level 2 -mthread-model posix -mframe-pointer=all -fno-strict-return -masm-verbose -munwind-tables -target-sdk-version=10.15.4 -target-cpu penryn -dwarf-column-info -debugger-tuning=lldb -target-linker-version 556.6 -v -resource-dir /Library/Developer/CommandLineTools/usr/lib/clang/11.0.3 -isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk -I/usr/local/include -internal-isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/local/include -internal-isystem /Library/Developer/CommandLineTools/usr/lib/clang/11.0.3/include -internal-externc-isystem /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include -internal-externc-isystem /Library/Developer/CommandLineTools/usr/include -Wall -Wno-objc-signed-char-bool-implicit-int-conversion -Wno-extra-semi-stmt -Wno-quoted-include-in-framework-header -std=c99 -fdebug-compilation-dir /Users/apple/GitHub/Peter_CS/DataStructure/DataStructure_C/6.構造体２ -ferror-limit 19 -fmessage-length 80 -stack-protector 1 -fstack-check -mdarwin-stkchk-strong-link -fblocks -fencode-extended-block-signature -fregister-global-dtors-with-atexit -fobjc-runtime=macosx-10.15.4 -fmax-type-align=16 -fdiagnostics-show-option -fcolor-diagnostics -o /var/folders/m0/k2ybt6nd3kl08qkw0tnxshkr0000gn/T/0085-kadai6-3-19e6f2.o -x c 0085-kadai6-3.c
clang -cc1 version 11.0.3 (clang-1103.0.32.59) default target x86_64-apple-darwin20.6.0
ignoring nonexistent directory "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/local/include"
ignoring nonexistent directory "/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/Library/Frameworks"
#include "..." search starts here:
#include <...> search starts here:
 /usr/local/include
 /Library/Developer/CommandLineTools/usr/lib/clang/11.0.3/include
 /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include
 /Library/Developer/CommandLineTools/usr/include
 /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/System/Library/Frameworks (framework directory)
End of search list.
 "/Library/Developer/CommandLineTools/usr/bin/ld" -demangle -lto_library /Library/Developer/CommandLineTools/usr/lib/libLTO.dylib -no_deduplicate -dynamic -arch x86_64 -platform_version macos 10.15.4 10.15.4 -syslibroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk -o 0085-kadai6-3_1 /var/folders/m0/k2ybt6nd3kl08qkw0tnxshkr0000gn/T/0085-kadai6-3-19e6f2.o -L/usr/local/lib -lSystem /Library/Developer/CommandLineTools/usr/lib/clang/11.0.3/lib/darwin/libclang_rt.osx.a
 
```
