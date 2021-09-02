n = lambda b,i,p,m=11: n(b - p + i*(b-p), i, p, m - 1) if m else b - p + i*(b-p)
lo, hi, pmnt = 0, 1000000, 500000
while hi - lo > 0.01:
    bal = n(balance, annualInterestRate / 12.0, pmnt)
    if bal > 0:
        pmnt, lo = (pmnt + hi) / 2, pmnt
    elif bal < 0:
        pmnt, hi = (pmnt + lo) / 2, pmnt
    else:
        break
print('Lowest Payment: {:.2f}'.format(hi))
