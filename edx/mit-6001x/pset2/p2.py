n = lambda b,i,p,m=11: n(b - p + i*(b-p), i, p, m - 1) if m else b - p + i*(b-p)
lo, hi, pmnt = 0, 1000000, 500000
while hi - lo > 10:
    bal = n(balance, annualInterestRate / 12.0, pmnt)
    if bal > 0:
        pmnt, lo = round((pmnt + hi) // 2, -1), pmnt
    elif bal < 0:
        pmnt, hi = round((pmnt + lo) // 2, -1), pmnt
    else:
        break
print('Lowest Payment: ', hi)
