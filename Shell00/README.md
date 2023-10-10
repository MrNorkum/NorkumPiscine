# 42-C-Picine

## Table of Contents
2. [*Shell Nedir?*](#SHELL)
    - [Step 1: *vim*](#step-1-vim)
    - [Step 2: Adding User to *sudo* Group](#step-2-adding-user-to-sudo-group)
    - [Step 3: Configuring *sudo*](#step-3-configuring-sudo)
3. [SSH](#ssh)
    - [Step 1: Installing & Configuring SSH](#step-1-installing--configuring-ssh)
    - [Step 2: Installing & Configuring UFW](#step-2-installing--configuring-ufw)
    - [Step 3: Connecting to Server via SSH](#step-3-connecting-to-server-via-ssh)
4. [User Management](#user-management)
    - [Step 1: Setting Up a Strong Password Policy](#step-1-setting-up-a-strong-password-policy)
       - [Password Age](#password-age)
       - [Password Strength](#password-strength)
    - [Step 2: Creating a New User](#step-2-creating-a-new-user)
    - [Step 3: Creating a New Group](#step-3-creating-a-new-group)
5. [*cron*](#cron)
    - [Setting Up a *cron* Job](#setting-up-a-cron-job)
6. [Monitoring](#monitoring)
7. [Bonus](#bonus)
    - [Linux Lighttpd MariaDB PHP *(LLMP)* Stack](#1-linux-lighttpd-mariadb-php-llmp-stack)
       - [Step 1: Installing Lighttpd](#step-1-installing-lighttpd)
       - [Step 2: Installing & Configuring MariaDB](#step-2-installing--configuring-mariadb)
       - [Step 3: Installing PHP](#step-3-installing-php)
       - [Step 4: Downloading & Configuring WordPress](#step-4-downloading--configuring-wordpress)
       - [Step 5: Configuring Lighttpd](#step-5-configuring-lighttpd)
    - [File Transfer Protocol *(FTP)*](#2-file-transfer-protocol-ftp)
       - [Step 1: Installing & Configuring FTP](#step-1-installing--configuring-ftp)
       - [Step 2: Connecting to Server via FTP](#step-2-connecting-to-server-via-ftp)

8. [Submission and peer-evaluation for 1337/42 Students](#peereval)

## *SHELL*

### Step 1: *vim*
Vim nedir?
```
 * **Vim**, Linux ve UNIX sistemlerinde kullanılan bir komut satırı metin düzenleyicisidir.
 * "Komut Modu" ve "Ekleme Modu" olmak üzere **iki temel** mod içerir.
 * Kullanıcılar, Vim'i **özelleştirebilir** ve hızlı klavye kullanımını teşvik eder.
 * Metin işleme için **güçlü araçlar** sunar, örneğin, arama ve değiştirme.
 * **Linux ve UNIX ile uyumlu** olup, komut satırından erişilebilir.
```
Install *sudo* via `apt install sudo`.
```
# apt install sudo
```
Verify whether *sudo* was successfully installed via `dpkg -l | grep sudo`.
```
# dpkg -l | grep sudo
```

### Step 2: Adding User to *sudo* Group
Add user to *sudo* group via `adduser <username> sudo`.
```
# adduser <username> sudo
```
Verify whether user was successfully added to *sudo* group via `getent group sudo`.
```
$ getent group sudo
```
Restart with `reboot` for the changes to take effect.
```
# reboot
```

### Step 3: Configuring *sudo*
Configure *sudo* via `sudo vi /etc/sudoers.d/sudoers`.
```
$ sudo vi /etc/sudoers.d/sudoers
```
Add the following line to the file to limit authentication to 3 attempts in case of incorrect password.
```
Defaults        passwd_tries=3
```
To add error message in case of wrong password:
```
Defaults        badpass_message="<custom-error-message>"
```
###
To log all *sudo* commands to `/var/log/sudo/sudo.log`:
```
$ sudo mkdir /var/log/sudo
<~~~>
Defaults        iolog_dir="/var/log/sudo"
Defaults        logfile="/var/log/sudo/sudo.log"
Defaults        log_input,log_output
<~~~>
```
To require *TTY*:
```
Defaults        requiretty
```
To set *sudo* paths to `/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin`:
```
Defaults        secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```
It should look like this when finished:
```
Defaults        passwd_tries=3
Defaults        badpass_message="<custom-error-message>"
Defaults        iolog_dir="/var/log/sudo"
Defaults        logfile="/var/log/sudo/sudo.log"
Defaults        log_input,log_output
Defaults        requiretty
Defaults        secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

## SSH

### Step 1: Installing & Configuring SSH
Install *openssh-server* via `sudo apt install ssh`.
```
$ sudo apt install ssh
```
Verify whether *openssh-server* was successfully installed via `dpkg -l | grep ssh`.
```
$ dpkg -l | grep ssh
```
Configure SSH via `sudo vi /etc/ssh/sshd_config`.
```
$ sudo vi /etc/ssh/sshd_config
```
To set up SSH using Port 4242, replace below line:
```
13 #Port 22
```
with:
```
13 Port 4242
```
To disable SSH login as *root* irregardless of authentication mechanism, replace below line
```
32 #PermitRootLogin prohibit-password
```
with:
```
32 PermitRootLogin no
```
Check SSH status via `sudo service ssh status`.
```
$ sudo service ssh status
```

### Step 2: Installing & Configuring UFW
Install *ufw* via `sudo apt install ufw`.
```
$ sudo apt install ufw
```
Verify whether *ufw* was successfully installed via `dpkg -l | grep ufw`.
```
$ dpkg -l | grep ufw
```
Enable Firewall via `sudo ufw enable`.
```
$ sudo ufw enable
```
Allow incoming connections using Port 4242 via `sudo ufw allow 4242`.
```
$ sudo ufw allow 4242
```
Check UFW status via `sudo ufw status`.
```
$ sudo ufw status
```

### Step 3: Connecting to Server via SSH
SSH into your virtual machine using Port 4242 via `ssh <username>@<ip-address> -p 4242`.
```
$ ssh <username>@localhost -p 4242
```
Terminate SSH session at any time via `logout`.
```
$ exit
```

## User Management

### Step 1: Setting Up a Strong Password Policy

#### Password Age
Configure password age policy via `sudo vi /etc/login.defs`.
```
$ sudo vi /etc/login.defs
```
To set password to expire every 30 days, replace below line
```
160 PASS_MAX_DAYS   99999
```
with:
```
160 PASS_MAX_DAYS   30
```
To set minimum number of days between password changes to 2 days, replace below line
```
161 PASS_MIN_DAYS   0
```
with:
```
161 PASS_MIN_DAYS   2
```
Leave the following line as is to send a warning message to the user 7 days before the password expires.
```
162 PASS_WARN_AGE   7
```

#### Password Strength
Secondly, to set up policies in relation to password strength, install the *libpam-pwquality* package.
```
$ sudo apt install libpam-pwquality
```
Verify whether *libpam-pwquality* was successfully installed via `dpkg -l | grep libpam-pwquality`.
```
$ dpkg -l | grep libpam-pwquality
```
Configure password strength policy via `sudo vi /etc/pam.d/common-password`, specifically the below line:
```
$ sudo vi /etc/pam.d/common-password
<~~~>
25 password        requisite                       pam_pwquality.so retry=3
<~~~>
```
To set password minimum length to 10 characters, add below option to the above line.
```
minlen=10
```
To require the password to contain at least one uppercase letter, one lowercase letter, and one numeric character:
```
ucredit=-1 dcredit=-1 lcredit=-1
```
To set a maximum of 3 consecutive identical characters:
```
maxrepeat=3
```
To reject the password if it contains `<username>` in some form:
```
reject_username
```
To set the number of changes required in the new password from the old password to 7:
```
difok=7
```
To implement the same policy on *root*:
```
enforce_for_root
```
Finally, it should look like the below:
```
password        requisite                       pam_pwquality.so retry=3 minlen=10 ucredit=-1 dcredit=-1 lcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
```

### Step 2: Creating a New User
Create new user via `sudo adduser <newuser>`.
```
$ sudo adduser <newuser>
```
Verify whether user was successfully created via `getent passwd <newuser>`.
```
$ getent passwd <newuser>
```
Verify newly-created user's password expiry information via `sudo chage -l <newuser>`.
```
$ sudo chage -l <newuser>
Last password change					: <last-password-change-date>
Password expires					: <last-password-change-date + PASS_MAX_DAYS>
Password inactive					: never
Account expires						: never
Minimum number of days between password change		: <PASS_MIN_DAYS>
Maximum number of days between password change		: <PASS_MAX_DAYS>
Number of days of warning before password expires	: <PASS_WARN_AGE>
```

### Step 3: Creating a New Group
Create new *user42* group via `sudo addgroup user42`.
```
$ sudo addgroup user42
```
Add user to *user42* group via `sudo adduser <username> user42`.
```
$ sudo adduser <username> user42
```
Verify whether user was successfully added to *user42* group via `getent group user42`.
```
$ getent group user42
```

## *cron*

### Setting Up a *cron* Job
Configure *cron* as *root* via `sudo crontab -u root -e`.
```
$ sudo crontab -u root -e
```
To schedule a shell script to run every 10 minutes, add the following line.
```
24 */10 * * * * sh /usr/bin/monitoring.sh
```
Check *root*'s scheduled *cron* jobs via `sudo crontab -u root -l`.
```
$ sudo crontab -u root -l
```
## Monitoring

You need to create a simple script called monitoring.sh. Once the server starts, the script will display some information (listed below) on all terminals every 10 minutes.
Your script must always be able to display the following information:<br/>
• The architecture of your operating system and its kernel version.<br/>
• The number of physical processors.<br/>
• The number of virtual processors.<br/>
• The current available RAM on your server and its utilization rate as a percentage.<br/>
• The current available memory on your server and its utilization rate as a percentage.<br/>
• The current utilization rate of your processors as a percentage.<br/>
• The date and time of the last reboot.<br/>
• Whether LVM is active or not.<br/>
• The number of active connections.<br/>
• The number of users using the server.<br/>
• The IPv4 address of your server and its MAC (Media Access Control) address.<br/>
• The number of commands executed with the sudo program.

You can find the script `monitoring.sh` in this repository.

## Bonus

### #1: Linux Lighttpd MariaDB PHP *(LLMP)* Stack

#### Step 1: Installing Lighttpd
Install *lighttpd* via `sudo apt install lighttpd`.
```
$ sudo apt install lighttpd
```
Verify whether *lighttpd* was successfully installed via `dpkg -l | grep lighttpd`.
```
$ dpkg -l | grep lighttpd
```
Allow incoming connections using Port 80 via `sudo ufw allow 80`.
```
$ sudo ufw allow 80
```

#### Step 2: Installing & Configuring MariaDB
Install *mariadb-server* via `sudo apt install mariadb-server`.
```
$ sudo apt install mariadb-server
```
Verify whether *mariadb-server* was successfully installed via `dpkg -l | grep mariadb-server`.
```
$ dpkg -l | grep mariadb-server
```
Start the script to remove insecure settings via sudo `sudo mysql_secure_installation`.
```
$ sudo mysql_secure_installation
Enter current password for root (enter for none): #Just press Enter (do not confuse database root with system root)
Set root password? [Y/n] n
Remove anonymous users? [Y/n] Y
Disallow root login remotely? [Y/n] Y
Remove test database and access to it? [Y/n] Y
Reload privilege tables now? [Y/n] Y
```
Log in to the MariaDB console via `sudo mariadb`.
```
$ sudo mariadb
MariaDB [(none)]>
```
Create new database via `CREATE DATABASE <database-name>;`.
```
MariaDB [(none)]> CREATE DATABASE <database-name>;
```
Create new database user and grant them full privileges on the newly-created database via `GRANT ALL ON <database-name>.* TO '<data-username>'@'localhost' IDENTIFIED BY '<data-password>' WITH GRANT OPTION;`.
```
MariaDB [(none)]> GRANT ALL ON <database-name>.* TO '<data-username>'@'localhost' IDENTIFIED BY '<data-password>' WITH GRANT OPTION;
```
Flush the privileges via `FLUSH PRIVILEGES;`.
```
MariaDB [(none)]> FLUSH PRIVILEGES;
```
Exit the MariaDB shell via `exit`.
```
MariaDB [(none)]> exit
```
Verify whether database user was successfully created by logging in to the MariaDB console via `mariadb -u <data-username> -p`.
```
$ mariadb -u <data-username> -p
Enter password: <data-password>
MariaDB [(none)]>
```
Confirm whether database user has access to the database via `SHOW DATABASES;`.
```
MariaDB [(none)]> SHOW DATABASES;
+--------------------+
| Database           |
+--------------------+
| <database-name>    |
| information_schema |
+--------------------+
```
Exit the MariaDB shell via `exit`.
```
MariaDB [(none)]> exit
```

#### Step 3: Installing PHP
Install *php-cgi* & *php-mysql* via `sudo apt install php-cgi php-mysql`.
```
$ sudo apt install php-cgi php-mysql
```
Verify whether *php-cgi* & *php-mysql* was successfully installed via `dpkg -l | grep php`.
```
$ dpkg -l | grep php
```

#### Step 4: Downloading & Configuring WordPress
Install *wget* via `sudo apt install wget`.
```
$ sudo apt install wget
```
Download WordPress to `/var/www/html` via `sudo wget http://wordpress.org/latest.tar.gz -P /var/www/html`.
```
$ sudo wget http://wordpress.org/latest.tar.gz -P /var/www/html
```
Extract downloaded content via `sudo tar -xzvf /var/www/html/latest.tar.gz`.
```
$ sudo tar -xzvf /var/www/html/latest.tar.gz
```
Remove tarball via `sudo rm /var/www/html/latest.tar.gz`.
```
$ sudo rm -rf /var/www/html/latest.tar.gz
```
Copy content of `/var/www/html/wordpress` to `/var/www/html` via `sudo cp -r /var/www/html/wordpress/* /var/www/html`.
```
$ sudo cp -r /var/www/html/wordpress/* /var/www/html
```
Remove `/var/www/html/wordpress` via `sudo rm -rf /var/www/html/wordpress`
```
$ sudo rm -rf /var/www/html/wordpress
```
Create WordPress configuration file from its sample via `sudo cp /var/www/html/wp-config-sample.php /var/www/html/wp-config.php`.
```
$ sudo cp /var/www/html/wp-config-sample.php /var/www/html/wp-config.php
```
Configure WordPress to reference previously-created MariaDB database & user via `sudo vi /var/www/html/wp-config.php`.
```
$ sudo vi /var/www/html/wp-config.php
```
Replace the below
```
23 define( 'DB_NAME', 'database_name_here' );^M
26 define( 'DB_USER', 'username_here' );^M
29 define( 'DB_PASSWORD', 'password_here' );^M
```
with:
```
23 define( 'DB_NAME', '<database-name>' );^M
26 define( 'DB_USER', '<data-username>' );^M
29 define( 'DB_PASSWORD', '<data-password>' );^M
```

#### Step 5: Configuring Lighttpd
Enable below modules via `sudo lighty-enable-mod fastcgi; sudo lighty-enable-mod fastcgi-php; sudo service lighttpd force-reload`.
```
$ sudo lighty-enable-mod fastcgi
$ sudo lighty-enable-mod fastcgi-php
$ sudo service lighttpd force-reload
```

### #2: File Transfer Protocol *(FTP)*

#### Step 1: Installing & Configuring FTP
Install FTP via `sudo apt install vsftpd/ftp`.
```
$ sudo apt install ftp
$ sudo apt install vsftpd
```
Verify whether *vsftpd/ftp* was successfully installed via `dpkg -l | grep vsftpd/ftp`.
```
$ dpkg -l | grep ftp
$ dpkg -l | grep vsftpd
```
Allow incoming connections using Port 21 via `sudo ufw allow 21`.
```
$ sudo ufw allow 21
```
Configure *vsftpd* via `sudo vi /etc/vsftpd.conf`.
```
$ sudo vi /etc/vsftpd.conf
```
To enable any form of FTP write command, uncomment below line:
```
31 #write_enable=YES
```
To set root folder for FTP-connected user to `/home/<username>/ftp`, add below lines:
```
$ sudo mkdir /home/<username>/ftp
$ sudo mkdir /home/<username>/ftp/files
$ sudo chown nobody:nogroup /home/<username>/ftp
$ sudo chmod a-w /home/<username>/ftp
<~~~>
user_sub_token=$USER
local_root=/home/$USER/ftp
<~~~>
```
To prevent user from accessing files or using commands outside the directory tree, uncomment below line:
```
114 #chroot_local_user=YES
```
To whitelist FTP, add below lines:
```
$ sudo vi /etc/vsftpd.userlist
$ echo <username> | sudo tee -a /etc/vsftpd.userlist
<~~~>
userlist_enable=YES
userlist_file=/etc/vsftpd.userlist
userlist_deny=NO
<~~~>
```

#### Step 2: Connecting to Server via FTP
FTP into your virtual machine via `ftp <ip-address>`.
```
$ ftp <ip-address>
```
Terminate FTP session at any time via `CTRL + D`.

## <a name="peereval">Application and peer review for Ecole 42 students</a>

You only have to turn in a signature.txt file at the root of your Git repository. You must paste in it the signature of your machine’s virtual disk. To get this signature, you first have to open the default installation folder (it is the folder where your VMs are saved):

• MacOS: `shasum born2beroot.vdi`

This is an example of what kind of output you will get:

• `6e657c4619944be17df3c31faa030c25e43e40af`

Little Q&A from Subject and whattocheck as evaluator. You can find it in this repository.

I think it's done for now. I highly recommend repeating the installation process several times, if possible, in order to remember and understand everything well. Especially if this is your first time working both Linux and a virtual machine.
