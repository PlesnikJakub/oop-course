# Sledování auta

## Cíl
Cílem tohoto cvičení je ověřit znalosti procedurálního programování a znalosti C/C++.

## Popis domény
Systém pro sledování pozice automobilu je zajištěn krabičkou v autě který posílá aktuální GPS pozici auta v pravidelných intervalech k uložení na server. Po dokončení jízdy jsou data k dispozici pro dadetačnou analýzy což může být například výpočet základních informací o proběhlé jízdě jako je její délka nebo průměrná rychlost.

## Zadání

Napište konzolovou aplikaci v C/C++ která bude bude zpracovávat seznam souřadnic pohybu auta (GPS) a vypočítává vlastnosti takové jízdy.

- Jako vstup použijte pozice v souboru car_positions.csv nebo car_positions.json
- Soubor obsahuje pozice auta zaznamenané v intervalech 20 sekund

Váš program by měl provést následující:

1. načíst data ze souboru do vhodného formátu (pokud nevíte, jak číst ze souboru, data zakódujte napevno).
2. odfiltrovat neplatná data (pozice 0,0)
3. vypočítat a vytisknout počet platných záznamů
4. vypočítat a vytisknout celkovou vzdálenost
4. vypočítat a vytisknout průměrnou rychlost auta

## Příklad
### car_positions.csv
```
latitude,longitude
49.1951,16.6068
49.1952,16.6070
49.1953,16.6072
0,0
49.1954,16.6074
49.1955,16.6076
```

### Console output
```
Počet platných záznamů: 5
Celková vzdálenost: 0.089 km
Průměrná rychlost: 16.02 km/h
```

## Příklad výpočtu vzálenosti mezi dvěmi GPS pozicemi

``` c
#include <stdio.h>
#include <math.h>

#define EARTH_RADIUS_KM 6371.0  // Earth's radius in kilometers

// Convert degrees to radians
double to_radians(double degrees) {
    return degrees * (M_PI / 180.0);
}

// Calculate the Haversine distance between two GPS coordinates
double haversine_distance(double lat1, double lon1, double lat2, double lon2) {
    double dlat = to_radians(lat2 - lat1);
    double dlon = to_radians(lon2 - lon1);

    double a = sin(dlat / 2) * sin(dlat / 2) +
               cos(to_radians(lat1)) * cos(to_radians(lat2)) *
               sin(dlon / 2) * sin(dlon / 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));
    return EARTH_RADIUS_KM * c;
}

int main() {
    double lat1 = 52.5200, lon1 = 13.4050; // Berlin
    double lat2 = 48.8566, lon2 = 2.3522;  // Paris

    double distance = haversine_distance(lat1, lon1, lat2, lon2);
    printf("Distance: %.2f km\n", distance);

    return 0;
}
```

## Doporučené zdroje
* https://www.geeksforgeeks.org/program-distance-two-points-earth/
* https://www.codeproject.com/Articles/5270863/StructMapping-Mapping-JSON-to-and-from-a-Cplusplus
* https://www.geeksforgeeks.org/csv-file-management-using-c/
* https://stackoverflow.com/questions/19936483/c-reading-csv-file
* https://www.delftstack.com/howto/c/fscanf-line-by-line-in-c/
* https://www.quantstart.com/articles/Mathematical-Constants-in-C/