// Convert fractional part of float number to hexadecimal

#include <math.h>

int fhex(double fpnum) {
    double fracp;
    int decp;

    fracp  = fmod(fpnum, (int) fpnum);
    fracp *= 16;
    decp   = (int) fracp;
    decp  *= 16;

    for (int i = 0; i < 6; ++i) {
        fracp  = fmod(fracp, (int) fracp);
        fracp *= 16;
        decp  += (int) fracp;
        decp  *= 16;
    }

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;

    return decp;
}

int fhex_hardcode(double fpnum) {
    double fracp;
    int decp;

    fracp  = fmod(fpnum, (int) fpnum);
    fracp *= 16;
    decp   = (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;
    decp  *= 16;

    fracp  = fmod(fracp, (int) fracp);
    fracp *= 16;
    decp  += (int) fracp;

    return decp;
}