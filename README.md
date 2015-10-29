# Lower Alpha Keyspace Reducer
This is a small program written in C++ that will output 8-length lower alpha combinations (excluding i and o) while 
skipping over certain combinations it believes to be invalid.

Only combinations which meet these criteria will be printed:<br>
&nbsp;&bull; each character cannot appear more than 4 times<br>
&nbsp;&bull; no 3 characters in a row can be identical<br>
&nbsp;&bull; no 3 characters in a row can be sequential (abc)<br>
&nbsp;&bull; no 3 characters in a row can be reverse sequential (cba)<br>
&nbsp;&bull; character 2 is not equal to character 1<br>
&nbsp;&bull; character 2 is not +2 to character 1<br>
&nbsp;&bull; character 2 is not +3 to character 1<br>
&nbsp;&bull; character 2 is not +5 to character 1<br>
&nbsp;&bull; character 2 is not -1 to character 1<br>
&nbsp;&bull; character 2 is not -4 to character 1<br>
&nbsp;&bull; character 3 is not +2 to character 1<br>
&nbsp;&bull; character 3 is not +2 to character 2<br>
&nbsp;&bull; character 3 is not +3 to character 2<br>
&nbsp;&bull; character 3 is not +4 to character 2<br>
&nbsp;&bull; character 3 is not +5 to character 2<br>
&nbsp;&bull; character 3 is not -1 to character 1<br>
&nbsp;&bull; character 3 is not -2 to character 2<br>
&nbsp;&bull; character 3 is not -4 to character 2<br>
&nbsp;&bull; character 3 is not -5 to character 2<br>
&nbsp;&bull; character 5 is not equal to character 4<br>
&nbsp;&bull; characters 1 and 3 and 4 are not identical<br>
&nbsp;&bull; characters 1 and 3, and 2 and 4 are not identical<br>
&nbsp;&bull; characters 2, 3 and 8 cannot be identical<br>

Without any rules applied there are 110,075,314,176 (24^8) possible combinations in the keyspace.

Applying these rules brings it down to 38,469,126,600 combinations (or about 35% of the keyspace).

To compile on Windows (requires the <a href="http://www.microsoft.com/en-us/download/details.aspx?id=8279">Windows 7 SDK</a>):<br>
`cl /EHsc la.cpp`

To compile on Linux:<br>
`g++ la.cpp -ola`

##Example usage:
`la | oclHashcat64 -m 2500 CAP.hccap`<br>
pipes its output into <a href="http://hashcat.net/oclhashcat/">oclHashcat</a> (AMD)

`la | cudaHashcat64 -m 2500 CAP.hccap`<br>
pipes its output into <a href="http://hashcat.net/oclhashcat/">cudaHashcat</a> (NVIDIA)

`la | aircrack-ng -w - CAP.cap -e SSID`<br>
pipes its output into <a href="http://www.aircrack-ng.org/">aircrack-ng</a>

`./la | pyrit -r CAP.cap -i- attack_passthrough`<br>
pipes its output into <a href="https://code.google.com/p/pyrit/">pyrit</a>

## Parameters
You can optionally specify any of these parameters to further refine your output.

`-random`<br>
Will randomize its output while still maintaining rules<br>

`-upper`<br>
Forces all output to be uppercase<br>

`-lower`<br>
Forces all output to be lowercase<br>

`-Xuniques`<br>
Only outputs combinations which have X unique characters in them (typically 6, 7 or 8)<br>

`-Xminuniques`<br>
Only outputs combinations which have a minimum of X unique characters in them.<br>

`-startswithX`<br>
Only outputs combinations which start with x (can be a-z).<br>

`-start X`<br>
Start on combination X (where X is a number between 0 and 38469126600)<br>

`-stop X`<br>
Stop on combination X (where X is a number between 1 and 38469126600)<br>
