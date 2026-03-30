year=int(input("Enetr an year: "))
month=int(input("Enter an month:"))
day=int(input("Enter an day :"))
if month == 2:
    if year%4==0 and year %100!=0 and year%400==0:
        max_days=29
    else:
        max_days=20
if month == 1 or month ==3 or month == 5 or month  
man