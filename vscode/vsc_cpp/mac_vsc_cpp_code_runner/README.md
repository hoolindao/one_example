# 直接使用插件提供的配置文件

C/C++ 0.22.0 新增的功能

## 环境

- 编译器：gcc
- 插件：[Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)

## （可选）local setting

从 `file>preferencs>settings` 找到插件的设置页，勾选以下内容并剪切到文件夹下的 `settings.json` (使设置仅对该项目有效)

code-runner.ignoreSelection | 关闭框选运行特性
code-runner.saveFileBeforeRun | 运行之前保存
code-runner.runInTerminal | 在集成终端运行
code-runner.executorMap | 代码执行的具体命令 (这个不懂，需要实际设置)

## 测试

- 执行文件内全部代码： 使用快捷键 `ctl+alt+n` 或点击右上角三角形
- 执行选中代码：选中后右键点击 Run Code

## 结果

使用上述设置，在 vscode 集成终端中输出

```text
 lovife@lovifedeMacBook-Pro  ~/one_example/vscode/vsc_cpp/mac_vsc_cpp_code_runner   master  cd "/Users/lovife/one_example/vscode/vsc_cpp/mac_vsc_cpp_code_runner/" && g++ main.cpp -o main && "/Users/lovife/one_example/vscode/vsc_cpp/mac_vsc_cpp_code_runner/"main
Hello World!
```

不使用上述设置，默认显示在 OUTPUT

```text
[Running] cd "/Users/lovife/one_example/vscode/vsc_cpp/mac_vsc_cpp_code_runner/" && g++ main.cpp -o main && "/Users/lovife/one_example/vscode/vsc_cpp/mac_vsc_cpp_code_runner/"main
Hello World!

[Done] exited with code=0 in 0.451 seconds
```