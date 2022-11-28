# CmakeDynamicLibraryTest
windows系统下利用cmake生成c++动态库示例

在windows系统下使用cmake命令生成c++动态库，一般情况下不会生成.lib文件，此时需要在添加如下命令：
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

根目录下的.bat文件是为了避免重复在cmd中输入并执行cmake命令而用，使用时直接在根目录下新建一个文件夹（一般为名为build），并将该bat文件拷贝至该新文件夹下并双击即可，作用和cmd命令
cmake ..
cmake ---build .
一毛一样~
