# **D - Nice Sum**

Cho 2 số nguyên dương S và K. Một dãy số nguyên dương A = (A1, A2, …, An) được goi là một dãy số đẹp khi thỏa mãn 2 điều kiện:  
  * 1 <= A1 < A2 < … < An < S
  * Với mỗi bộ số (x1, x2, …, xn) không âm bất kỳ, A1x1 + A2x2 + … + Anxn khác S  

Gọi A = (A1, A2, …, An) là dãy số đẹp có thứ tự từ điển nhỏ nhất với giá trị n lớn nhất có thể thỏa mãn 2 điều kiện trên, đưa ra giá trị Ak hoặc -1 nếu K > N  
Cho T bộ test, hãy đưa ra kết quả của từng bộ test.

Giới hạn: 
* T <= 1000
* 3 <= S <= 1e18
* 1 <= K < S

Input: Gồm T + 1 dòng  
* Dòng 1 chứa số T, chỉ số bộ test  
* Dòng 2 đến T + 1, mỗi dòng chứa 2 số nguyên S và K  

Output: Gồm T dòng, mỗi dòng in ra kết quả của bộ test

Sample:
> 5  
3 1  
7 4  
10 3  
2022 507  
1000000000000000000 999999999999999999

Output:
> 2  
-1  
8  
1351  
-1

Subtask:  
Sub 1: S <= 500 (50%)  
Sub 2: Giới hạn mặc định của đề