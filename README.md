题目描述
输入一个偶数 N，验证 4∼N 所有偶数是否符合哥德巴赫猜想：任一大于 2 的偶数都可写成两个质数之和。如果一个数不止一种分法，则输出第一个加数相比其他分法最小的方案。例如 10，10=3+7=5+5，则 10=5+5 是错误答案。

输入格式
第一行输入一个正偶数 N

输出格式
输出  
2
N−2
​
  行。对于第 i 行：

首先先输出正偶数 2i+2，然后输出等号，再输出加和为 2i+2 且第一个加数最小的两个质数，以加号隔开。
