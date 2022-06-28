sorted((4,1,9,6),reverse=True)
fruits = ['apple', 'watermelon', 'pear', 'banana']
a = sorted(fruits, key = lambda x : len(x))
print(a)
# 輸出：['pear', 'apple', 'banana', 'watermelon']
divmod(a,b)
把除數和餘數運算結果結合起來，返回一個包含商和餘數的元組(a // b, a % b)
int()
用於將一個字串或數字轉換為整型。函式語法為：class int(x, base=10)，x--字串或數字;base--進位制數，預設十進位制。
pow(base, exp[, mod])
回傳 base 的 exp 次方；如果 mod 存在，則回傳 base 的 exp 次方對 mod 取餘數。兩個引數形式的 pow(exp, exp) 等價於次方運算子：base**exp。
>>> pow(38, -1, mod=97)
23
>>> 23 * 38 % 97 == 1
True