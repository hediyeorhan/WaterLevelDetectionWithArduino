<h1> 1.	PROJE KONUSU VE ÖZETİ </h1>

Proje, Arduino UNO [1] kartı ile geliştirilmiş bir gömülü sistem çalışmasıdır. Arduino UNO kartına bağlanan sıcaklık sensörü LM35 [2] ile ortamın sıcaklığı santigrat (°C) cinsinden ölçülmüştür. Su seviye sensörü ile projenin çalışma ortamına bağlı olarak bir kabın içindeki su seviyesi veya ortamda bulunan suyun seviyesi ölçülmektedir. Sıcaklık sensörü ile ölçülen değer arduino kodu içerisinde bir koşula bağlanmıştır. Sıcaklık değeri istenilen seviyenin üzerine çıktığında arduino kartına bağlanmış olan buzzer ile uyarı sesi verilmektedir. Aynı şekilde suyun seviyesindeki değişimleri görmek ve kullanıcıya bildirmek için rgb led ışıklar tercih edilmiştir. Ortamda su bulunmadığı durumlarda ledler kapalıdır, düşük seviye su bulunduğunda kırmızı led yanmaktadır, orta seviye su bulunduğunda sarı led yanmaktadır ve son olarak yüksek seviye su miktarı olduğunda yeşil led yanmaktadır. Bu şekilde sıcaklık ve suyun seviyesi kullanıcıya bu uyarılar sayesinde bildirilmektedir. Projenin günlük hayat problemlerine uyarlanabilmesi durumu için bir ara yüz tasarımı yapılmıştır. Ara yüz yardımı ile su seviyesinin anlık olarak değerleri kontrol edilebilmektedir. Yapılan ara yüz şu an bilgisayar üzerinde çalışabilecek seviyededir. Ara yüz programı geliştirildiği ve üzerine çalışıldığı takdirde bir mobil uygulama haline getirilebilir ve kullanıcıya kullanım kolaylığı sağlatılabilir. Proje günlük hayata uyarlanmak istenirse çiçek sulama sistemlerinde kullanılabileceği düşünülmüştür. Ortamın sıcaklığına ve eldeki su miktarına bakılarak çiçeklere yeterli miktarda insan gücü gerektirmeden su verilebilir. Evcil hayvanların su kaplarını doldurma gibi daha pek çok alanda bu sistemin geliştirilerek kullanılabileceği düşünülmektedir.


  
Projenin çalışma aşamasından görseller

<h1> 2.	PROJEDE KULLANILAN DONANIM AYGITLARI VE TEKNİK ÖZELLİKLERİ </h1>
      

<h2> 2.1.	  ARDUINO UNO </h2>

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

<h2> 2.2.	 LM35 SICAKLIK SENSÖRÜ </h2>


Santigrat cinsinden (°C) analog değeri okuyarak bir sıcaklık değeri elde edilmesini sağlar.
•	Doğrusal +10.0 mV /  °C skala faktörü
•	0.5 °C hassasiyet garantisi vardır. (+25 °C’de)
•	Tam -55° ila +150°C aralığındadır.
•	4 ila 30 volt arasında çalışır.
•	60 µA’dan az akım.
2.3.	 SU SEVİYE TESPİT SENSÖRÜ

Su seviye sensörü, beşi güç iletkeni ve beşi hassasiyet iletkeni olan on iletken bakır izine sahiptir. Bu iletkenler su ile etkileşime girdiğinde bir analog değer verir. Direnç, suyun yüksekliği ile ters orantılıdır. Sensör ne kadar suya daldırılırsa, iletkenlik de o kadar iyi olur ve direnç azalır. Sensör ne kadar az suya daldırılırsa, iletkenlik zayıf olur ve direnç artar. Sensör, dirence göre bir çıkış voltajı üretir, bu da ölçerek su seviyesinin belirlenmesine yardımcı olur.
•	Çalışma voltajı : DC 3-5V
•	Akım tüketimi : 20mA’den az
•	Sensör tipi : Analog 
•	Tespit yüzey alanı : 40mm x 16mm
•	Devre plaketi : FR4 çift yüzeyli
•	Çalışma sıcaklığı : 10-30
•	Çalışma nemi : 10% - 90% (yoğuşmasız)


<h2> 2.4.	 BUZZER </h2>

Geniş alanlara ses sinyalleri yaymaktadır. Projeye göre istenilen şartlar sağlandığında ses sinyalleri ile uyarı vermektedir. Alarm işlevi görmektedir.
•	Maksimum akım : 30 mA
•	10 cm’deki minimum ses çıkışı : 85 dB
•	Titreşim frekansı : 2300 +/- 300 Hz
•	Çalışma voltajı : 4-8V

<h2> 2.5.	 DİRENÇ </h2>


Devreden geçen gerilim ve akım değerlerinde değişikliğe sebep olur. Bir elektrik devresinde akım akışına karşı oluşan etkinin ölçümüdür.


		


<h2> 2.6.	 LED </h2>

Elektrik enerjisini ışığa dönüştüren yarı iletken bir devre elemanıdır. Belirli miktarda voltaj verildiğinde etrafa ışık saçmaktadırlar. Projede sarı, yeşil ve kırmızı renkte ledler kullanılmıştır.
•	Boyut : 5 mm
•	Çalışma voltajı : 1.5 - 3 V
•	Önerilen kullanım akımı : 16 - 18 mA
•	Maksimum akım : 20 mA

<h2> 2.7.	 JUMPER KABLO </h2>

Arduino ve breadboard arasında bağlantı yapılmasını sağlar. Örnek olarak projede kullanım alanlarından biri; arduino üzerinden gelen 5V, jumper kablolar ile breadboard üzerine aktarılmıştır ve 5V pini bu şekilde çoğaltılmıştır.

<h2> 2.8.	 BREADBOARD </h2>


Teknik terim olarak devre tahtası denilebilir. Üzerine sensör bağlanarak arduino kartı ile sensörün bağlantısının sağlanmasında kullanılmıştır.
•	Gerilim : 300 V
•	Akım : 3A ~ 5A
•	Boyut : 17cm x 5.5cm







<h1> 3.	PROJE ÇİZİMİ </h1>

 
Proje çiziminde Fritzing programı kullanılmıştır. İkinci bölümde tanımlanan devre elemanları arduino ve breadboard üzerine bağlanarak bağlantılı hale getirilmiştir.

<h1> 4.	PROJENİN AKIŞ DİYAGRAMI </h1>

Kod akışını ve kodun çalışma mantığını anlatan akış diyagramıdır. Burada arduino içinde çalışan kod blokları anlatılmıştır. Arduinoya güç verildiği sürece bu kodlar çalışacaktır fakat burada sembolik olarak kod blokları bir kez çalıştıktan sonra son durumuna getirilmiştir.
 


<h1> 5.	ARDUINO KODU </h1>

Öncelikle arduino kodu içerisinde kullanılmak üzere iki adet kütüphane oluşturuldu. Bunlar readSensor ve ledAyari kütüphaneleridir. readSensor kütüphanesi içerisinde su seviye sensörü analog girişten (A0) değer okumaktadır. Aynı zamanda su seviye sensörünün arduino üzerinde bağlanacağı ve güç alacağı pin numarasına göre pin ayarı yapılmaktadır.

 readSensor.cpp



ledAyari kütüphanesinde ledlerin arduino üzerinde bağlanacakları pin numaralarına göre pin ayarı yapılmaktadır. Her led için ayrı bir fonksiyon oluşturulmuştur. Aktif edilmek istenilen ledin arduino kodu içerisinde fonksiyonu çağırılarak led yakılmaktadır.



Öncelikle arduino kodu içerisinde kendi oluşturmuş olduğumuz kütüphaneler include edildi. Sensörlerin ve ledlerin arduinoda hangi pine bağlanacağı ayarlandı. Kütüphanelerdeki fonksiyonları kullanmak için kütüphanelerden bir nesne oluşturuldu. Sensörlerden okunan değerlerin atanması ve if koşullarının kontrol edilmesi için değişkenler tanımlandı.
 
Setup fonksiyonu içerisinde seri bağlantı başlatıldı. Pin ayarları için gerekli fonksiyonlar çağırıldı. Timer kesmesi [4] ayarlaması yapıldı.
 
Timer içinde saniyede bir su seviye sensöründen gelen değer okunmaktadır. Okunan değer lowerThreshold ve upperThreshold değerleri ile if koşulu içerisinde karşılaştırılmaktadır. Sağlanan koşula göre ekrana su miktarı yazdırılmaktadır ve led yanmaktadır. İki saniyede bir sıcaklık değeri okunmaktadır. Okunan sıcaklık değeri istenilen değerden büyükse buzzer açılmaktadır ve alarm sesi ile uyarı verilmektedir.
 
 

Arduino UNO kartımıza güç verildiğinde kod çalışmaktadır. Kod çalışırken ekrana verdiği çıktıyı aşağıdaki görselde inceleyelim. Sensörlerden okunan değerler ve koşulların sağlandığı burada görülmektedir. Saniyede bir su seviye sensöründen değer okunduğu ve iki saniyede bir sıcaklık sensöründen değer okunduğu görülmektedir.
 

<h2> 5.1.	 ARA YÜZ TASARIMI </h2>

Arduino koduna ek olarak Visual Studio ortamında C# programlama dilinde bir ara yüz tasarımı yapılmıştır. Tasarlanan ara yüz sayesinde su seviyesinin anlık olarak artış ve azalış durumları görülmektedir. Bilgisayar ortamında çalışacak şekilde programlanan ara yüz tasarımının geliştirilerek mobil cihazlara da entegre edilebileceği düşünülmektedir.
 
İlk olarak kullanılacak kütüphaneler tanımlanmaktadır.  Arduino ve ara yüz arasında bağlantı sağlanması için kullanılabilecek portlar bir liste şeklinde kullanıcının seçmesi için sunulmaktadır. Bağlantı sağlanan port üzerindeki Serial fonksiyonlarından gelen, su seviye değerleri alınmaktadır.

 

Oluşturulan bağlantı butonu ile port seçimi yapıldıktan sonra bağlantı sağlanmaktadır. Bağlantı sağlanamaması durumda kullanıcıya anlaşılır ve düzgün bilgi vermek için hata yakalama metotları (try-catch blokları) kullanılmaktadır.

 





Port bağlantısını kesmek için bir buton oluşturulmaktadır.

 

Oluşturulan ara yüz ve çalışma mantığı şu şekildedir.


