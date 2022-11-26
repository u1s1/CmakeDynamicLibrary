# CmakeBynamicLibraryTest
windows系统下利用cmake生成c++动态库示例

在windows系统下使用cmake命令生成c++动态库，一般情况下不会生成.lib文件，此时需要在添加如下命令：
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
