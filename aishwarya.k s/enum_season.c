#include <stdio.h>

enum month {
    jan = 1,
    feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

int main() {
    enum month m;
    m = may;
    
    char *season;

    switch (m) {   
        case dec: case jan: case feb:
        season = "winter"; 
        break;

        case mar: case apr: case may:
        season = "summer";
        break;

        case jun: case jul: case aug:
        season = "monsoon";
        break;

        case sep: case oct: case nov:
        season = "spring";
        break;
    }

    printf("%d is a month of %s\n", m, season); 

    return 0;
}
