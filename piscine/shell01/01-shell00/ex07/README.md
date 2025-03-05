An introduction to patching files, and the diff tool. I didn't quite get it at first, but being familiar with git and version control, it clicked pretty fast.

The goal of this exercise is to return a file with the contents of `a`, patched with the information in `sw.diff`, both of which are provided in a tarball named `resources.tar.gz`.

A diff file is obtained by comparing two files, and provides a description of how the changes between them can be carried out. This diff file can be used by the patch command to, well, apply a patch to the original file, either directly or by outputting the result to a separate file.

Having the diff file, we can simply use the `patch` command to apply the patches from `sw.diff` onto `a`, outputting the result to `b`.

With this in mind, the command structure is `patch [base_file] -i [diff_file] -o [output file]` (or `patch -i [diff_file] -o [output file] [base_file]`, the relative position of the base file is arbitrary). 
