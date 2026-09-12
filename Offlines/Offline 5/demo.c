int g1, g2, g3;
int garr[5];
int global_arr[10];
int call_count;
int extra_var, extra_arr[2];
int gA, gB, gC;
int gArr[8];

int sum3(int a, int b, int c);
void announce();
int declParamsNamed(int a, int b, int c);
int declParamsUnnamed(int, int, int);
int isEven(int n);
int isOdd(int n);
void emptyFunc(int a, int b);
int complexMath(int a, int b, int c);
void trulyEmpty();
int addNums(int a, int b);
int mulAdd(int a, int b, int c);
int negate(int a);
int getConst();
int max2(int a, int b);
int factorial(int n);
int fib(int n);
int power(int base, int exp);
int sumUpTo(int n);
int gcdFn(int a, int b);

void trulyEmpty() {}

void emptyFunc(int a, int b) {
	; 
	;
}

void announce(){
	g1 = 1;
}

int sum3(int a, int b, int c){
	return a + b + c;
}

int factorial(int n){
	if(n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int isPositive(int n){
	if(n > 0)
		return 1;
	return 0;
}

int addOne(int a){
	a = a + 1;
	return a;
}

int mulTwo(int a, int b){
	return a * b;
}

int combine(int a, int b){
	return addOne(a) + mulTwo(a, b);
}

void voidNoOp(){
	;
}

int isEven(int n) {
	if (n == 0)
		return 1;
	else if (n < 0)
		return isEven(-n);
	else
		return isOdd(n - 1);
}

int isOdd(int n) {
	if (n == 0)
		return 0;
	else if (n < 0)
		return isOdd(-n);
	else
		return isEven(n - 1);
}

int complexMath(int a, int b, int c) {
	int local_arr[5];
	int result;
	
	local_arr[0] = a;
	local_arr[1] = b;
	local_arr[2] = c;
	
	local_arr[3] = a + b * c - (a % (b + 1));
	local_arr[4] = (a + b) * c / 2;

	result = local_arr[!(a < b) || (c == 0)] + local_arr[(a > b && a > c) || (a == 1)];
	
	return result;
}

int addNums(int a, int b){
	return a + b;
}

int mulAdd(int a, int b, int c){
	return a * b + c;
}

int negate(int a){
	return -a;
}

int getConst(){
	return 42;
}

int max2(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}

int fib(int n){
	if(n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int power(int base, int exp){
	if(exp == 0)
		return 1;
	else
		return base * power(base, exp - 1);
}

int sumUpTo(int n){
	int s, i;
	s = 0;
	i = 1;
	while(i <= n){
		s = s + i;
		i++;
	}
	return s;
}

int gcdFn(int a, int b){
	int t;
	while(b != 0){
		t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main(){

	int i, j, k, l, m, n, result, acc, a1, res, sq, flag;
	int arr[15]; 
	int arrA[3], arrB[2];
	int mix1, mix2[3], mix3;
	int p, q, r1, r2, r3, r4, r5, r6, l1, l2;
	int t1, t2, t3, flag1, flag2;

	;

	g1 = 10;
	g2 = 3;
	g3 = 0;

	i = 20;
	j = 6;
	k = 2;

	println(g1);
	println(g2);
	println(i);
	println(j);
	println(k);

	t1 = i + j;
	t2 = i - j;
	t3 = i * j;
	println(t1);
	println(t2);
	println(t3);

	t1 = i / j;
	t2 = i % j;
	println(t1);
	println(t2);

	t1 = i + j * k;
	t2 = (i + j) * k;
	t3 = i - j - k;
	println(t1);
	println(t2);
	println(t3);

	t1 = i - (j - k);
	t2 = i + j + k;
	t3 = i * j / k;
	println(t1);
	println(t2);
	println(t3);

	p = -i;
	q = +j;
	println(p);
	println(q);

	q = - - j;
	println(q);

	q = - - - j;
	println(q);

	r1 = i < j;
	r2 = i <= j;
	r3 = i > j;
	r4 = i >= j;
	r5 = i == j;
	r6 = i != j;

	println(r1);
	println(r2);
	println(r3);
	println(r4);
	println(r5);
	println(r6);

	l1 = r1 || r3;
	l2 = r2 && r5;
	println(l1);
	println(l2);

	l1 = (r1 || r3) && (r4 || r6);
	println(l1);

	l1 = !(i < j);
	l2 = !0;
	println(l1);
	println(l2);

	if((i > 0 && j > 0) || (i < 0 && j < 0))
		l1 = 1;
	else
		l1 = 0;
	println(l1);

	i++;
	println(i);
	i--;
	println(i);

	j++;
	j++;
	println(j);
	j--;
	println(j);

	{
		int inner1, inner2;
		inner1 = i + j;
		inner2 = inner1 * k;
		println(inner1);
		println(inner2);

		{
			int deep;
			deep = inner2 + 100;
			println(deep);
		}
	}

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = arr[0] + arr[1];
	t1 = arr[2];
	println(t1);

	arr[3] = arr[2]++;
	t1 = arr[3];
	println(t1);
	t1 = arr[2];
	println(t1);

	m = arr[2]--;
	println(m);
	t1 = arr[2];
	println(t1);

	garr[0] = -5;
	t1 = garr[0];
	println(t1);

	garr[1] = garr[0]++;
	t1 = garr[1];
	println(t1);
	t1 = garr[0];
	println(t1);

	arrA[0] = 1;
	arrA[1] = 2;
	arrA[2] = arrA[0] + arrA[1];
	t1 = arrA[2];
	println(t1);

	arrB[0] = 9;
	arrB[1] = arrB[0] - 1;
	t1 = arrB[1];
	println(t1);

	mix1 = 5;
	mix2[0] = 1;
	mix2[1] = 2;
	mix2[2] = mix2[0] + mix2[1];
	mix3 = mix1 + mix2[2];
	println(mix1);
	t1 = mix2[2];
	println(t1);
	println(mix3);

	for(i = 0; i < 5; i++){
		arr[i] = i * 2;
		t1 = arr[i];
		println(t1);
	}
	println(i);
	
	for(; i < 8; i++){
		println(i);
	}
	println(i);

	for(i = 0; i < 3; i++)
		println(i);
	println(i);

	for(j = 0; j < 3; j = j + 1){
		k = arr[j];
		println(k);
	}

	k = 4;
	l = 6;
	while(k > 0){
		l = l + 3;
		k--;
	}
	println(l);
	println(k);

	k = 4;
	l = 6;
	while(k--){
		l = l + 3;
	}
	println(l);
	println(k);

	k = 3;
	while(k > 0)
		k--;
	println(k);

	announce();
	println(g1);

	n = sum3(1, 2, 3);
	println(n);

	n = sum3(arr[0], arr[1], arr[2]);
	println(n);

	n = factorial(5);
	println(n);

	n = isPositive(-3);
	println(n);

	n = isPositive(3);
	println(n);

	n = combine(2, 3);
	println(n);

	voidNoOp();

	m = addOne(mulTwo(2, 3));
	println(m);

	t3 = 2 * sum3(1, 2, 3) + 1;
	println(t3);

	result = n + m;
	println(result);

	call_count = 0;
	
	for (i = 0; i < 10; i++) {
		global_arr[i] = i * 2;
	}

	for (i = 0; i < 15; i = i + 1) {
		arr[i] = i;
	}

	i = 2;
	j = 3;
	k = 4;
	
	arr[arr[i] + arr[j] * isEven(k)] = complexMath(arr[1], arr[i], arr[j + 1]);
	t1 = arr[5];
	println(t1);

	int temp;

	acc = 0;
	for (i = 0; i < 5; i++) {
		j = 5;
		while ((j = j - 1) > 0) { 
			if (global_arr[i] % 2 == 0) {
				if (isEven(j)) {
					{
						temp = global_arr[i] * j;
						acc = acc + temp;
					}
				} else {
					acc = acc - j;
				}
			} else {
				acc = acc + 1;
			}
		}
	}
	println(acc);
	
	for (i = 0; i < 6; i++) {
		t1 = global_arr[i];
		println(t1);
	}

	flag1 = isEven(acc) && !isOdd(call_count);
	flag2 = (acc > 100 || call_count < 10) && !(global_arr[2] == 0);
	
	if (flag1 || flag2) {
		acc = acc * - - 1; 
		println(acc);
	} else {
		acc = - - - acc;   
		println(acc);
	}

	j = 0;
	while (j < 3) {
		arr[j++] = global_arr[i--] + 10; 
		t1 = arr[j - 1];
		println(t1);
	}

	emptyFunc(arr[0], global_arr[0]);
	
	trulyEmpty();

	gA = 5;
	gB = 3;
	gC = 0;
	
	t1 = (gA > gB) && (gB > 0);
	println(t1);

	t1 = !((gA < gB) && (gB < 0));
	println(t1);

	gArr[0] = 100;
	gArr[1] = gArr[0]--;
	t1 = gArr[1];
	println(t1);
	
	res = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if((i + j) % 2 == 0)
				res = res + 1;
			else
				res = res - 1;
		}
	}
	println(res);

	a1 = 7;
	if(a1 > 10)
		flag = 1;
	else
		if(a1 > 5)
			flag = 2;
		else
			flag = 3;
	println(flag);

	if(a1 > 0)
		flag = flag + 1;
	println(flag);

	{
		int x1;
		x1 = 1;
		{
			int x2;
			x2 = x1 + 1;
			{
				int x3;
				x3 = x2 + 1;
				{
					int x4;
					x4 = x3 + 1;
					println(x4);
				}
			}
		}
	}

	res = addNums(gA, gB);
	println(res);

	res = mulAdd(2, 3, 4);
	println(res);

	res = negate(gA);
	println(res);

	res = getConst();
	println(res);

	res = max2(gA, gB);
	println(res);

	res = fib(8);
	println(res);

	res = power(2, 10);
	println(res);

	res = sumUpTo(10);
	println(res);

	res = gcdFn(48, 18);
	println(res);

	res = addNums(mulAdd(1, 2, 3), max2(factorial(4), fib(5)));
	println(res);

	t1 = (addNums(gA, gB) + mulAdd(1, 1, 1)) * (max2(3, 9) - 1) % 7;
	println(t1);

	return 0;
}

/*

expected output:

10
3
20
6
2
26
14
120
3
2
32
52
12
16
28
60
-20
6
6
-6
0
0
1
1
0
1
1
0
1
1
1
1
21
20
8
7
27
54
154
3
3
4
4
3
-5
-5
-4
3
8
5
3
8
0
2
4
6
8
5
5
6
7
8
0
1
2
3
0
2
4
18
0
18
-1
0
1
6
6
120
0
1
9
7
13
16
3
100
0
2
4
6
8
10
100
22
20
18
1
1
100
1
2
3
4
8
10
-5
42
5
21
1024
55
6
29
3

*/
