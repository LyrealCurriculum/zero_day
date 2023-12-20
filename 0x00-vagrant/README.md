  This is the subdirectory zero_day/0x00-vagrant.

It contains the code file for the task which involves:

1. Hello Ubuntu

Creating zero_day/0x00-vagrant/README.md:
```
mkdir 0x00-vagrant
touch README.md
```

Doing [^1] SSH into Ubuntu VM: 
`ssh root@CONTAINER_IP_ADDRESS`

Running `uname`

Typing output into 0x00-vagrant/0-hello_ubuntu

Adding, commiting and pushing file to remote server:
```
git add 0-hello_ubuntu
git commit -m 'COMMIT_MESSAGE'
git push origin master
```
[^1]: Secure Shell
