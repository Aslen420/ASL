
echo 'This script will add an alias for ASL and will compile it.'
cd ~
rm -r ASL
mkdir ASL
cd ASL
git clone https://github.com/Aslen420/ASL
cd ASL
g++ asl.cpp
mv a.out asl
cd ~
sed -i '/asl/d' ./.bashrc
echo 'alias asl="./ASL/ASL/asl"' >> .bashrc
cd ~
echo 'Complete!'
