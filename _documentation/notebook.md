# how to clone repository
git clone "repositoryName.git"

# compile c in terminal
clang "c file" -o "output file"

# run compiled c in terminal
./"compiled c file"

# compile c an run compiled c in terminal
clang "c file" -o "output file" && ./"compiled c file"

# terminal/cli cd commands
.. 
    parent directory

# how to associate github repository to local
git init 
    - initialise git in the folder
git clone "repository url"
    - clone repository files to local
git remote add origin https://github.com/username/repo.git
    - from local to repository (remoting)
git remote -v
    - verify if the remote has been added

# how to commit and check changes
git status
git add .
git commit -m "your commit message here"
