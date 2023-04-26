# ClosedLoop
Framework for closed loop experiments using cbpy

### Cerelinkのインストール
build済みのCerelinkディレクトリをC:/Users/yakusにコピー
git, cmake, Visual Studio Community 2017(C++関連とPython), Qt（両方選択）をインストール
```
$ set QTDIR=C:/Qt/Qt5.12.9/5.12.9/msvc2017_64
$ cd C:/Users/yakus/Cerelink
$ pip install .
```
Cerelinkフォルダのdist/binから3つのdllを仮想環境のPythonのpath/Lib/site-packages/cerebusにコピー

### 必要なパッケージのインストール
```
$ pip install -r requirements.txt
```
