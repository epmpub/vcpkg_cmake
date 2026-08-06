--install first
```
sudo apt install ninja-build
sudo apt install pkg-config

sudo apt-get install curl zip unzip tar
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg && ./bootstrap-vcpkg.sh
# add to ~/.bashrc

export VCPKG_ROOT=~/vcpkg
export PATH=$VCPKG_ROOT:$PATH

```
