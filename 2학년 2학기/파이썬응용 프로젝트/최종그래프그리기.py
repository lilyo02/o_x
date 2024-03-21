import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv('경찰청정리.csv', index_col = '년도', encoding = 'utf-8-sig')

plt.rcParams.update({'font.family':'malgun gothic', 'font.size':10})

#막대그래프
data.plot(kind = "bar")

plt.title('년도 별 음주운전자 중 재범인 수')

#비교해야 할 두 그래프
plt.plot(data[['전체', '재범']])

plt.xlabel('수')
plt.ylabel('년도')

plt.show()
