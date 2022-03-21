# to find the number of files less than 5 lines of code aka the one I procastinated

find . -type f | xargs wc -l | awk '$1 < 5'

# Pro Tip : 

# Use ./check.sh | wc -l to get the count of the files