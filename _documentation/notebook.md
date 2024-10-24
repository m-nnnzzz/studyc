# GIT---------------------------------------------------------------------------------------------

# how to clone repository
git clone "repositoryURL.git"

# how to associate github repository to local
git init 
    - initialise git in the folder
git clone "repositoryURL.git"
    - clone repository files to local
git remote add origin "repositoryURL.git"
    - add remote access
git remote -v
    - verify remote access

# git changes
git status
    - check changes
git add .
    - add all changes
git commit -m "your commit message here"
    - add commit message
git push
    - push changes to repository

# COMPILE-----------------------------------------------------------------------------------------
# compile c in terminal
clang "c file" -o "output file"
gcc "c file" -o "output file"

# run compiled c in terminal
./"compiled c file"

# compile c an run compiled c in terminal
clang ./source/main.c -o main && ./main
gcc ./source/main.c -o main && ./main

# terminal/cli cd commands
.. 
    - parent directory

