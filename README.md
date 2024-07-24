# NetworkCamp_Day2

Stop-and-Wait Protocol 구현

* UDP통신을 사용하는 uecho_server.c와 uecho_client.c는 신뢰성있는 데이터전송을 보장하지 않기에 (손실된 패킷을 복구하는 기능이 없음)
* 이를보완하여 신뢰성있는 데이터전송을 보장하는 Stop-and-WaitProtocol 기반의 프로그램 구현
* 파일전송이 완료되면 Throughput 출력 (Throughput = 받은데이터양 / 전송시간)


1 시도
<img width="1139" alt="image" src="https://github.com/user-attachments/assets/cd119b03-07ed-488b-8f83-b40ede836c95">
: 1. 일단 파일말고 메세지로 client -> server (clnt: serv야 나 접속했어! 암레디!)
  2. 메세지로 sequence, ack 잘 오고가는지 확인

2시도 (파일을 보내보자)

