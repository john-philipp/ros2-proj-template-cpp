scriptDir=$(dirname "$(pwd)/${BASH_SOURCE[0]}")
source "$scriptDir/_methods.sh"

before

cmake -G Ninja .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .

after

