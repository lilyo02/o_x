import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('경찰청정리.csv', index_col = '년도', encoding = 'utf-8')

plt.figure("년도 별 음주운전 재범자수")

plt.rcParams.update({'font.family':'malgun gothic', 'font.size':10})

# 차트 제목
plt.title('년도 별 음주운전자 중 재범인 수')

# x축, y축 제목
plt.xlabel('년도')
plt.ylabel('수')

ax = plt.gca()

data.plot(kind = 'line', ax = ax)

plt.show()

