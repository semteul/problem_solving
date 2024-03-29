# [Silver I] 추월 - 2002 

[문제 링크](https://www.acmicpc.net/problem/2002) 

### 성능 요약

메모리: 31120 KB, 시간: 116 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 구현, 문자열

### 제출 일자

2024년 3월 21일 20:47:31

### 문제 설명

<p>대한민국을 비롯한 대부분의 나라에서는 터널 내에서의 차선 변경을 법률로 금하고 있다. 조금만 관찰력이 있는 학생이라면 터널 내부에서는 차선이 파선이 아닌 실선으로 되어 있다는 것을 알고 있을 것이다. 이는 차선을 변경할 수 없음을 말하는 것이고, 따라서 터널 내부에서의 추월은 불가능하다.</p>

<p>소문난 명콤비 경찰 대근이와 영식이가 추월하는 차량을 잡기 위해 한 터널에 투입되었다. 대근이는 터널의 입구에, 영식이는 터널의 출구에 각각 잠복하고, 대근이는 차가 터널에 들어가는 순서대로, 영식이는 차가 터널에서 나오는 순서대로 각각 차량 번호를 적어 두었다.</p>

<p>N개의 차량이 지나간 후, 대근이와 영식이는 자신들이 적어 둔 차량 번호의 목록을 보고, 터널 내부에서 반드시 추월을 했을 것으로 여겨지는 차들이 몇 대 있다는 것을 알게 되었다. 대근이와 영식이를 도와 이를 구하는 프로그램을 작성해 보자.</p>

### 입력 

 <p>입력은 총 2N+1개의 줄로 이루어져 있다. 첫 줄에는 차의 대수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 대근이가 적은 차량 번호 목록이 주어지고, N+2째 줄부터 N개의 줄에는 영식이가 적은 차량 번호 목록이 주어진다. 각 차량 번호는 6글자 이상 8글자 이하의 문자열로, 영어 대문자('A'-'Z')와 숫자('0'-'9')로만 이루어져 있다.</p>

<p>같은 차량 번호가 두 번 이상 주어지는 경우는 없다.</p>

### 출력 

 <p>첫째 줄에 터널 내부에서 반드시 추월을 했을 것으로 여겨지는 차가 몇 대인지 출력한다.</p>


### 풀이과정
24/3/21
아... 조금 많이 헤맸다.

먼저 떠올린것은, 일단 두 리스트의 각 원소의 인덱스를 서로 비교해보면 내 앞에 얼마나 차가 추월했는지 알 수 있지 않을까였다.
처음에는 단순히 순서가 더 앞으로 간 원소를 세주었다. 문제는 추월한 차를 또 다른 차가 추월한 경우이다. 이 경우에는 원래 순서로 오거나, 오히려 더 뒤로갈 수도 있다. 이런 경우에는 셀 수가 없다.

조금 더 고민해 보니, 한번 추월해서 순서가 바뀌면, 앞의 인덱스도 변함없이 변화해야 한다는 것을 알게 되었다. 예를 들어서 3위인 차가 1위로 들어오게 된다면, 원래 1위, 2위였던 차는 2위, 3위로 +1만큼 순위가 바뀌어야 한다. 그걸 이용했다. 역순으로 순회했다.

순서를 해쉬맵에 미리 넣어놓고 O(1)만에 찾아가는 건 어찌저찌 바로 알아내긴 했는데 시행착오가 많았다.
