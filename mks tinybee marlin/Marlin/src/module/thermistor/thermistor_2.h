/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// R25 = 200 kOhm, beta25 = 4338 K, 4.7 kOhm pull-up, ATC Semitec 204GT-2
// Verified by linagee. Source: https://www.mouser.com/datasheet/2/362/semitec%20usa%20corporation_gtthermistor-1202937.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
//
constexpr temp_entry_t temptable_2[] PROGMEM = {
  { OV(  20), 300 },
  { OV(  28), 295 },
  { OV(  30), 290 },
  { OV(  47), 285 },
  { OV(  53), 280 },
  { OV(  60), 275 },
  { OV(  68), 270 },
  { OV(  75), 265 },
  { OV(  82), 260 },
  { OV(  90), 255 },
  { OV(  95), 250 },
  { OV(  103), 245 },
  { OV(  119), 240 },
  { OV(  130), 235 },
  { OV(  145), 230 },
  { OV(  150), 225 },
  { OV(  160), 220 },
  { OV(  175), 215 },
  { OV(  195), 210 },
  { OV( 212), 205 },
  { OV( 223), 200 },
  { OV( 250), 195 },
  { OV( 266), 190 },
  { OV( 280), 185 },
  { OV( 300), 180 },
  { OV( 335), 175 },
  { OV( 355), 170 },
  { OV( 390), 165 },
  { OV( 415), 160 },
  { OV( 455), 155 },
  { OV( 490), 150 },
  { OV( 510), 145 },
  { OV( 540), 140 },
  { OV( 563), 135 },
  { OV( 596), 130 },
  { OV( 625), 125 },
  { OV( 655), 120 },
  { OV( 678), 115 },
  { OV( 715), 110 },
  { OV( 730), 105 },
  { OV( 765), 100 },
  { OV( 795),  95 },
  { OV( 817),  90 },
  { OV( 845),  85 },
  { OV( 860),  80 },
  { OV( 872),  75 },
  { OV( 892),  70 },
  { OV( 905),  65 },
  { OV( 922),  60 },
  { OV( 935),  55 },
  { OV( 948),  50 },
  { OV( 955),  45 },
  { OV( 970),  40 },
  { OV( 975),  35 },
  { OV( 980),  30 },
  { OV( 985),  25 },
  { OV( 990),  20 },
  { OV( 995),  15 },
  { OV( 1000),  10 },
  { OV(1005),   5 },
  { OV(1010),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
/*
constexpr temp_entry_t temptable_2[] PROGMEM = {
  { OV(   1), 848 },
  { OV(  30), 300 }, // top rating 300C
  { OV(  34), 290 },
  { OV(  39), 280 },
  { OV(  46), 270 },
  { OV(  53), 260 },
  { OV(  63), 250 },
  { OV(  74), 240 },
  { OV(  87), 230 },
  { OV( 104), 220 },
  { OV( 124), 210 },
  { OV( 148), 200 },
  { OV( 176), 190 },
  { OV( 211), 180 },
  { OV( 252), 170 },
  { OV( 301), 160 },
  { OV( 357), 150 },
  { OV( 420), 140 },
  { OV( 489), 130 },
  { OV( 562), 120 },
  { OV( 636), 110 },
  { OV( 708), 100 },
  { OV( 775),  90 },
  { OV( 835),  80 },
  { OV( 884),  70 },
  { OV( 924),  60 },
  { OV( 955),  50 },
  { OV( 977),  40 },
  { OV( 993),  30 },
  { OV(1004),  20 },
  { OV(1012),  10 },
  { OV(1016),   0 }
};
*/