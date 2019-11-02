// Convert fractional part of float number to hexadecimal
#include <math.h>

int fhex(double fpnum) {
    double fracp;
    int decp;

    if (((int) fracp) != 0)
        fracp  = fmod(fpnum, (int) fpnum);
    else
        fracp = fpnum;
    fracp *= 16;
    decp   = (int) fracp;
    decp  *= 16;

    for (int i = 0; i < 6; ++i) {
        if (((int) fracp) != 0) 
            fracp  = fmod(fracp, (int) fracp);
        else
            fracp = fracp;
        fracp *= 16;
        decp  += (int) fracp;
        decp  *= 16;
    }

    if (((int) fracp) != 0)
        fracp  = fmod(fracp, (int) fracp);
    else
        fracp = fracp;
    fracp *= 16;
    decp  += (int) fracp;

    return decp;
}