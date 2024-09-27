# Minilab 09

In project1, we looked at the most common
words in ratings with both 4 stars and 2 stars. 
What if we needed to repeat this process regularly
for some other potential set of ratings?

Today we are going to adapt project 1 to accomplish
this by turning it into a shell script. 
If you didn't finish project1 or don't feel like
working with the whole list of commands, don't worry about
outputting the most common words, just create
your script so it goes as far as 
combining the relevant ratings into a file.

### Part 1
Write a shell script that
1. Takes as its first argument the path to the reviews directory
   (so it doesn't need to be inside the folder to run your script --
   aka, your script should be able to be run from any folder on your
   computer).  Make sure it's not in the reviews folder for testing
   purposes (or you won't know this is working).
2. Use the `test -d` command to check if the typed in directory is
   valid.  If so, `cd` into the directory, if not print an error message
   and call `exit 1` to exit bash script early
   (non-zero exit codes are generally used to indicate
   an error).
3. Takes as its second argument the rating number to
   process and output the most common words for that rating
   (or simply concatenate all reviews with that rating to
   a single file if you didn't finish the project).  You'll need
   to modify the `cat` command to use the inputted rating number.
   * Have your script check to make sure it is a valid rating number
     (so what happens if someone types in 0, 10, etc. -- this would
     be another good place to exit if it is invalid).


### Part 2 (for more practice, optional)
The purpose of this part is to practice with loops in bash scripts.
* Instead of accepting 2 arguments, loop through all possible
  values and produce output for all possible rating numbers

### Part 3 (for more practice, optional)
This part will help you practice with the idea of nesting conditionals/loops.
Modify your script to:
* Accept either 2 or 3 arguments.
* If there are 3 instead
  of 2, use those as start/end for the range of ratings to
  process together as one.
* If there are 2, just print out the most common words (or just combine)
  for the requested rating.
