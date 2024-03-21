n = int(input("정수를 입력하세요 : "))
hap = 0
while n > 0 :
    digit = n % 10
    hap += digit
    n //= 10

print("자리수의 합 = %d" %hap)
