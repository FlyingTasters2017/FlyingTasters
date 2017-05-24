#!/usr/bin/perl -w
use strict;
open OUT, ">ConstraintErrors.inc";
open DATA, "grep 'efine ERR_' ../../auto-src/".$ARGV[0]."|";
my $first = 1;
while(<DATA>) {
    chomp;
    my $line = $_;
    if (m/^#define\s+(ERR_\w+)\s+(\d+)/) {
	my $errCode = $2;
	if ($first) {
	    $first = 0;
	    print OUT "if (ErrCode == $errCode) {\n";
	} else {
	    print OUT "} else if (ErrCode == $errCode) {\n";
	}
	$line =~ s#^\#define\s+ERR_asn1Scc(\w+)\s+\d+\s+/\*(.*?)\*/#$1 $2#;
	$line =~ s#*##g;
	print OUT "    msg += string(\"$line\");\n";
    }
}
close DATA;
if (!$first) {
    print OUT "}\n";
}
close OUT;
