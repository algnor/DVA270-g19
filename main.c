#include <nrfx.h>
#include <nrf5340_application.h>
#include <nrfx_config.h>
#include <nrf.h>
#include <nrfx_bsdriver.h>
#include <assert.h>
#include <stdio.h>
#include <Daniel_GPIO.h> //Ni behöver alltså inte inkludera er egna UARTE write, förutsätt att det finns en uarte_write, uarte_init osv osv
#include "grupp1.h" //inkludera er header fil.
#include "header17.h"//Grupp 17;Spelet går ut på att komma till rätt okänd koordinat mha. förflyttning med j,k,l,i
#include <group19.h>


/* By Daniel Morberg*/



int main(void)
{
  int keypress = get_key();
  switch(keypress){
    case 1:
      //anrop till grupp 1's funktion
      break;

    case 17:
      start_game_grupp17();
      break;

    case 19:
      //antar att uarte och rtc är initializade globalt som [sak]_instance
      start_game_group19();
      break;
    
  //osv osv
  }
 
}

