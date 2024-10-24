## Test2 Study Guide
Test2 will cover everything in the Linux portion of the course
(e.g. linux, tools and utilities, git, scripting, etc.)
In other words, it will cover everything up to (but not including) C.

The following discusses the main topics and some information on what you would be
expected to do.  This list is not necessarily all inclusive (e.g. there may
be something on test1 not on this list, but covered in class, but is
meant to give you a decent idea).

### New Material Not on Test 1
* processes
    * viewing, killing, etc.
    * running in foreground vs background
* aliases / environment variables
    * create an alias
    * what is PATH and how to change it
* Bash scripting
    * know bash scripting basics
    * write simple bash script or figure out what one does
    * know how to call a bash script
    * arguments, arrays, loops, variables, etc.
* sed
    * what is it
    * how and when to use
    * write simple / figure out what one does
* gawk
    * what is it
    * how does it view files
    * general structure `BEGIN`, `END`, and center part filled with `pattern {action}`
    * how and when to use
    * write simple / figure out what one does
* regular expressions
    * what are the special characters, what do they do
    * what are character classes
    * givem an regex, figure out which strings match
        * note -- this may be different than what a tool prints
    * know the tools we use with them (and know how those are different than just a regex)
        * e.g. if you use `grep` with a regex, it doesn't just print the regex
    * given mulitple strings, write a regex that matches them all (or doesn't match any of them)
    * given a general format, write a regex that matches
      (or alternatively write one that doesn't match any of them)


### Previous Material (also covered on test1)
* Directory structure
    * Understand the general layout
    * Be able to navigate a linux filesystem
    * Understand the difference between relative and
      absolute paths (and be able to use and understand both)
    * Know what `/`, `..`, and `~` do in the context of paths
* Basic commands to navigate via terminal
    * Examples:
        * `cd`
        * `mkdir`
        * `ls`
        * `rm`
        * `pwd`
        * `cp`
        * `mv`
        * others...
    * You should be able to use these effectively and
      understand what given commands do
* Basic commands to view files
    * Examples
        * `more`
        * `cat`
        * `uniq`
        * `sort`
        * others...
    * Know how to call, understand purpose, what would output
      be, when to use what, etc.
* Remote access and file transfer
    * What commands did we use, what did what, understand
      how to call
* Compressing / uncompressing files
    * What commands, what was the difference between them
* Archiving files
    * What is archiving, what command, what is it's purpose
* Recording shell sessions (`script` command)
* `history` command
* Input/output/stderr redirection
    * How to use
    * Which is which
    * Append vs overwrite
    * Be able to use, identify what output would be, etc.
* Piping
    * What is it
    * When / how to use
    * Difference between it and redirection
* File manipulation
    * Examples
        * `cut`
        * `tr`
        * others...
    * What do they do
    * In what scenarios would you use each of them
* Basic Utilities
    * Examples
        * `diff`
        * `wc`
        * `grep`
        * others...
    * What do they do, be able to call, when to use each
* git
    * operations
    * general idea
    * general process 
    * local and remote
    * branches
    * merging and resolving merge conflicts
* file permissions
    * what do they mean
    * how to view
    * how to change
    * read, write, execute


### Big Picture Tasks
* Be able to write, understand, and use things like bash, sed, gawk
* Be able to identify what command to use when
* Understand how commands navigate, what output of command is
* **KNOW TO USE AND BE ABLE TO READ THE MANPAGES**
* Be able to use regular expressions

