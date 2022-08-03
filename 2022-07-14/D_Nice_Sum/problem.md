# **D - Nice Sum**

Cho 2 số nguyên dương S và K. Một dãy số nguyên dương A = (A<sub>1</sub>, A<sub>2</sub>, …, A<sub>n</sub>) được goi là một **dãy số đẹp** khi thỏa mãn 2 điều kiện:  
  * 1 <= A<sub>1</sub> < A<sub>2</sub> < … < A<sub>n</sub> < S
  * Với mỗi bộ số (x<sub>1</sub>, x<sub>2</sub>, …, x<sub>n</sub>) nguyên không âm bất kỳ, A<sub>1</sub>x<sub>1</sub> + A<sub>2</sub>x<sub>2</sub> + … + A<sub>n</sub>x<sub>n</sub> khác S  

Gọi A = (A<sub>1</sub>, A<sub>2</sub>, … , A<sub>n</sub>) là **dãy số đẹp** có giá trị n lớn nhất với thứ tự từ điển nhỏ nhất, đưa ra giá trị A<sub>K</sub> hoặc -1 nếu K > N  
Cho T bộ test, hãy đưa ra kết quả của từng bộ test.

Giới hạn: 
* T <= 1000
* 3 <= S <= 10<sup>18</sup>
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