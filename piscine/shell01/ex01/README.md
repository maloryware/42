The first big giveaway comes with the PDF detailing the goals - a reference to `man id`, begging us to RTFM. It requests listing all the groups to which the user (defined by the environment variable `FT_USER`) belongs, and to print it in a single line, separated by commas, with no spaces.

Therefore, there's two vertents:
- Guaranteeing the proper usage of `id`;
- Parsing the output with proper formatting.

Step by step, we begin with `id -nG $FT_USER`, where:
- `id -n` returns a name as opposed to a number;
- `id -G` returns every relevant group;
- `$FT_USER` tells the command to refer to the user stored in that environment variable.

Afterward, we pipe the result into `tr ' ' ','`, where:
- `tr` stands for the command 'translate', allowing us to convert every instance of a given character into another;
- `' '` defines the set of characters to look for (in this case, a whitespace);
- `','` defines the set of characters with which to replace the first (in this case, a comma).

Finally, in order to combine the commands into one single line, we use the `|` (pipe) operation, which tells the operation on the left of it to, instead of push its result to the standard output, do so to the second operation.

All put together, we get:

`id -nG $FT_USER | tr ' ' ','`
