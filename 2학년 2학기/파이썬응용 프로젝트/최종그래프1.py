import pandas as pd
import matplotlib.pyplot as plt

# CSV 파일을 읽어온다
data = pd.read_csv('건수정리.csv', encoding = 'cp949')

# csv의 불필요한 부분 잘라내기
data = data.drop(columns = ['중상'])
data = data.drop(columns = ['경상'])
data = data.drop(columns = ['부상신고'])

plt.rcParams.update({'font.family':'malgun gothic', 'font.size':10})

# 막대 그래프 그리기
data.plot(kind = "bar")

plt.title("발생건수에 따른 부상자수와 사망자수 비교")

plt.show()
