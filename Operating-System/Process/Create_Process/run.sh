echo "Which file you want to run"
echo " Press 1 for C / C++"
echo " Press 2 for python"

read -r option

if [ "$option" -eq 1 ]
then
	echo "running fork.py"
	python fork.py
elif [ "$option" -eq 2 ]
then
	echo "running both fork.c and fork.cpp"
	echo " run ./fork to see output from c and ./forka to see output from c++"
	make
else
	echo "Please Enter valid input\n"
fi
