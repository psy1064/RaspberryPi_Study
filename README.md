---


---

<h1 id="라즈비안-설치">1. 라즈비안 설치</h1>
<h2 id="준비물">1. 준비물</h2>
<ol>
<li>Raspbian Image File</li>
<li>Etcher Flash Program : Raspian Image File을 Micro SD card에 구워주는 프로그램</li>
<li>Micro SD card</li>
</ol>
<h2 id="raspbian">2. Raspbian</h2>
<p><a href="https://www.raspberrypi.org/downloads/raspbian/">Raspbian 다운로드</a> 링크로 들어가서  네모버튼을 클릭하여 ZIP 파일 다운로드 후 압축 해제를 한다.<img src="https://t1.daumcdn.net/cfile/tistory/99F5B94A5CC5672D23" alt=""></p>
<h2 id="etcher-flash-program">3. Etcher Flash Program</h2>
<p><a href="https://www.balena.io/etcher/">Etcher Flash Program 다운로드</a>로 들어가서 Download for Windows를 눌러 프로그램 다운로드를 한다.</p>
<p>프로그램을 실행하면 다음과 같은 창이 뜨게 되는데 Select image 버튼을 클릭하여 다운받은 Raspbian Image File을 선택한다.<br>
<img src="https://lh3.googleusercontent.com/OJrmiay_Bg-pS5ndXuOxJLts66m-MrHnzg6fQ2WEeIM3m41VutFE8tzUEVT40GbQm8ePhHD1MDfu" alt="enter image description here"></p>
<p>Micro SD Card가 삽입된 USB를 선택하고 Flash 버튼을 누르게 되면<br>
<img src="https://lh3.googleusercontent.com/VbEAJaGesbnbb5zG0Tk_chEsrQpDrv8uHoDjCeTLBojoE_xyPhedbYlw34aaoKW2fXLnRitMxjPH" alt="enter image description here"></p>
<p>Flash가 진행된다.<br>
<img src="https://lh3.googleusercontent.com/zAAQSRIuLnmPF-IJaRYPdaGjNHEIF2_5AvJNOkSQM7Xps8dmSje9Hp_4fTya2T9rUnvbfReia5-5" alt="enter image description here"></p>
<p>Flash가 완료되면 Micro SD Card를 Reader기에서 제거 후 Raspberrypi에 꽂아준다.<br>
<img src="https://lh3.googleusercontent.com/MLg-wpzbFG_BAHkuUWAmZfl5LFu8VWzEMnRshCcKA7JnINuM853s5oSovFvFFGVLad4NshaKZc5h" alt="enter image description here"></p>
<hr>
<h1 id="라즈비안-초기-설정">2. 라즈비안 초기 설정</h1>
<h2 id="언어-설정">언어 설정</h2>
<p>미국식 키보드를 이용해서 프로그래밍을 진행해기 위해선 언어를 먼저 설정해야 한다.  터미널에서 <code>sudo raspi-config</code>  명령어를 입력하고 여기서 4. Localisation Options를 선택하고 I1. Change Locale을 선택한다.</p>
<p><img src="https://lh3.googleusercontent.com/jf6NaNrnQz9V4mYSeHJSjWK40GugmB3xlclWZKfUV_h2_iCF8fs4b-fxwO4z0S6g5JFfBmc8P7en" alt="enter image description here"><img src="https://lh3.googleusercontent.com/XfPfOMYrP7adrWn8EAeDBpDaoVAa0qfOaBS3ZS8nvxNUBMM7rTcEmvdCotLz2NzTIF2CLF-FVln1" alt="enter image description here"><img src="https://lh3.googleusercontent.com/gT6ooJcsZuhneDBzonew2sxjV4FhNnrLTQPI58wt6ZmjwSXOprZbz-GkvdQXAgvZZ2FIy-xTrfif" alt="enter image description here"></p>
<p>Change Locale 항목을 선택하고 들어가면 여러 언어의 옵션이 있는데 키보드의 방향키를 이용해서 en_GB,UTF-8 UTF-8, en_US.UTF-8 UTF-8을 스페이스바를 눌러서 선택해준다.<br>
<img src="https://lh3.googleusercontent.com/16M1nwsvLevI_Aokd5qw8vlk8BhCX9bhgwZ0jKliTB7SB8BE7X1FrSUz6ZDOuCMJ7hm56e-7MlpA" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/jsVu2IFNRHwoQz8aQLf7sDbBHuSqIe_8O2_CbkqMARf_fTw1MhWJuMiBSlP0fuvFxG1-g4Mkccc5" alt="enter image description here"></p>
<p>엔터를 누르게 되면 기본 언어를 설정하는 창이 뜨게 된다. 여기서 en_US.UTF-8 UTF-8을 기본 언어로 선택하면 된다.</p>
<p><img src="https://lh3.googleusercontent.com/ejXmuQrlp9kXu7UBV4Dc_Y-A1Ijlp8-lfpO7NBkqIGwmSptUU1baY1uSFreU8vXza_kra_l2wTk5" alt="enter image description here"></p>
<p>다음으로 키보드 레이아웃 설정이다.  처음화면에서 4. Localisation Option을 선택한 후 I3. Change Keyboard Layout을 선택한다.</p>
<p><img src="https://lh3.googleusercontent.com/XfPfOMYrP7adrWn8EAeDBpDaoVAa0qfOaBS3ZS8nvxNUBMM7rTcEmvdCotLz2NzTIF2CLF-FVln1" alt="enter image description here"><img src="https://lh3.googleusercontent.com/yW1cYpHzW3BrCbHk3Ej5HVjJb_WUubT2mUVqq5v8nv5Ct39Qu1nhi-2CUpMrjUkyCTaBNmsiwJy2" alt="enter image description here"></p>
<p>Generic 105-key PC (intl.)을 선택하고 엔터를 눌러준다. 그리고 Korean - Korean (101/104 key compatible)을 선택한 후 마지막으로 No compose key를 선택한 후 엔터를 누르면 된다.<br>
<img src="https://lh3.googleusercontent.com/ZVifZ0x3lm3IprZf7Citwuy7Jef8vj4FYxD8yj-N1poVRDvrgg0gUFJRGhISwzl2HimJslxNiIBH" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/GOqlJStk3Pe_-ZuWyXmZLOl27rAG_rGJJAeEwNRSJDRVqxxOd4X_2SNsYGNU4vz5RAg2g6nCl5Zj" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/Dlhynn5WbenrfZZliyLu4PKw4xE_IeujIhfos032POXj_elx9A1jNXgj-PAM2zmSfwDltlpAQDvi" alt="enter image description here"></p>
<h1 id="putty를-이용한-원격접속">3. putty를 이용한 원격접속</h1>
<h2 id="ssh-enable">1. SSH Enable</h2>
<p>putty를 이용하여 원격접속을 하기위해서는 먼저 SSH를 활성화 시켜줘야 한다. 터미널에서 <code>sudo raspi-config</code> 명령어를 입력한다. 여기서 5. Interfacing Options &gt; P2 SSH 를 선택한다.</p>
<p><img src="https://lh3.googleusercontent.com/SJTPs2tVLIfv9bVLgGdoILUZCrR-sYzmtvg6lYvpW39LIRgFHX06e9onA8-V-2pgFmoSEvMvzZBb" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/M9h2WbNABtGxh2SdSwGTmFuZ3ZschxtcnwbQAHvjuG65ptL7GyLYCV4S_RxkbKhy_a-fX22VnNqp" alt="enter image description here"></p>
<p>다음과 같은 창이 뜨게되면 Yes를 선택하고 엔터를 눌러주면 SSH가 활성화 된다.<br>
<img src="https://lh3.googleusercontent.com/B3tV66S6zyUZOmSRvAbo0KP12FbuVApuMUIMUgnwSXHbxVJ9sqLNS6OFSvJxVPvmnBhcoThtB6ue" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/FoVQaJ02u76ft6UxEsVkYizb5shGTTiI7aUBLnFoLGrMM2m8qWjZHwy9C_FWtcvoytV3OhiFXJ7e" alt="enter image description here"></p>
<h2 id="ip-주소-확인">2. IP 주소 확인</h2>
<p>ssh를 활성화를 했다면 IP 주소를 확인해야 한다. 터미널에서 <code>ifconfig</code> 로 ip addr를 확인해야 한다. 유선으로 연결했다면 eth, 무선으로 연결했다면 wlan에서 inet을 확인한다.</p>
<p><img src="https://lh3.googleusercontent.com/eg08NMFsTG3FBrJ5cbUp8z9nnVQ3N7ARzeK1u2ZC8NEMvYIjtsYX3jbPmMZ8gb9BhF-BmN98YYHm" alt="enter image description here"></p>
<p>inet 값을 putty의 Host Name (or IP address) 칸에 입력한 후 Open을 누르면 로그인 창이 뜬다. 초기 ID와 Password는 pi / raspberry 이다. 아이디와 패스워드가 맞다면 아래처럼 실행이 된다.<br>
<img src="https://lh3.googleusercontent.com/1k_mYhgaWKOfHSbIMc8Ylt4d-sM4iMl31vOv1_H_G-bWafIGhGLttapkKaq_hPqlQdTR1NUyVac8" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/tCsRp2qNhb2_jAbGBRu3R7QihR7MmcCLj-J_FCM_iCogXZJRq7Pn4ROBxUdiWAA3eylWCzybFh6c" alt=""><br>
<img src="https://lh3.googleusercontent.com/nFFNv6gPusc6xm20a9aQowCD-wYJ3dRJjf5SUbYFoLqPpn860Oufv721BeivlIPSs5iC6R_pJfc2" alt=""></p>
<h2 id="고정-ip주소-할당">3. 고정 IP주소 할당</h2>
<p>먼저 <code>netstat -nr</code> 명령어를 입력해 gateway 주소를 확인하고 <code>sudo nano /etc/dhcpcd.conf</code> 명령어를 입력한다.</p>
<p><img src="https://lh3.googleusercontent.com/-2UQGauDdjacj47xbXc10XDzKD1UwuXxFFWhTudasB6e6rU_kxbH4sXKnI6ZAGD_jT_5qk-tK7oQ" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/Szp4FImltjrTikLctZW-p_VntbXD9_lQc4qQ1SriMCPmPGd3UGXvstbwKi77VAqpPCVFMqPzDNCd" alt="enter image description here"></p>
<p>static ip_address, static routers, static domain_name_servers의 주석을 지우고 하얗게 칠한 부분을 ip_address는 원하는 IP주소, domain_name_servers에는 <code>netstat -nr</code> 로 확인한 gateway 주소를 입력한다. 그 후 <code>sudo reboot</code> 를 이용해 재부팅한 후 <code>ifconfig</code> 로 다시 아이피를 확인해보면 설정한 IP가 할당되어 있다.</p>
<h1 id="samba-서버-접속과-설치방법">4. Samba 서버 접속과 설치방법</h1>
<h2 id="삼바samba란">1. 삼바(Samba)란?</h2>
<p>Windows 운영체제를 사용하는 PC에서 Linux 또는 Unix 서버에 접속하여 파일이나 프린터를 공유하여 사용할 수 있도록 해주는 소프트웨어이다.</p>
<h2 id="삼바-설치">2. 삼바 설치</h2>
<p>터미널에서 <code>sudo apt-get update</code>을 입력하여 업데이트를 해준 다음 <code>sudo apt-get install samba samba-common-bin</code>명령어를 이용하여 설치한다.</p>
<p><img src="https://lh3.googleusercontent.com/c5bFenfNTbJHpnagp-2DEFiFZZe-GEpE1rg9hrF-RGwxCw270AeED2Lz_idlfsyY3o8ca_hbnwnx" alt="enter image description here"></p>
<h2 id="삼바-유저-추가-및-패스워드-설정">3. 삼바 유저 추가 및 패스워드 설정</h2>
<p>설치가 완료되었다면 <code>sudo smbpasswd -a pi</code> 명령어를 입력해 비밀번호를 설정해야 한다. 설정한 다음 <code>sudo nano /etc/samba/smb.conf</code>로 들어간다.<br>
<img src="https://lh3.googleusercontent.com/dH5xzGXhtb9WRwmnQr8aPiz7A-14xoHi3JBZj_ik3M3e00KhBgydRTgi9m85cTiJroPdXQyc0baQ" alt="enter image description here"></p>
<p>smb.conf 파일에 들어온 후 다음과 같이 수정한다.<br>
<img src="https://lh3.googleusercontent.com/4jAWtqjKE-X5YSvtDoWpzGQVMoZNC-DQno6_mmP4IOtBL8YEMsf5H9bdNjDdo0GWZD2F4GpanFgT" alt="enter image description here"></p>
<blockquote>
<p>comment = 유저 서버 설정에 대한 코멘트<br>
path = 삼바 서버 접속 시 최초 화면<br>
vaild user = 사용 가능한 유저<br>
writable = 쓰기 허용 여부<br>
read only = 읽기만 가능하게 하는 지<br>
browable = 공유 폴더의 목록을 보여주는 옵션</p>
</blockquote>
<p>을 입력 후 에디터를 빠져나오고 <code>sudo service samba restart</code> 명령어를 입력해 서비스를 재실행 시켜준다. 만약 다음과 같이 <code>Failed to restart samba.service</code> 오류가 뜨게 된다면 <code>sudo service smbd restart</code> 명령어로 재실행 시켜준다.<img src="https://lh3.googleusercontent.com/4YE5_LFK2oRV34yGpW5Sf2BQB6GSuXgAVvos98rh0QhRFwIGxIHUB5bLA_wXGe0FTTMGgSsqX6i1" alt="enter image description here"></p>
<h2 id="삼바-접속">4. 삼바 접속</h2>
<p>라즈베리파이쪽에서 설정을 모두 했다면 윈도우 R키를 눌러 실행창에 들어간 후 다음과 같이 입력해준다.<br>
<img src="https://lh3.googleusercontent.com/Wr1qgs0_9qOk2p5ExkQVJy77o9f90gXaXC2pDXIaWOuf9vPuF4R90dRXKc49ZRWI38bttnIJNb4q" alt="enter image description here"></p>
<p>다음과 같은 창이 뜨게 된다면 설정해준 id, password를 입력해주면 된다.<br>
<img src="https://lh3.googleusercontent.com/g-JyJI9n2DPWx0AK1lvsJ9la1IACYUU-YNtEbrvds9HBMUONMHgBoZcIs-7Wa38v8RzFixPcS3Qe" alt="enter image description here"></p>
<h1 id="wiringpi를-이용한-gpio-프로그래밍">5. wiringPi를 이용한 GPIO 프로그래밍</h1>
<h2 id="wiringpi">1. wiringPi</h2>
<p>wiringPi는 라즈베리파이에서 사용하는 GPIO 사용을 위한 C언어 라이브러리다. wiringPi를 이용하면 아두이노같은 문법으로 사용할 수 있다.</p>
<h2 id="설치">2. 설치</h2>
<p>터미널에 <code>git clone git://git.drogon.net/wiringPi</code>를 입력해서 wiringPi 소스코드를 다운받은 후 빌드해서 설치하면 된다.</p>
<p><img src="https://lh3.googleusercontent.com/LH21Bo7DRlZRI0oDJuSYczVzWceWiaNQGdkl940PRZ15RYeqAj5CfAe4R4p-pZVzLKwpoU3ZYDKt" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/UKLjeH_l7PQJPNLGLUijVbHVsZ7Uuna3Lf_0zSXXDJmNWExsN27NlovcbUn64zqhm9tJ6TFfWuqy" alt="enter image description here"><br>
<img src="https://lh3.googleusercontent.com/9EE8_7GQQ85nMEqJ1-3btKYc1ql7NfMfrpIZwvB7LO0myj2l_fqoC6ehe4mGmdY-bzGtoCYLB8Mh" alt="enter image description here"></p>
<h2 id="wiringpi를-이용한-프로그래밍">3. wiringPi를 이용한 프로그래밍</h2>
<ul>
<li><a href="https://github.com/psy1064/RaspberryPi_Study/blob/master/Sensor/dht11.cpp">dht11</a>
<ul>
<li><a href="https://www.mouser.com/ds/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf">dht11_datasheet</a></li>
</ul>
</li>
</ul>

