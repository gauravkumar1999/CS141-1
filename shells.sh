#! /bin/bash
echo "Hello there! What is your name?"
read name
echo "Hello $name we will now create a folder and a cpp file named $name"
echo "in progress..."
mkdir $name
cd $name
touch $name.cpp
cd ..
echo "Done :)"
