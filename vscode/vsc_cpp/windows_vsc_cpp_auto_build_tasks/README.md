# 直接使用插件提供的配置文件

C/C++ 0.22.0 新增的功能

## 环境

- 编译器：MinGW-w64
- 插件：[C/C++ - Visual Studio Marketplace](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

## 测试

`shift+clr+p` 打开 vscode 命令窗口，输入

```text
>C/C++: build and Debug Active File
```

选择

```text
g++.exe build and debug active file
```

## 结果

如果 MinGW-w64 配置正确，插件将自动生成正确的 task.json 并编译和执行测试代码

```text
Windows PowerShell
版权所有 (C) Microsoft Corporation。保留所有权利。

Hello World!

> []
```