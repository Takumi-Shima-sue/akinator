import pandas as pd
import numpy as np
import random

# csvファイルを読み込む
df = pd.read_csv("feynmann.csv")
df = df.drop(columns=['カードID'])
df = df.rename(columns={'質問': 'Question', '回答': 'Answer', '重要度': 'Importance'})

# 正答
ans = 'Feynmann'

# カードを入れる手札のリスト
hand = [] 
hand2 = []

# 山札からカードを手に入れる
print('山札から%d枚引きました' % 4)
for i in range(4):
    hand.append(df.iloc[random.randint(0, 26)]['Question'])
    # print(hand[i])
    # print(random.randint(0, 26))
    # print(df.iloc[3]['Question'])

# 新しいカードを山札から引く
print('山札から新たに%d枚引きました' % 1)
hand.append(df.iloc[random.randint(0, 26)]['Question'])

# 持っているカードを表示する
for i in range(len(hand)):
    print(hand[i])

# カードを宣言する（今はスキップ）
# print('使用するカードを選んで下さい')

# 質問を行う
print()
print('質問を選んで下さい：')
question = input()
# column_nameがtarget_valueと一致する行を取得する
filtered_df = df[df['Question'] == question]
    # 自分の手札と一致しない場合の例外処理を入れる
    # 現状は手札に無くても回答を入れられる（リークしている）状態なので、リストにdfの1行をそのまま入れる仕様に変える

# Yes or No の回答が来る
if(filtered_df['Answer'].iloc[0]):
    print('Yes')
else:
    print('No')


# 回答をする
print('回答を行って下さい：')
your_ans = input()

# 正誤判定を行う
if(your_ans == ans):
    print("正解！！")
else:
    print("不正解")
