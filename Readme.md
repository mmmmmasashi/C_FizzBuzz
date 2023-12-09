# 環境構築
## VSCodeでC言語開発
- ["C/C++ for Visual Studio Code"](https://code.visualstudio.com/docs/languages/cpp)
  - "Go to the MinGW tutorial"へ
- Make
  - 以下を参考にMakeとVSCodeのMakefile Tools拡張をインストール
  - [Windowsのmakeコマンドの設定方法](https://zenn.dev/genki86web/articles/6e61c167fbe926)
## 単体テスト環境(CppUTest)
- インストール
  - CppUTest
    - 以下を参考に実施。CMakeのインストールも必要になっている。
    - [【丁寧解説】CppUTestをWindowsにインストール【MinGW-w64版】](https://yukblog.net/cpputest-mingw-install/)
- テスト実行まで
  - [公式のマニュアル](https://cpputest.github.io/manual.html)
    - そのままでは動かないことがおおいので、こまごま直しながら作る
  - [setup Cpputest framework](https://matheusmbar.com/bugfree-robot/2019/03/19/set_cppputest_framework.html)