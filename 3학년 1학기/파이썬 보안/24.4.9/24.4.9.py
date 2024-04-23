'''
# 튜플, 세트, 딕셔너리, 문자열
# 튜플(tuple)은 변경될 수 없는 리스트 / () 따옴표는 상관 없음
# 세트(set)는 중복되지 않은 항목들이 모인 것으로 항목 간에 순서가 없어 인덱싱 불가 / {}
# ㄴ> 세트에 요소를 추가하기 위해서는 add 함수 이용해야하는 듯


# 파티 동시 참석자 알아내기
partyA = set(["Park", "Kim", "Lee"])
partyB = set(["Park", "Choi"])

print("2개의 파티에 모두 참석한 사람은 다음과 같습니다.")
print(partyA.intersection(partyB))


# 단어에서 구두점을 제거하고 소문자로 만든다
def process(w) :
    output = ""
    for ch in w :
        if ( ch.isalpha() ) :
            output += ch
    return output.lower()
words = set()

# 파일을 연다
fname = input("입력 파일 이름 : ")
file = open(fname, "r")

# 파일의 모든 줄에 대하여 반복한다
for line in file :
    lineWords = line.split()        # ()이면 공백을 기준으로 단어 분류?
    for word in lineWords :
        words.add(process(word))    # 단어를 세트에 추가한다

print("사용된 단어의 개수 = ", len(words))
print(words)


# 딕셔너리는 키와 값의 쌍을 저장할 수 있는 객체로 순서가 없어 인덱싱이 불가함
# 이런 형태로 암호화 많이 함 => 공부할 것...

fname = input("파일 이름 : " )
file = open(fname, "r")

table = dict()
for line in file :
    words = line.split()    # words는 각 단어를 항목으로
    # print(words)
    for word in words :
        if word not in table :
            table[word] = 1
        else :
            table[word] += 1

print(table)


table = { "B4": "Before",
          "TX": "Thanks",
          "BBL": "Be Back Later",
          "BCNU": "Be Seeing You",
          "HAND": "Have A Nice Day"}

message = input('번역할 문장을 입력하시오 : ')
words = message.split()
result = ""
for word in words :
    if word in table :
        result += table[word] + " "
    else :
        result += word

print(result)


# 파일을 오픈한다
f = open("./test2.txt", "r", encoding='UTF8')

# 파일의 각 줄에 대하여 반복한다
for line in f.readlines() :
    # 공백 문자를 제거한다
    line = line.strip()
    # 줄을 출력한다
    print(line)
    # 줄을 단어로 분리한다
    words = line.split(",")
    # 줄의 단어를 출력한다
    for word in words :
        print(" ", word)
'''

# 딕셔너리를 이용하여 제품, 값의 형태로 items = {} 선언, 제춤에 대한 값들의 합계 출력
items = {"라면": 650, "우유": 1100, "콜라": 1200, "캔커피": 500, "과자": 700}
s = 0

while True :
    it = input("제품명 : ")
    if it == "" :
        break
    if it in items :
        s = s + items[it]
        print("[%s: %d] > %d" %(it, items[it], s))
    else :
        print(it, "는 미등록 제품입니다")
print("총 금액 : ", s)
