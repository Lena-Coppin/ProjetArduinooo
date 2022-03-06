#include <Tone.h>   //Aka "the library that saved us"

#include "notes.h"
#include "fonctions_basiques.h"

#include "principal_right_piano.h"
#include "other_left_piano.h"
#include "general_play.h"

#include "melodies.h"

void setup() {
  first_initializing();
  left_piano_initializing();
  right_piano_initializing();
  write_matrix(HIGH, 's', 2);
  cch_short(left_tone, right_tone);
  write_matrix(HIGH, (char) current_set_number+48);
}

void loop() {
  //print_delta_temps_et_diviseur();
  pianos_checking();
}
