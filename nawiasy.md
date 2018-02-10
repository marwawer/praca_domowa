Dlaczego dla preprocesingu w języku C używamy nadmiarowych nawiasów?
======================================================

Preprocesor
---------------
Kod źródłowy tuż przed właściwą kompilacją, jest przetwarzany przez preprocesor, jest to program, który analizuje plik źródłowy (programu, biblioteki) w poszukiwaniu wszystkich wyrażeń zaczynających się od 
    
<"#" np. #include, #define, #undef, #if #elif, #else. #endif
    
 Na podstawie tych instrukcji generuje on kod w "czystym" języku C, który następnie jest kompilowany przez kompilator. Ponieważ za pomocą preprocesora można niemal "sterować" kompilatorem, daje on niezwykłe możliwości, które nie były dotąd znane w innych językach programowania.

Ponieważ makra preprocesora działają na zasadzie zwykłego zastępowania napisów, są podatne na wiele kłopotliwych błędów, z których części można uniknąć przez stosowanie się do poniższych reguł:

Umieszczaj nawiasy dookoła argumentów makra kiedy to tylko możliwe. Zapewnia to, że gdy są wyrażeniami kolejność działań nie zostanie zmieniona. Na przykład:
    
>Źle: #define kwadrat(x) (x*x)
    Dobrze: #define kwadrat(x) ( (x)*(x) )
Przykład: Załóżmy, że w programie makro kwadrat() zdefiniowane bez nawiasów zostało wywołane następująco:
    
    kwadrat(a+b).
Wtedy zostanie ono zamienione przez preprocesor na: 
    
    (a+b*a+b). 
Z kolejności działań wiemy, że najpierw zostanie wykonane mnożenie, więc wartość wyrażenia kwadrat(a+b) będzie różna od kwadratu wyrażenia a+b.

### Umieszczaj nawiasy dookoła całego makra, jeśli jest pojedynczym wyrażeniem. Ponownie, chroni to przed zaburzeniem kolejności działań.

    Źle: #define kwadrat(x) (x)*(x)
    Dobrze: #define kwadrat(x) ( (x)*(x) )
Przykład: Definiujemy makro 
    
    #define suma(a, b) (a)+(b) 
i wywołujemy je w kodzie wynik = suma(3, 4) * 5. Makro zostanie rozwinięte jako wynik = (3)+(4)*5, co - z powodu kolejności działań - da wynik inny niż pożądany.
