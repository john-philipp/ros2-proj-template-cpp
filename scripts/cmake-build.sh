scriptDir=$(dirname "$(pwd)/${BASH_SOURCE[0]}")
source "$scriptDir/_methods.sh"

before

cmake ..
make

after