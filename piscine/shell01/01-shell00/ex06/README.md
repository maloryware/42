The goal here is to list all ignored files within the repository. As such, the most consistent way of going about this is to explore the parameters of `git-ls-ignore` through its manual.

My original submission was `git check-ignore **\*` (which, to be quite honest, I [copied from a Stack Overflow post](https://stackoverflow.com/questions/466764/git-command-to-show-which-specific-files-are-ignored-by-gitignore) without paying much mind to what it did) but Moulinette, the automated evaluation system, did not approve it. 

The current submission was what I settled for; a reference to `git ls-files` with the `--ignore` flag (`-i`) as well as the standard exclusions `--exclude-standard`, since `-i` requires at least one exclusion parameter.
