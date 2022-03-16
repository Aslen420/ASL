
echo 'This script will add an alias for ASL and will compile it.'
cd ~
rm .asl
rm -r ASL
mkdir ASL
cd ASL
git clone https://github.com/Aslen420/ASL
cd ASL
g++ asl.cpp
mv a.out .asl
cp .asl ~/
cd ~
sed -i '/asl/d' ./.bashrc
echo 'alias asl="./.asl"' >> .bashrc
rm -r ASL
echo 'Complete!'
