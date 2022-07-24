# **C - Archery**

Tại một trường bắn, một cung thủ thực hiện N phát bắn vào một mục tiêu có M vòng điểm. 

Mục tiêu có thể được mô tả như sau

* Tâm của mục tiêu có tọa độ 0 (R<sub>0</sub> = 0).
* Với i = 0, 1, ..., M - 1, nếu mũi tên có khoảng cách so với tâm trong khoảng từ R<sub>i</sub> đến R<sub>i+1</sub>, cung thủ được S<sub>i</sub> điểm.
* Nếu mũi tên có khoảng cách so với tâm lớn hơn S<sub>M</sub>, cung thủ không được điểm
* Mũi tên bắn càng gần tâm, điểm càng cao (S<sub>0</sub> > S<sub>1</sub> > ... > S<sub>M</sub>)

Một luật đặc biệt được áp dụng: 2 mũi tên bất kỳ phải cách nhau ít nhất D

Tìm số điểm lớn nhất mà cung thủ có thể đạt được

Giới hạn:
* 1 <= N, M <= 10<sup>5</sup>
* 1 <= D <= 10<sup>6</sup>
* 0 = R<sub>0</sub> < R<sub>1</sub> < ... < R<sub>M</sub> < 10<sup>11</sup>
* 10<sup>11</sup> >= S<sub>0</sub> > ... > S<sub>M-1</sub> > 0
* Tất cả số liệu đều là số nguyên

Input: Gồm 3 dòng
* Dòng 1: Gồm 3 số N, M, D
* Dòng 2: Gồm M + 1 số R<sub>0</sub>, R<sub>1</sub>, ..., R<sub>M</sub>
* Dòng 3: Gồm M số S<sub>0</sub>, S<sub>1</sub>, ..., S<sub>M-1</sub>

Output:  
Gồm 1 dòng là kết quả bài toán

Sample:
> 3 3 3
0 2 5 6
90 60 30

Output:
> 240

Subtask:
* Sub 1: 1 <= N, M, D <= 100 (25%)
* Sub 2: 1 <= M, D <= 1000 (25%)
* Sub 3: Giới hạn mặc định (50%)