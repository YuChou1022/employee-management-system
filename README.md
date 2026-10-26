# 职工管理系统（Qt 版）

用 C++20 + Qt 6 Widgets 写的职工管理系统，从控制台版本迁移到图形界面。

## 环境要求

| 项目 | 说明 |
| --- | --- |
| 操作系统 | Windows 10 / 11 |
| 编译器 | MSVC（Visual Studio 2022 / 2026，C++ 桌面开发工作负载） |
| 构建工具 | CMake ≥ 3.21 + Ninja |
| UI 框架 | Qt 6（Widgets 模块） |

Qt 的安装路径通过环境变量 `QTDIR` 指定（本机为 `D:/Qt`），`CMakePresets.json` 里的 `CMAKE_PREFIX_PATH` 会读取它。

## 目录结构

```
EmployeeManagementsQt/
├── CMakeLists.txt              # 构建脚本（AUTOMOC / AUTOUIC / AUTORCC）
├── CMakePresets.json           # 预设：x64-debug / x64-release / x86-debug / x86-release
├── EmployeeManagementsQt.cpp   # 程序入口：QApplication + MainWindow
├── EmployeeManagementsQt.h     # 公共头文件（占位）
├── MainWindow.h / MainWindow.cpp  # 主窗口类
└── MainWindow.ui               # Qt Designer 界面文件
```

## 构建与运行

用 Visual Studio 直接「打开文件夹」即可，VS 会读取 `CMakePresets.json`，选 `x64 Debug` 配置后生成。

命令行方式（需要先进入 VS 的 x64 开发者环境，即运行 `vcvars64.bat`）：

```powershell
cmake --preset x64-debug
cmake --build out/build/x64-debug
.\out\build\x64-debug\EmployeeManagementsQt.exe
```

## 当前进度

- [x] 主窗口（800 × 500）显示
- [x] 「测试按钮」点击后弹出提示框
- [ ] 职工信息表格
- [ ] 增加 / 删除 / 修改 / 查询
- [ ] 数据持久化到文件

## 已知问题

用 Visual Studio 的 **Qt Visual Studio Tools** 扩展打开本工程时，扩展会自动生成 `CMakeUserPresets.json`，其中的 `Qt` 预设和 `CMakePresets.json` 里同名的隐藏预设冲突，CMake 会报：

```
CMake Error: Duplicate preset: "Qt"
```

这会让 VS 的 CMake 配置失败、全项目出现 "无法打开源文件" 的红线。处理办法：

1. 把 `CMakeUserPresets.json` 的内容改成空预设并保存：

   ```json
   {
     "version": 3,
     "configurePresets": []
   }
   ```

2. 右键该文件 → 属性 → 勾选「只读」，防止扩展再次改写。

本项目已在 `.gitignore` 中忽略 `CMakeUserPresets.json`、`out/`、`.vs/`。
