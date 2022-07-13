<h2> 1.	PROJE KONUSU VE ÖZETİ </h2>

Proje, Arduino UNO [1] kartı ile geliştirilmiş bir gömülü sistem çalışmasıdır. Arduino UNO kartına bağlanan sıcaklık sensörü LM35 [2] ile ortamın sıcaklığı santigrat (°C) cinsinden ölçülmüştür. Su seviye sensörü ile projenin çalışma ortamına bağlı olarak bir kabın içindeki su seviyesi veya ortamda bulunan suyun seviyesi ölçülmektedir. Sıcaklık sensörü ile ölçülen değer arduino kodu içerisinde bir koşula bağlanmıştır. Sıcaklık değeri istenilen seviyenin üzerine çıktığında arduino kartına bağlanmış olan buzzer ile uyarı sesi verilmektedir. Aynı şekilde suyun seviyesindeki değişimleri görmek ve kullanıcıya bildirmek için rgb led ışıklar tercih edilmiştir. Ortamda su bulunmadığı durumlarda ledler kapalıdır, düşük seviye su bulunduğunda kırmızı led yanmaktadır, orta seviye su bulunduğunda sarı led yanmaktadır ve son olarak yüksek seviye su miktarı olduğunda yeşil led yanmaktadır. Bu şekilde sıcaklık ve suyun seviyesi kullanıcıya bu uyarılar sayesinde bildirilmektedir. Projenin günlük hayat problemlerine uyarlanabilmesi durumu için bir ara yüz tasarımı yapılmıştır. Ara yüz yardımı ile su seviyesinin anlık olarak değerleri kontrol edilebilmektedir. Yapılan ara yüz şu an bilgisayar üzerinde çalışabilecek seviyededir. Ara yüz programı geliştirildiği ve üzerine çalışıldığı takdirde bir mobil uygulama haline getirilebilir ve kullanıcıya kullanım kolaylığı sağlatılabilir. Proje günlük hayata uyarlanmak istenirse çiçek sulama sistemlerinde kullanılabileceği düşünülmüştür. Ortamın sıcaklığına ve eldeki su miktarına bakılarak çiçeklere yeterli miktarda insan gücü gerektirmeden su verilebilir. Evcil hayvanların su kaplarını doldurma gibi daha pek çok alanda bu sistemin geliştirilerek kullanılabileceği düşünülmektedir.

![image](https://user-images.githubusercontent.com/59260491/178811825-9ad1ad66-5889-42bd-8b3c-a9eb71297729.png)
  
Projenin çalışma aşamasından görseller

<h2> 2.	PROJEDE KULLANILAN DONANIM AYGITLARI VE TEKNİK ÖZELLİKLERİ </h2>
      

<h3> 2.1. ARDUINO UNO </h3>

![image](https://user-images.githubusercontent.com/59260491/178811919-89ae7713-308a-47fa-8dd8-4055a445e73e.png)

Arduino kartları arasında sıklıkla kullanılan kartlardan biridir. Bir sisteme entegre edilmesi   kolay olduğu için pek çok kullanım alanları vardır. Akıllı ev sistemleri, robot sistemleri gibi gelişmiş sistemlerde kullanılabilir. Onun haricinde okul projelerinde bireysel küçük çaplı projelerde de kullanım kolaylığı açısından tercih edilmektedir. Elektronik devrelerin kontrol edilmesi ve çalıştırılmasını sağlar.
•	Dijital çıkış pini sayısı : 14
•	PWM çıkışı sayısı : 5
•	Analog giriş sayısı : 6
•	Çalışma gerilimi  : 5 V
•	Mikrodenetleyici : Atmega328
•	EEPROM : 1 KB
•	SRAM : 2 KB
•	Saat hızı : 16 MHz
•	I/O için akım : 40 mA
•	3.3 V çıkış için akım : 50 mA

<h3> 2.2. LM35 SICAKLIK SENSÖRÜ </h3>

![image](https://user-images.githubusercontent.com/59260491/178811982-6b0ebb57-5cf2-4241-9969-1606d7cc914a.png)

Santigrat cinsinden (°C) analog değeri okuyarak bir sıcaklık değeri elde edilmesini sağlar.
•	Doğrusal +10.0 mV /  °C skala faktörü
•	0.5 °C hassasiyet garantisi vardır. (+25 °C’de)
•	Tam -55° ila +150°C aralığındadır.
•	4 ila 30 volt arasında çalışır.
•	60 µA’dan az akım.

<h3> 2.3. SU SEVİYE TESPİT SENSÖRÜ </h3>

![image](https://user-images.githubusercontent.com/59260491/178812071-b5d2fdda-819e-4a89-aa72-023581e95242.png)

Su seviye sensörü, beşi güç iletkeni ve beşi hassasiyet iletkeni olan on iletken bakır izine sahiptir. Bu iletkenler su ile etkileşime girdiğinde bir analog değer verir. Direnç, suyun yüksekliği ile ters orantılıdır. Sensör ne kadar suya daldırılırsa, iletkenlik de o kadar iyi olur ve direnç azalır. Sensör ne kadar az suya daldırılırsa, iletkenlik zayıf olur ve direnç artar. Sensör, dirence göre bir çıkış voltajı üretir, bu da ölçerek su seviyesinin belirlenmesine yardımcı olur.
•	Çalışma voltajı : DC 3-5V
•	Akım tüketimi : 20mA’den az
•	Sensör tipi : Analog 
•	Tespit yüzey alanı : 40mm x 16mm
•	Devre plaketi : FR4 çift yüzeyli
•	Çalışma sıcaklığı : 10-30
•	Çalışma nemi : 10% - 90% (yoğuşmasız)


<h3> 2.4. BUZZER </h3>

![image](https://user-images.githubusercontent.com/59260491/178812210-f6cccbf8-74ff-4690-a556-16ae18f86adb.png)

Geniş alanlara ses sinyalleri yaymaktadır. Projeye göre istenilen şartlar sağlandığında ses sinyalleri ile uyarı vermektedir. Alarm işlevi görmektedir.
•	Maksimum akım : 30 mA
•	10 cm’deki minimum ses çıkışı : 85 dB
•	Titreşim frekansı : 2300 +/- 300 Hz
•	Çalışma voltajı : 4-8V

<h3> 2.5. DİRENÇ </h3>

![image](https://user-images.githubusercontent.com/59260491/178812246-078381df-adf4-4ad2-8dd9-d5c979cc7e61.png)

Devreden geçen gerilim ve akım değerlerinde değişikliğe sebep olur. Bir elektrik devresinde akım akışına karşı oluşan etkinin ölçümüdür.


<h3> 2.6.LED </h3>

![image](https://user-images.githubusercontent.com/59260491/178812318-fac8e526-8728-4f99-bda4-dfba7e803674.png)

Elektrik enerjisini ışığa dönüştüren yarı iletken bir devre elemanıdır. Belirli miktarda voltaj verildiğinde etrafa ışık saçmaktadırlar. Projede sarı, yeşil ve kırmızı renkte ledler kullanılmıştır.
•	Boyut : 5 mm
•	Çalışma voltajı : 1.5 - 3 V
•	Önerilen kullanım akımı : 16 - 18 mA
•	Maksimum akım : 20 mA

<h3> 2.7. JUMPER KABLO </h3>

![image](https://user-images.githubusercontent.com/59260491/178812356-ec4a4871-ac3d-4ed8-a6c6-2daae4759290.png)

Arduino ve breadboard arasında bağlantı yapılmasını sağlar. Örnek olarak projede kullanım alanlarından biri; arduino üzerinden gelen 5V, jumper kablolar ile breadboard üzerine aktarılmıştır ve 5V pini bu şekilde çoğaltılmıştır.

<h3> 2.8. BREADBOARD </h3>

![image](https://user-images.githubusercontent.com/59260491/178812411-ecadbbb1-c7f0-4483-b681-316ea5d20e14.png)

Teknik terim olarak devre tahtası denilebilir. Üzerine sensör bağlanarak arduino kartı ile sensörün bağlantısının sağlanmasında kullanılmıştır.
•	Gerilim : 300 V
•	Akım : 3A ~ 5A
•	Boyut : 17cm x 5.5cm



<h2> 3.	PROJE ÇİZİMİ </h2>

![image](https://user-images.githubusercontent.com/59260491/178812438-ef5f8213-093c-4ccb-85aa-9a79d48462b9.png)
 
Proje çiziminde Fritzing programı kullanılmıştır. İkinci bölümde tanımlanan devre elemanları arduino ve breadboard üzerine bağlanarak bağlantılı hale getirilmiştir.

<h2> 4.	PROJENİN AKIŞ DİYAGRAMI </h2>

![image](https://user-images.githubusercontent.com/59260491/178812488-e282bfc7-86fc-4b7c-a8f7-cdbe8180c71c.png)

Kod akışını ve kodun çalışma mantığını anlatan akış diyagramıdır. Burada arduino içinde çalışan kod blokları anlatılmıştır. Arduinoya güç verildiği sürece bu kodlar çalışacaktır fakat burada sembolik olarak kod blokları bir kez çalıştıktan sonra son durumuna getirilmiştir.
 

<h3> 6.	ARA YÜZ TASARIMI </h3>

Arduino koduna ek olarak Visual Studio ortamında C# programlama dilinde bir ara yüz tasarımı yapılmıştır. Tasarlanan ara yüz sayesinde su seviyesinin anlık olarak artış ve azalış durumları görülmektedir. Bilgisayar ortamında çalışacak şekilde programlanan ara yüz tasarımının geliştirilerek mobil cihazlara da entegre edilebileceği düşünülmektedir.
 
İlk olarak kullanılacak kütüphaneler tanımlanmaktadır.  Arduino ve ara yüz arasında bağlantı sağlanması için kullanılabilecek portlar bir liste şeklinde kullanıcının seçmesi için sunulmaktadır. Bağlantı sağlanan port üzerindeki Serial fonksiyonlarından gelen, su seviye değerleri alınmaktadır.

Oluşturulan bağlantı butonu ile port seçimi yapıldıktan sonra bağlantı sağlanmaktadır. Bağlantı sağlanamaması durumda kullanıcıya anlaşılır ve düzgün bilgi vermek için hata yakalama metotları (try-catch blokları) kullanılmaktadır.

Port bağlantısını kesmek için bir buton oluşturulmaktadır.

Oluşturulan ara yüz ve çalışma mantığı şu şekildedir.

![image](https://user-images.githubusercontent.com/59260491/178813068-e33d0ee8-6247-47f2-b309-a1f2193393bf.png)

