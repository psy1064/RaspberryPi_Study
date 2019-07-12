
--- 


---

# 1\. 라즈비안 설치

## 1\. 준비물1."Raspbian Image File
2.  Etcher Flash Program : Raspian Image File을 Micro SD card에 구워주는 프로그램
3.  Micro SD card

## 2\. Raspbian

[Raspbian](</h2>
<https://www.raspberrypi.org/downloads/raspbian/) 링크로 들어가서 네모버튼을 클릭하여 ZIP 파일 다운로드 후 압축 해제를 한다.![](https://t1.daumcdn.net/cfile/tistory/99F5B94A5CC5672D23)

## 3\. Etcher Flashrogram

cher Flash Program 다운로드](https://www.balena.io/etcher/)로 들어가서 Download for Windows를 눌러 프로그램 다운로드를 한다.

프로그램을 실행하면 다음과 같은 창이 뜨게 되는데 Select image 버튼을 클릭하여 다운받은 Raspbian Image File을 선택한다.  
![enter image description here](https://lh3.googleusercontent.com/OJrmiay_Bg-pS5ndXuOxJLts66m-MrHnzg6fQ2WEeIM3m41VutFE8tzUEVT40GbQm8ePhHD1MDfu)

enter image descrMicro SD Card가 삽입된 USB를 선택하고 Flash 버튼을 누르게 되면  
![enter image description here](https://lh3.googleusercontent.com/VbEAJaGesbnbb5zG0Tk_chEsrQpDrv8uHoDjCeTLBojoE_xyPhedbYlw34aaoKW2fXLnRitMxjPH)

Flash가 진행된다.  
![iption here](https://lh3.googleusercontent.com/zAAQSRIuLnmPF-IJaRYPdaGjNHEIF2_5AvJNOkSQM7Xps8dmSje9Hp_4fTya2T9rUnvbfReia5-5)

Flash가 완료되면 Micro SD Card를 Reader기에서 제거 후 Raspberrypi에 꽂아준다.  
![enter image description here](<bhttps://lh3.googleusercontent.com/MLg-wpzbFG_BAHkuUWAmZfl5LFu8VWzEMnRshCcKA7JnINuM853s5oSovFvFFGVLad4NshaKZc5h)

* * *

# 2\. 라즈비안 초기 설정

## 언어 설정

미국식 키보드를 이용해서 프로그래밍을 진행해기 위해선 언어를 먼저 설정해야 한다. 터미널에서 sudo raspi-config` 명령어를 입력하고 여기서 4\. Localisation Options를 선택하고 I1\. Change Locale을 선택한다.

![enter image description here](https://lh3.googleusercontent.com/jf6NaNrnQz9V4mYSeHJSjWK40GugmB3xlclWZKfUV_h2_iCF8fs4b-fxwO4z0S6g5JFfBmc8P7en)![enter image description here](https://lh3.googleusercontent.com/XfPfOMYrP7adrWn8EAeDBpDaoVAa0qfOaBS3ZS8nvxNUBMM7rTcEmvdCotLz2NzTIF2CLF-FVln1)![enter image description here](https://lh3.googleusercontent.com/gT6ooJcsZuhneDBzonew2sxjV4FhNnrLTQPI58wt6ZmjwSXOprZbz-GkvdQXAgvZZ2FIy-xTrfif)

Change Locale 항목을 선택하고 들어가면 여러 언어의 옵션이 있는데 키보드의 방향키를 이용해서 en_GB,UTF-8 UTF-8, en_US.UTF-8 UTF-8을 스페이스바를 눌러서 선택해준다.  
![enter image description here](https://lh3.googleusercontent.com/16M1nwsvLevI_Aokd5qw8vlk8BhCX9bhgwZ0jKliTB7SB8BE7X1FrSUz6ZDOuCMJ7hm56e-7MlpA)  
![enter image description here](https://lh3.googleusercontent.com/jsVu2IFNRHwoQz8aQLf7sDbBHuSqIe_8O2_CbkqMARf_fTw1MhWJuMiBSlP0fuvFxG1-g4Mkccc5)

엔터를 누르게 되면 기본 언어를 설정하는 창이 뜨게 된다. 여기서 en_US.UTF-8 UTF-8을 기본 언어로 선택하면 된다.

![enter image description here](https://lh3.googleusercontent.com/ejXmuQrlp9kXu7UBV4Dc_Y-A1Ijlp8-lfpO7NBkqIGwmSptUU1baY1uSFreU8vXza_kra_l2wTk5)

다음으로 키보드 레이아웃 설정이다. 처음화면에서 4\. Localisation Option을 선택한 후 I3\. Change Keyboard Layout을 선택한다.

![enter image description here](https://lh3.googleusercontent.com/XfPfOMYrP7adrWn8EAeDBpDaoVAa0qfOaBS3ZS8nvxNUBMM7rTcEmvdCotLz2NzTIF2CLF-FVln1)![enter image description here](https://lh3.googleusercontent.com/yW1cYpHzW3BrCbHk3Ej5HVjJb_WUubT2mUVqq5v8nv5Ct39Qu1nhi-2CUpMrjUkyCTaBNmsiwJy2)

Generic 105-key PC (intl.)을 선택하고 엔터를 눌러준다. 그리고 Korean - Korean (101/104 key compatible)을 선택한 후 마지막으로 No compose key를 선택한 후 엔터를 누르면 된다.  
![enter image description here](https://lh3.googleusercontent.com/ZVifZ0x3lm3IprZf7Citwuy7Jef8vj4FYxD8yj-N1poVRDvrgg0gUFJRGhISwzl2HimJslxNiIBH)  
![enter image description here](https://lh3.googleusercontent.com/GOqlJStk3Pe_-ZuWyXmZLOl27rAG_rGJJAeEwNRSJDRVqxxOd4X_2SNsYGNU4vz5RAg2g6nCl5Zj)  
![enter image description here](https://lh3.googleusercontent.com/Dlhynn5WbenrfZZliyLu4PKw4xE_IeujIhfos032POXj_elx9A1jNXgj-PAM2zmSfwDltlpAQDvi)

# 3\. putty를 이용한 원격접속

## 1\iption here"></p>
<h1 id="putty를-이용한-원격접속">3. putty를 이용한 원격접속</h1>
<h2 id="ssh-enable">1. SSH Enable

putty를 이용하여 원격접속을 하기위해서는 먼저 SSH를 활성화 시켜줘야 한다. 터미널에서 `sudo raspi-config` 명령어를 입력한다. 여기서 5\. Interfacing Options > P2 SSH 를 선택한다.

![enter image description here](https://lh3.googleusercontent.com/SJTPs2tVLIfv9bVLgGdoILUZCrR-sYzmtvg6lYvpW39LIRgFHX06e9onA8-V-2pgFmoSEvMvzZBb)  
![enter image description here](">https://lh3.googleusercontent.com/M9h2WbNABtGxh2SdSwGTmFuZ3ZschxtcnwbQAHvjuG65ptL7GyLYCV4S_RxkbKhy_a-fX22VnNqp)

" alt="enter image descr다음과 같은 창이 뜨게되면 Yes를 선택하고 엔터를 눌러주면 SSH가 활성화 된다.  
![enter image description herehttps://lh3.googleusercontent.com/B3tV66S6zyUZOmSRvAbo0KP12FbuVApuMUIMUgnwSXHbxVJ9sqLNS6OFSvJxVPvmnBhcoThtB6ue)  
![enter image description here](https://lh3.googleusercontent.com/FoVQaJ02u76ft6UxEsVkYizb5shGTTiI7aUBLnFoLGrMM2m8qWjZHwy9C_FWtcvoytV3OhiFXJ7e)

## 2\. IP 주소 확인

ssh를 활성화를 했다면 IP 주소를 확인해야 한다. 터미널에서 `ifconfig 로 ip addr를 확인해야 한다. 유선으로 연결했다면 eth, 무선으로 연결했다면 wlan에서 inet을 확인한다.

![enter image description here](https://lh3.googleusercontent.com/eg08NMFsTG3FBrJ5cbUp8z9nnVQ3N7ARzeK1u2ZC8NEMvYIjtsYX3jbPmMZ8gb9BhF-BmN98YYHm)

inet 값을 putty의 Host Name (or IP address) 칸에 입력한 후 Open을 누르면 로그인 창이 뜬다. 초기 ID와 Password는 pi / raspberry 이다. 아이디와 패스워드가 맞다면 아래처럼 실행이 된다.  
![enter image description here](https://lh3.googleusercontent.com/1k_mYhgaWKOfHSbIMc8Ylt4d-sM4iMl31vOv1_H_G-bWafIGhGLttapkKaq_hPqlQdTR1NUyVac8)  
![](https://lh3.googleusercontent.com/tCsRp2qNhb2_jAbGBRu3R7QihR7MmcCLj-J_FCM_iCogXZJRq7Pn4ROBxUdiWAA3eylWCzybFh6c)  
![](https://lh3.googleusercontent.com/nFFNv6gPusc6xm20a9aQowCD-wYJ3dRJjf5SUbYFoLqPpn860Oufv721BeivlIPSs5iC6R_pJfc2)

## 3\. 고정 IP주소 할당

먼저 `netstat -nr` 명령어를 입력해 gateway 주소를 확인하고 `sudo nano /etc/dhcpcd.conf` 명령어를 입력한다.

![enter image description here](https://lh3.googleusercontent.com/-2UQGauDdjacj47xbXc10XDzKD1UwuXxFFWhTudasB6e6rU_kxbH4sXKnI6ZAGD_jT_5qk-tK7oQ)  
![enter image description here](https://lh3.googleusercontent.com/Szp4FImltjrTikLctZW-p_VntbXD9_lQc4qQ1SriMCPmPGd3UGXvstbwKi77VAqpPCVFMqPzDNCd)

static ip_address, static routers, static domain_name_servers의 주석을 지우고 하얗게 칠한 부분을 ip_address는 원하는 IP주소, domain_name_servers에는 `netstat -nr` 로 확인한 gateway 주소를 입력한다. 그 후 `sudo reboot` 를 이용해 재부팅한 후 `ifconfig` 로 다시 아이피를 확인해보면 설정한 IP가 할당되어 있다.

# 4\. Samba 서버 접속과 설치방법

## 1\. 삼바(Samba)란?

Windows 운영체제를 사용하는 PC에서 Linux 또는 Unix 서버에 접속하여 파일이나 프린터를 공유하여 사용할 수 있도록 해주는 소프트웨어이다.

## 2\. 삼바 설치

터미널에서 `sudo apt-get update`을 입력하여 업데이트를 해준 다음 `sudo apt-get install samba samba-common-bin`명령어를 이용하여 설치한다.

![enter image description here](https://lh3.googleusercontent.com/c5bFenfNTbJHpnagp-2DEFiFZZe-GEpE1rg9hrF-RGwxCw270AeED2Lz_idlfsyY3o8ca_hbnwnx)

## 3\. 삼바 유저 추가 및 패스워드 설정

설치가 완료되었다면 `sudo smbpasswd -a pi` 명령어를 입력해 비밀번호를 설정해야 한다. 설정한 다음 `sudo nano /etc/samba/smb.conf`로 들어간다.  
![enter image description here](https://lh3.googleusercontent.com/dH5xzGXhtb9WRwmnQr8aPiz7A-14xoHi3JBZj_ik3M3e00KhBgydRTgi9m85cTiJroPdXQyc0baQ)

smb.conf 파일에 들어온 후 다음과 같이 수정한다.  
![enter image description here](https://lh3.googleusercontent.com/4jAWtqjKE-X5YSvtDoWpzGQVMoZNC-DQno6_mmP4IOtBL8YEMsf5H9bdNjDdo0GWZD2F4GpanFgT)

> comment = 유저 서버 설정에 대한 코멘트  
> path = 삼바 서버 접속 시 최초 화면  
> vaild user = 사용 가능한 유저  
> writable = 쓰기 허용 여부  
> read only = 읽기만 가능하게 하는 지  
> browable = 공유 폴더의 목록을 보여주는 옵션

을 입력 후 에디터를 빠져나오고 `sudo service samba restart` 명령어를 입력해 서비스를 재실행 시켜준다. 만약 다음과 같이 `Failed to restart samba.service` 오류가 뜨게 된다면 `sudo service smbd restart` 명령어로 재실행 시켜준다.![enter image description here](https://lh3.googleusercontent.com/4YE5_LFK2oRV34yGpW5Sf2BQB6GSuXgAVvos98rh0QhRFwIGxIHUB5bLA_wXGe0FTTMGgSsqX6i1)

## 4\. 삼바 접속

라즈베리파이쪽에서 설정을 모두 했다면 윈도우 R키를 눌러 실행창에 들어간 후 다음과 같이 입력해준다.  
![enter image description here](https://lh3.googleusercontent.com/Wr1qgs0_9qOk2p5ExkQVJy77o9f90gXaXC2pDXIaWOuf9vPuF4R90dRXKc49ZRWI38bttnIJNb4q)

다음과 같은 창이 뜨게 된다면 설정해준 id, password를 입력해주면 된다.  
![enter image description here](https://lh3.googleusercontent.com/g-JyJI9n2DPWx0AK1lvsJ9la1IACYUU-YNtEbrvds9HBMUONMHgBoZcIs-7Wa38v8RzFixPcS3Qe)
# 5. 시간 동기화
자료출처
- 워터마크, 라즈베리파이 시간 동기화, [https://m.blog.naver.com/PostView.nhn?blogId=xhxhdwkd&logNo=221146006051&proxyReferer=https%3A%2F%2Fwww.google.com%2F](https://m.blog.naver.com/PostView.nhn?blogId=xhxhdwkd&logNo=221146006051&proxyReferer=https%3A%2F%2Fwww.google.com%2F)

라즈베리파이는 RTC(Real Time Clock) 기능이 없어 부팅시에 시간을 설정해줘야하는 단점이 있다. 부팅할때 마다 자동으로 시간을 동기화해주는 작업을 해줄 예정이다.

먼저 `sudo apt-get update`를 실행해주고, 다음으로 `sudo apt-get install rdate` 를 입력해준다.

설치가 완료됐으면 `sudo /usr/bin/rdate -s time.bora.net`을 입력 후 `date`를  실행해 확인해보면 시간이 제대로 설정된것을 볼 수 있다.
![enter image description here](https://lh3.googleusercontent.com/S0T4jHt2bX6vYciF_7S24Cq9Lznd2QvAY-thLV_uwHUXAuQIsiP8RWNU6JYJyGd3f5lBP0vDCcmC)

부팅 시 마다 위와 같은 실행을 자동으로 해주기 위해 `sudo nano /etc/rc.local` 로 파일을 열어 전에 했던 명령어들을 아래와 같이 입력해준다.
![enter image description here](https://lh3.googleusercontent.com/q7YmMedXX1piF7CbKYj_W5eNJJGEnii8NtscbNaiC4orCBDmjXeg51wdSjwgE7PNdkJoDOKR1YOp)

에디터를 빠져나와 재부팅을 해보면 다음과 같이 제대로 적용된 것을 확인할 수 있다.
![enter image description here](https://lh3.googleusercontent.com/Gn_tvaNecORO-3-7gE8DSg_ZsHPx86ErsdOoGHwTJ4-RhdZ4mXPThRgUyjR39UIdIhSo71wsNMB0)

# 6\. wiringPi를 이용한 GPIO 프로그래밍

## 1\. wiringPi

wiringPi는 라즈베리파이에서 사용하는 GPIO 사용을 위한 C언어 라이브러리다. wiringPi를 이용하면 아두이노같은 문법으로 사용할 수 있다.

## 2\. 설치

터미널에 `git clone git://git.drogon.net/wiringPi`를 입력해서 wiringPi 소스코드를 다운받은 후 빌드해서 설치하면 된다.

![enter image description here](https://lh3.googleusercontent.com/LH21Bo7DRlZRI0oDJuSYczVzWceWiaNQGdkl940PRZ15RYeqAj5CfAe4R4p-pZVzLKwpoU3ZYDKt)  
![enter image description here](https://lh3.googleusercontent.com/UKLjeH_l7PQJPNLGLUijVbHVsZ7Uuna3Lf_0zSXXDJmNWExsN27NlovcbUn64zqhm9tJ6TFfWuqy)  
![enter image description here](https://lh3.googleusercontent.com/9EE8_7GQQ85nMEqJ1-3btKYc1ql7NfMfrpIZwvB7LO0myj2l_fqoC6ehe4mGmdY-bzGtoCYLB8Mh)

## 3\. wiringPi를 이용한 프로그래밍

*   [dht11](https://github.com/psy1064/RaspberryPi_Study/blob/master/Sensor/dht11.cpp)
    *   [dht11_datasheet](https://www.mouser.com/ds/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf)" alt=""></p>

<!--stackedit_data:
eyJoaXN0b3J5IjpbMTE4MTQ2MjczNSwtMjAxOTIzMDE5OSwxMz
c1MTE0Mjg5XX0=
-->