#! /bin/bash
echo "Hi"
echo "Share us your name"
read name
echo "Welcome $name. We have just created a folder with 5 subfolders named $name!"
mkdir $name
cd $name
for sf in 1 2 3 4 5
do
mkdir "$name"_"$sf" 
done
cd ..
echo "Enjoy your day ;)"
