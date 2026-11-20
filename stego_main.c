#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stb_image.h"
#include "stb_image_write.h"

#define STB_IMAGE_IMPLEMENTATION
#define OUTPUT_KANALER 4 // Vi sætter værdien til "4" fordi vi gerne vil have RGB + alpha per pixel, Dvs. antal elementer i arrayet er: Bredde * Højde * 4 
#define BITS_PER_BYTE 8



void stego_embed(char* data, size_t antal_elementer, size_t antal_elementer_besked ,const char* besked) {
    //int antal_runder = antal_elementer_besked *
    int tælleindeks = 2;
    for (int i = 0; i < antal_elementer_besked; i++) {
        for (int v = 0; v < BITS_PER_BYTE; v++) {
            data[tælleindeks] = 


            tælleindeks += 4; 
        }
    
               
    
    }

   
}







int main(void) {
    const char filnavn[] = "billede_test.png";
    const char besked[] = "Hello World";
    int bredde;
    int hoejde;
    int n;

    int valg = 1;


    unsigned char *data = stbi_load(filnavn, &bredde, &hoejde, &n, OUTPUT_KANALER); // Udfylder parameterne i funktionen kræver (læses under usage i stb_image.h)

    if (data == NULL) {
        exit(EXIT_FAILURE);
    }

    size_t antal_elementer = bredde * hoejde * OUTPUT_KANALER;
    size_t antal_elementer_besked = strlen(besked) + 1;



    stego_embed(data, antal_elementer, antal_elementer_besked ,besked);




}   
