# Minilab 0

The purpose of today is to make sure that everyone can access
using ssh since we'll be accessing EOS frequently.

## Tasks

1. Remember your account info
   * Everyone should have an account
     * Likely got the account the first time you took a CIS class
   * Username will be the same as your gvsu login name
   * Password is now the same as your gvsu standard password

2. Open up a terminal:
   * On Mac:  spotlight search for terminal - you'll likely want
     to set to keep in the dock since we'll use it so much
   * On Windows:  This is the WSL.  Make sure you've followed the
     [instructions to install WSL](../wsl-guide.md).
     Click the start button and search for
     Ubuntu.  Select it and a terminal should open.


4. Try connecting via ssh.  Type into the terminal
   `ssh userid@eosXX.cis.gvsu.edu` where `XX` is a number between 1 and 31 and `userid`
   is whatever your GVSU username is.

   * If for some reason you get an error like "Network is unreachable",
     just try a different number (someone probably shut down that computer).
   * If you see a question about authenticity/fingerprint, go to [https://services.gvsu.edu/TDClient/60/Portal/KB/ArticleDet?ID=21109](https://services.gvsu.edu/TDClient/60/Portal/KB/ArticleDet?ID=21109) and verify it matches.
     If it does, type `yes`.
   * Note:  if you are ever physically in EOS (maybe someday!), don't shutdown the computers
     because people might be on them remotely.

5. Type 'exit' to disconnect from the remote machine and go back to your computer.

6. Now we are going to make sure it will work when you are not on campus.
   Start up the VPN.  Follow the
   [VPN instructions](https://www.gvsu.edu/it/downloading-installing-and-setting-up-pulse-secure-for-222.htm).
   You only need to download/install 1x.
   Repeat steps 4 and 5 -- if you have any issues, let me know.
