#!/bin/sh
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
sudo sed -i '/fish/d' /etc/shells
sudo sed -i '/bash/d' /etc/shells
sudo sed -i '/zsh/d' /etc/shells
sudo sh -c "echo /bin/zsh >> /etc/shells"
sudo sh -c "echo /bin/fish >> /etc/shells"
sudo sh -c "echo /bin/bash >> /etc/shells"
if [ $SHELL = "/usr/bin/zsh" -o $SHELL == "/bin/zsh" ]; then
  sed -i '/asl/d' ~/.zshrc
  echo 'alias asl="./.asl"' >> ~/.zshrc
  echo 'zsh'
elif [ $SHELL = "/usr/bin/fish" -o $SHELL == "/bin/fish" ]; then
  sed -i '/asl/d' ~/.config/fish/config.fish
  echo 'alias asl="./.asl"' >> ~/.config/fish/config.fish
  echo 'fish'
elif [ $SHELL = "/usr/bin/bash" -o $SHELL == "/bin/bash" ]; then
  sed -i '/asl/d' ~/.bashrc
  echo 'alias asl="./.asl"' >> ~/.bashrc
  echo 'bash'
else 
  echo "Your shell is currently not supported, or an issue is occuring with the code!"
fi
rm -r ASL
echo 'Complete!'
