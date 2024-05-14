'''
# 완전하지 않은 암호화
def makeCodebook():
    decbook = {'5':'a', '2':'b', '#':'d', '8':'e', '1':'f', '3':'g', '4':'h', '6':'i', '0':'l', '9':'m',\
        '*':'n', '%':'o', '=':'p', '(':'r', ')':'s', ';':'t', '?':'u', '@':'v', ':':'y', '7':' '}

    encbook = {}
    for k in decbook:
        val = decbook[k]

        encbook[val] = k

    return encbook, decbook

def encrypt(msg, encbook):
    for c in msg:
        if c in encbook:
            msg = msg.replace(c, encbook[c])

    return msg

def decrypt(msg, decbook):
    for c in msg:
        if c in decbook:
            msg = msg.replace(c, decbook [c])

    return msg
'''
'''
# version 1..
if __name__ == '__main__':
    plaintext = 'I love you with all my heart'

    encbook, decbook = makeCodebook()
    ciphertext = encrypt(plaintext, encbook)
    print(ciphertext)

    deciphertext = decrypt(ciphertext, decbook)
    print(deciphertext)
'''
'''
# version 2..
if __name__ == '__main__':
    h = open('plain.txt', 'rt')
    # h = open('plain.txt', 'rt', encoding='UTF8')
    content = h.read() # 읽은 내용을 모두 content에 저장
    h.close()

    encbook, decbook = makeCodebook()
    content = encrypt(content, encbook)

    h = open('encryption.txt', 'wt+')
    # 텍스트 쓰기 모드(파일이 존재하지 않으면 새로 생성)
    h.write(content)
    h.close()
'''

'''
# readme.txt 내용을 readme_copy.txt로 복사
file = open('readme.txt', 'rt')
content = ''
content = file.read()
print(content)
file.close()

file = open('readme_copy.txt', 'wt+')
file.write(content)
file.close()
'''
