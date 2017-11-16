cat $1 | grep -Ei "^(nicolas|bauer)" | grep -i "nicolas" | grep -i "bauer" | rev | cut -d$'\t' -f 2 | rev | grep '\(([0-9]\{3\})\|[0-9]\{3\}\)[ -]\?[0-9]\{3\}[ -]\?[0-9]\{4\}'
