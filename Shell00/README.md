# 42-C-Picine

## Table of Contents
1. [*Shell Nedir?*](#SHELL)
    - [Step 1: *vim*](#step-1-vim)
    - [Step 2: *vim kullanımı*](#step-2-vim-kullanımı)
    - [Step 3: Configuring *sudo*](#step-3-configuring-sudo)

4. [User Management](#user-management)
    - [Step 1: Setting Up a Strong Password Policy](#step-1-setting-up-a-strong-password-policy)
       - [Password Age](#password-age)
       - [Password Strength](#password-strength)
    - [Step 2: Creating a New User](#step-2-creating-a-new-user)
    - [Step 3: Creating a New Group](#step-3-creating-a-new-group)

## *SHELL*

### Step 1: *vim*
Vim nedir?
```
• 'Vim', Linux ve UNIX sistemlerinde kullanılan bir komut satırı metin düzenleyicisidir.
• "Komut Modu" ve "Ekleme Modu" olmak üzere 'iki temel' mod içerir.
• Kullanıcılar, Vim'i 'özelleştirebilir' ve hızlı klavye kullanımını teşvik eder.
• Metin işleme için **güçlü 'araçlar' sunar, örneğin, arama ve değiştirme.
• 'Linux ve UNIX ile uyumlu' olup, komut satırından erişilebilir.
```
Install *sudo* via `apt install sudo`.
```
# apt install sudo
```
Verify whether *sudo* was successfully installed via `dpkg -l | grep sudo`.
```
# dpkg -l | grep sudo
```

### Step 2: Vim kullanımı
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
## Monitoring

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
