for i in range(12):
    unp = balance - balance * monthlyPaymentRate
    balance = unp + unp * annualInterestRate / 12.0
print('Remaining balance: {:.2f}'.format(balance))    
