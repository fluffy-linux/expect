#
# trap2.tcl
#
#	Used in conjunction with trap.test.  This script traps
#	SIGINT and SIGQUIT.
#
# RCS: $Header: /home/rhencke/Source/github.com/fluffy-linux/expect.git/../expect/expect/win/tests/Attic/trap2.tcl,v 1.1.2.1 2001/09/13 01:14:18 davygrvy Exp $

set exp_nt_debug 1
spawn telnet quimby.cs.berkeley.edu

trap {
    puts "Caught SIGINT"
} SIGINT

trap {
    puts "Caught SIGQUIT"
    close
} SIGQUIT

set x 1
vwait x
