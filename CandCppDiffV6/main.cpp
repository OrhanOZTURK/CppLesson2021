#include <iostream>
#include <cstring>

using namespace std;


//int y;

int main()
{
    //ilk deger verme

    //C de ilk deger verme yöntemi tek

    //int x = 10;

    //C++ da ilk deger verme yontemi bir coktur

    /*
     * ilk deger verme C de
     * T x = expr;
     */


     //C++ da copy initilazation

    /*
    int x = 10;
    double y = 12.2;
    */
    /************************************************/

    //C de C++ static veya global degişlenlere ilk deger vermezsek
    //0 ilk degeri ile baslar
   /*
    static int x;

    cout << "x : " << x << "\n";
    cout << "y : " << y << "\n";
    */

    //C ve C++ ta otomatik omurlu baslatırsak
    //garbage value
    //bu degıskenı kullanırsak C ve C++ undifened behavior

    /*
    int x;
    cout << "x : " << x << "\n";
    */

    /******************************/

    //int x; // default initilazation

    //zero initilazation
    //aritmatik türden degişkenlerin degeri 0
    //bool türden degıskenlerın degerı false
    //pointer degiskenlerin degeri nullptr olacak

    //Global degikenler için gecerli
    //static tanımlamalar için gecerli

    //Yerel degişkenlere boyle tenımlamalar


    //int *p; //indertermined value


    /**************************************/

    //C++ da ikinci bir ilk deger verme yontemı

    //int x = 10; // copy initilization

    //C++ eskiden ve şimdide gecerli

    //int y(10); //direct initialization

    //modern Cpp - C++11 deyeni gelen arac
    //Neye ilk deger verirsek verelim bunu kullanmaya ozen gesterelım
    //{}

    //int z{10}; //uniform initialization C++11
                // brace initialization

    /*****************************************************/
    //ilk deger verme yontemlerı

  /*
    int x = 10; // sadece C de gecerli
    int y(10);  // direct initialization C++ eski ve yeni versiyonun gecerli
    int z{10};  //brace initialization C++11 de var
*/
    int t{}; //value initialization C++11 de var

    cout << "t : " << t << "\n";

    //{} en cok kullanılır hale



    /***********************************/

    //narrowing conversion
  /*
    double dval = 15.23;
    int x = dval; //gecerli ama veri kaybı
    int y(dval);  // gecerli ama veri kaybı
    int z{dval};  //gecersiz
*/
    //ilk neden {} kullandıgımızda
    //narrowing conversion onune gecmek


    /**********************************************************/

     /*
      * most vexing parse
      * scott meyers
      *
      */

    /*
     *
     */

    //Ornek:
    /*
    struct Data {

    };

    struct Orhn{
        Orhn(Data);
    };
    */

    // most vecting parse neden olan ()
    // Bu problemin önüne geçmek için {} bunu kullancaz
    /*
    Orhn orhn(Data());
    */

    // {}  ne işe yarar
    // most vexting parse
    // narrowing conversion
    // uniform bir yapı

    /****************************************/

    /*
    int A[]{1, 3, 4};
    int *a{A};
    */

    /****************************************/

    //dikkat
    /*
    int x; // default initialization
    int y{}; // value initialization
    int z();  // bu function declaration -- fonksiyon tanımı
    */

    /*
     struct Data{};
     Data myData(); // fnction declaration
     //Data myData{};  // nesne tanımlaması

     // bunlar dogrudan ilk deger verme

     int x(10);
     int z{5};
    */


    //Soru

    // Bu ikisi ayni seymi

    //evet bu ikisi

    /*int a[] = {2, 3, 4};
    int b[]{2, 3, 4};
    */

    /*****************************************************/

    //Özet
        /*
    int x; //default initilization -- hata cop deger ile baslması
    int y{}; // degeri sıfır- value initilazation
    bool flag{}; // degeri false  -- value  initilazation
    int *p{}; // degeri nullptr -- value initilazation
    int z{20}; // uniform initilazation ve degeri 20

    int t(10.3); // narrowing connn..... olayı var
    */
    /**********/
    /*
    for(int i{}; i < 10; ++i)
    {

    }
    */

    /****************/


    // giriş çıkış işlemleri

    //ostream sınıfının cout ve cin nesneleri bu giriş çıkış işlemlerinin gerçekleştirir

    /*
    std::cout//cout nesnesi standar cıkıs akımını kontrol eder
            << "orhan"; // << opeator overloding fonksiyon

    int z;
    std::cin //cin nesnesi standart giriş akımını kontrol eder
            >> z;  // >> opeator overloding fonksiyon

    //Ornek

    cout << z;
    cin >> z;

    std::cout << "x : " << x << "\n";
        */

    /***************************************/

    // Type deductin konusundan bahsedelim

    // C de bir degişkene türünü yazmak zorundayız
    // C++ type deduction ile derleyiciye sen anla ve yaz diyoruz

    // Type deduction için bir keyword ihtiyacımız var
    //Bunlarda

    /*
     * auto
     * decltype
     * template ler
     */

    /************************/
    // kısaca auto keyword den bahsedelım

    /*
     * auto keyword ü
     * tür çıkarımı için kullanılmaktadır
     */

    /*
    auto x = 10;
    //int x = 10;

    int ival = 10;
    auto z = ival; // z nin türü int
    auto y = ival + 3.4; // y nin türü double
    */

    // auto degısken tanımlanırsa ilk deger ermek zorunludur

    //auto g;

    /*
     *
     * Soru 1
     *
     * Tür çıkarımı programın çalışma zamanında ilşikisi varmı
     * Program çalışma zamanın ilişkin getirdiği bir mailiye varmı ?
     *
     * Hayır ilişkisi yok
     *
     * Tamamiyle compile zamınında gercekleşmektedir.
     */


    // soru 2 neden oto var ?

    // AAA
    // almost always auto

    // auto keyword kullanımını avantajları

    /*
     * 1
     * ilk deger verme zorunlu hale gelmiştir.
     */

     //auto x;

    /*2
     *
     * en önemli faydası karmasık terimleri basit hale getirmesi
     *
     * kodlama hatlarının önune gecmıs olur
     *
     */

    //int *(*fp) (int *, int *); // fonksiyon tanımlaması

    //std::vector<std::set<int, ........./// boyle


     //auto fp = strcmp;

     //int(*fp)(const char *, const char *) = strcmp;


    /*
     * 3
     * kodun degıstırılmesı
     *
     *
     */

    /*
    double  foo();
    auto x = foo();
    */


    // auto kullanmanın zararları varmı?

    //Bir sınıfın elemanları auto olurmu ?
    //Hayır olmaz


    //En cok kullanılan yerler
    // Generik programlama
    // fonksiyon geri donuslerı


    /*************************************************/

    //Referans semantiği

    // Referanslar bir nesnenin yerine gecen bir isimdir

    /*
    int x = 10;

    int *ptr = &x;

    (*ptr); // x e ulasmak ıcın poınterlar bunu yapıyorduk

    // bunun yerine referans semantigini kullanacaz
    */

    /*
     * Referans semantiği
     * Arka tarafra kendisi yukarıdaki işlemi yapıyor
     *
     * bir zarar yoktur
     *
     * bil hakis generik programlamaya cok iyi entegre olmustur.
     */


    /******************************************************/

    // Eski dende C++ referans semantiği vardı

    // bu  refernas semantiği L value refence dir sol taraf referansı

    //modern C++ ile dile R value referansta eklenmiştir -- sag taraf referansı denır


    // Referans için kullanılan  & opeatoru kullanılır

    int x = 10;

    int &r = x;

    r = 34;  // x = 34
    ++r; // x++
    int *p = &r; //x adresi

    /********************************************/













    return 0;
}
