longest = tmp = s[0]
for i, c in enumerate(s[1:]):
    if c < tmp[-1]:
        tmp = c
    else:
        tmp += c
    if len(tmp) > len(longest):
        longest = tmp
print('Longest substring in alphabetical order is: {}'.format(longest))
