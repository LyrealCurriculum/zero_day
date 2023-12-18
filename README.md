This is the **Setting up your local coding environment** project

It involves two _(2)_ tasks.

0. Create and setup your Git and GitHub account

Installing git locally:
`sudo apt-get update`
`sudo apt-get upgrade`
`sudo apt-get install git`

Configuring basic info:
```
git config --global user.name "USER_NAME"
git config --global user.email "USER_EMAIL"
```

Creating empty repo in remote server via [GitHub.com](https://github.com/USER_NAME/zero_day.git) GUI.

Creating git repo locally and adding from  remote server:
```
mkdir zero_day
cd zero_day
git init
git add remote origin REPO_URL
```
Creating readme file with markdown text via text editor.

Adding, commiting and pushing readme file to remote server:
```
git add README.md
git commit -m 'My first commit'
git push origin master
```


1. Hello Ubuntu

Creating zero_day/0x00-vagrant/README.md:
```
mkdir 0x00-vagrant
touch README.md
```

SSH into Ubuntu VM: 
`ssh root@CONTAINER_IP_ADDRESS`

Running `uname`

Typing output into 0x00-vagrant/0-hello_ubuntu

Adding, commiting and pushing file to remote server:
```
git add 0-hello_ubuntu
git commit -m 'COMMIT_MESSAGE'
git push origin master
```

*[SSH]: Secure Shell
