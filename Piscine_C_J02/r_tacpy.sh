cut -d: -f 1 | sed -n "2~2 p" | rev | sort -r | sed -n "$MY_LINE1, $MY_LINE2 p" | sed -e 's/$/, /g' | tr -d "\n" | sed -e 's/, $/\.\n/g'
