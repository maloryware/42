An exercise I failed multiple times due to not paying close attention to the instructions.

The rules to respect here are:
- Find all **files** in the current directory and its subdirectories;
- Match only the ones that start **and** end in `#`, and the ones that end in `~`;
- **Show and erase** all of these files.

With that in mind, we:
- Use the `find` command with the `-type` parameter. and pass it `f` (to specify "files only");

stub
