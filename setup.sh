
echo 'This script will add an alias for ASL and will compile it.'
cd ~
rm -r ASL
mkdir ASL
cd ASL
git clone https://github.com/Aslen420/ASL
cd ASL
mv ASL .ASL
g++ asl.cpp
mv a.out asl
cd ~
echo 'alias asl="./ASL/ASL/asl"' >> .bashrc
cd ~
echo 'Complete!'
