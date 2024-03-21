import random
print("주민등록번호의 성별 정보 번호를 생성합니다.")
num=random.randint(1,4)

print("생성번호 : ",num)

if num==1 or num==3:
    print("남성입니다")
if num==2 or num==4:
    print("여성입니다")
    
print("프로그램을 종료합니다")
