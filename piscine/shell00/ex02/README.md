Like the exercise before, consists of changing attributes for multiple files at once.

Unlike the exercise before, however, this one involves **object links**, which are represented by the `l`s on the first permission field, and/or the number shown immediately after. 
Files can be linked together so as to behave as shortcuts for one another, or to share the same information between multiple locations and filenames. The **hard link count** of a file/folder is usually 1 for files and 2 for folders.

`test3` and `test5` are linked together, accomplished through the `ln` command. `test6` is a symlink of `test0`, thus the `l` in its first permissions field.
