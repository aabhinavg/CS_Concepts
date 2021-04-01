echo "Which file you want to run"
echo " Press 1 for C / C++"
echo " Press 2 for python"

read -r option

if [ "$option" -eq 2 ]
then
	echo "running single_link list"
	python single_linklist.py
elif [ "$option" -eq 1 ]
then
	echo "running single_linklist.cpp"
	make
else
	echo "Please Enter valid input\n"
fi
