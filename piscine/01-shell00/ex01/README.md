This exercise serves as an introduction to file attributes - specifically **permissions**, **file size** and **date**.

Starting with permissions:

In UNIX, file/folder permissions are defined by a string of 10 characters, divided into a singlet and three groups of three. The default representation makes no effort to distinguish them, but realistically, instead of `----------`, this line can be seen as `-|---|---|---`, where:

- The first field defines the type of object (file/directory/hard link/symlink);
- Fields 2, 3, 4 determine the Read, Write, and Execute permissions for the User (u);
- Fields 5, 6, 7 determine the Read, Write, and Execute permissions for the Group (g) to which the user belongs;
- Fields 8, 9, 10 determine the Read, Write, and Execute permissions for every Other (o) user.
This provides an easy to memorize mnemonic of `ugo` (like **Hugo**, the name!)

The permission fields can be manipulated with `chmod`, where we pass one or more of `ugo` (or `a`, for all), followed by a plus (add), minus (remove), or equal (set) sign, followed by the permission we want to modify.

As such, to change the permissions of the user (`u`) so that they can execute (`x`) the file, we would run `chmod u+x filename`.

Editing the date can be done with the `touch` command, through either the `-d` (date) or `-t` (timestamp) flags. I used `-t 0601XXXX`, where the mandatory arguments are MM|DD|HH|MM.    


Note: As the defined date exceeds 6 months on either side, instead of the hour, the year is displayed instead!


