# Test

## <b> A: Prime </b>

Cho số nguyên N, kiểm tra xem N có phải là số nguyên tố không

### Ràng buộc

N <= 10<sup>18</sup>

### Input

Gồm 1 dòng, chứa số nguyên N

### Output

Gồm 1 dòng, chứa kết quả bài toán: "YES" nếu N là số nguyên tố, "NO" nếu ngược lại

### Sample

- Input

```md
2
```

- Output

```md
YES
```

- Input

```md
431290312932134
```

- Output

```md
NO
```

### Subtask

- Sub 1: N <= 10<sup>6</sup> (45%)
- Sub 2: N <= 10<sup>12</sup> (45%)
- Sub 3: Ràng buộc mặc định của đề bài (10%)

## <b> B: Polish Notation </b>

Kí pháp Ba Lan là một cách viết biều thức đại số. Đặc điểm cơ bản của cách viết này là việc không dùng đến các dấu ngoặc và luôn thực hiện từ trái qua phải. Ví dụ:

Với biểu thức $(x+y)*z$ ta có kí pháp Ba Lan của biểu thức là $x \space y + z \space *$.

Cho một xâu kí tự $S$ có độ dài $L$ là biểu thức được viết bằng kí pháp Ba Lan, tính giá trị của biểu thức.

### Ràng buộc

$L$ <= 10<sup>6</sup>

Giá trị của biểu thức được đảm bảo nằm trong khoảng giá trị số nguyên 64 bit

### Input

Gồm 1 dòng chứa xâu ký tự $S$, chứa các chữ số từ 0-9, các dấu +, -, *, /, mỗi số hoặc dấu được các nhau bởi 1 dấu cách.

### Output

Gồm 1 dòng là giá trị của biểu thức

### Sample

- Input

```md
5 10 + 6 *
```

- Output

```md
90
```

## <b> C: Fibonacci Rectangle </b>

Dãy Fibonacci là một dãy vô hạn các số tự nhiên bắt đầu bằng hai phần từ 0 hoặc 1 và 1, các phần tử sau đó được thiết lập theo quy tắc một phần tử luôn bằng tổng 2 phần tử đứng trước nó.

Trong bài này, ta sẽ bắt đầu dãy số với phần tử 1 và 1.

Số thứ N trong dãy Fibonacci được biểu diễn như sau:

$F(0) = F(1) = 1$

$F(N) = F(N - 2) + F(N - 1)$

Một hình chữ nhật có chiều rộng bằng $F(N)$ và chiều dài bằng $F(N + 1)$ được gọi là hình chữ nhật Fibonacci thứ $N$. Hình chữ nhật này có thể được tạo bằng cách ghép $N + 1$ hình vuông có cạnh lần lượt bằng $N + 1$ số Fibonacci đầu tiên.

Chia hình chữ nhật trên thành 1 lưới ô vuông có kích thước $F(N) * F(N + 1)$, gồm $F(N)$ hàng và $F(N + 1)$ cột, ô vuông phía trên cùng bên trái có tọa độ $(1, 1)$, ô vuông phía dưới cùng bên phải có tọa độ $(F(N), F(N + 1))$.

Cắt hình chữ nhật trên thành $N + 1$ hình vuông có độ dài cạnh lần lượt là $N + 1$ phần tử đầu tiên trong dãy Fibonacci.

Bài gồm $T$ test case.

Với mỗi test case, cho số $N$ và một tọa độ $(x, y)$. Có tồn tại hay không cách cắt hình chữ nhật trên sao cho tọa độ trên nằm trong một hình vuông kích thước $1 * 1$.

### Ràng buộc

$T <= 10$<sup>6</sup>

$N <= 40$

$1 <= x, y <= F(N + 1)$

### Input

Dòng 1: số nguyên $T$, số test case của bài

Dòng 2 đến $T + 1$: Mỗi dòng gốm 3 số nguyên $N, x, y$, thứ tự của hình chữ nhật Fibonacci và tọa độ đang xét

### Output

Gồm $T$ dòng, mỗi dòng gồm 1 xâu "YES" hoặc "NO" là kết quả của test case

### Sample

- Input
> 4  
> 1 1 1  
> 2 1 2  
> 3 3 2  
> 4 3 3  

- Output
> YES  
> NO  
> YES  
> NO

- Explain

Một cách vẽ cho test case 1 và 3

## <b> D: Transmit </b>

Công ty X có một mạng lưới gồm $N$ máy tính, mỗi máy có chỉ số khả năng làm việc là $P$<sub>i</sub>. 2 máy tính $i$ và $j$ trong công ty có thể truyền tin cho nhau nếu như $gcd(P$<sub>i</sub>$,P$<sub>j</sub>$) \neq 1$. Công ty đang có $Q$ gói tin, mỗi gói cần được chuyển từ máy $u$ đến máy $v$. Hãy cho biết với mỗi gói tin công ty có thể thực hiện gửi tin trong mạng lưới của mình không.

### Ràng buộc

$N, Q <= 10$<sup>5</sup>

$2 <=$ $P$<sub>i</sub> $<= 10$<sup>9</sup>

$1 <= u, v <= N$

### Input

Dòng 1: Chứa 2 số nguyên $N$, $Q$; số máy tính trong công ty và số gói tin cần được gửi

Dòng 2: Chứa $N$ số nguyên $P$<sub>i</sub>; là chỉ sổ làm việc ứng với từng máy

Dòng 3 đến $Q + 2$: Mỗi dòng chứa 2 số nguyên $u$ và $v$; số hiệu của máy gửi tin và máy cần nhận tin

### Output

Gồm $Q$ dòng, mỗi dòng in ra yêu cầu bài toán; "YES" nếu có thể gửi tin từ máy $u$ đến máy $v$, ngược lại in ra "NO"

### Sample

- Input
> 5 3  
> 15 6 3 4 7  
> 1 2  
> 2 5  
> 1 3

- Output
> YES  
> NO  
> YES

### Subtask (sửa sau)

- Sub 1: $N <= 1000, Q <= 100$ (20%)
- Sub 2: $Q = 1$ (30%)
- Sub 3: Điều kiện mặc định của đề bài (50%)

## <b> E: Explosion </b>

Megumin đang chiến đấu ở trên một bãi quái vật. Bãi quái gốm $N$ con quái vật, con quái thứ $i$ có lượng máu là $H$<sub>i</sub>. Megumin có 2 kĩ năng như sau:
- Burn: Megumin niệm chiêu lên 1 con quái $i$ bất kỳ, gây 1 sát thương cho con quái này. Kĩ năng này tiêu hao 1 MP.
- Explosion: Megumin niệm chiêu lên 1 con quái $i$ bất kỳ, gây $X$ sát thương cho con quái này. 
  - Nếu con quái có $H(i) > X$ máu, nó sẽ mất $X$ máu
  - Nếu con quái có $H(i) <= X$ máu, nó sẽ chết với một vụ nổ, gây $H(i) - 1$ sát thương cho những con quái cạnh nó (con quái thứ $i-1$ và $i+1$). Nếu vụ nổ đủ sát thương để hạ gục con quái thứ $i - 1$ hay $i + 1$ thì nó sẽ tiếp tục phát nổ gây $H(i - 1) - 1$ hoặc $H(i + 1) - 1$ sát thương lên những con quái tiếp theo cho đến khi hết quái lân cận hoặc có quái đỡ được sát thương vụ nổ.  
- Kĩ năng này tiêu tốn $X$ MP và sau khi dùng kĩ năng này thì cô không thể dùng thêm kĩ năng được nữa.

Megumin muốn tiêu diệt bãi quái này một cách gọn gàng và đơn giản, do đó cô nhờ bạn tính xem lượng MP thấp nhất mà cô cần dùng để tiêu diệt hết bãi quái này là bao nhiêu

### Ràng buộc

$N <= 10$<sup>5</sup>

$1 <= H$<sub>i</sub> $<= 10$<sup>9</sup>

### Input

Gốm 2 dòng:
- Dòng 1: chứa số nguyên N, số lượng quái có trong bãi quái vật
- Dòng 2: chứa N số nguyên, lượng máu tương ứng của mỗi con quái vật

### Output

Gồm 1 số nguyên duy nhất là kết quả của bài toán

### Sample

- Input
> 3  
> 1 1 1

- Output
> 3

- Note
> Megumin sử dụng Burn vào mỗi con quái 1 lần

- Input
> 9  
> 1 2 3 2 2 2 3 2 1

- Output
> 12

- Note
> Megumin sử dụng Burn vào 5 con quái cuối cùng lần lượt 1, 2, 3, 2, 1 lần sau đó sử dụng Explosion vào con quái thứ 3 với 3 MP

### Subtask

Sub 1: $N <= 1000$ (40%)
Sub 2: Điều kiện mặc định của đề bài (60%)
