# NetworkCamp_Day2

Stop-and-Wait Protocol 구현

* uecho_server.c와uecho_client.c는신뢰성있는데이터전송을보장하지않습니다. (손실된 패킷을 복구하는 기능이 없음)
* 이를보완하여신뢰성있는데이터전송을보장하는Stop-and-WaitProtocol기반의 프로그램을 구현하세요.
* 파일전송이완료되면Throughput을출력하세요.(Throughput=받은데이터양/전송시간)
