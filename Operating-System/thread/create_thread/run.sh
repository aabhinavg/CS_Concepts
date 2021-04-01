echo "Which file you want to run"
echo " Press 1 for C "
echo " Press 2 for python"

read -r option

if [ "$option" -eq 2 ]
then
	echo "running fork.py"
	python create_thread.py
elif [ "$option" -eq 1 ]
then
	echo "running both create_thread.c"
	echo " run ./thread to see output from c"
	make
else
	echo "Please Enter valid input\n"
fi
