/* l_ps1b.h -- created from l_ps1b.bin, 3918 (0xf4e) bytes

   This file is part of the UPX executable compressor.

   Copyright (C) 1996-2004 Markus Franz Xaver Johannes Oberhumer
   Copyright (C) 1996-2004 Laszlo Molnar
   All Rights Reserved.

   UPX and the UCL library are free software; you can redistribute them
   and/or modify them under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.
   If not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   Markus F.X.J. Oberhumer              Laszlo Molnar
   <mfx@users.sourceforge.net>          <ml1050@users.sourceforge.net>
 */


#define NRV_BOOT_LOADER_ADLER32 0x4d310522
#define NRV_BOOT_LOADER_CRC32   0xb1939f02

unsigned char nrv_boot_loader[3918] = {
 83, 80,  8, 60, 82, 86,  8, 53, 35, 64,  8,  2,  8,  0,  0,  1,   /* 0x   0 */
228,255,189, 39,  0,  0,164,175,  4,  0,165,175,  8,  0,166,175,   /* 0x  10 */
 12,  0,167,175, 16,  0,162,175, 20,  0,163,175, 24,  0,191,175,   /* 0x  20 */
 80, 67,  4, 60, 79, 68,132, 52, 69, 68,  6, 60, 79, 67,198, 52,   /* 0x  30 */
 69, 68,  6, 60, 33, 72,  0,  0,  1,  0, 11, 36, 33, 64,128,  0,   /* 0x  40 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x  50 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x  60 */
  1,  0, 66, 48,  6,  0, 64, 16,  1,  0,  3, 36,  0,  0,  2,145,   /* 0x  70 */
  1,  0,  8, 37,  0,  0,194,160,241,255,  0, 16,  1,  0,198, 36,   /* 0x  80 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x  90 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x  a0 */
  1,  0, 66, 48, 64, 24,  3,  0, 33, 24, 98,  0,127,  0, 34, 49,   /* 0x  b0 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x  c0 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x  d0 */
236,255, 64, 16,127,  0, 34, 49,  2,  0,  2, 36,  3,  0, 98, 20,   /* 0x  e0 */
253,255, 99, 36,  9,  0,  0, 16, 33, 24, 96,  1,  0,  0,  2,145,   /* 0x  f0 */
  1,  0,  8, 37,  0, 26,  3,  0, 33, 24, 98,  0,255,255,  2, 36,   /* 0x 100 */
 77,  0, 98, 16,  1,  0, 99, 36, 33, 88, 96,  0,127,  0, 34, 49,   /* 0x 110 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 120 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x 130 */
 33, 96, 64,  0, 64, 96, 12,  0,127,  0, 34, 49,  5,  0, 64, 20,   /* 0x 140 */
 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,   /* 0x 150 */
  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48, 33, 96,130,  1,   /* 0x 160 */
 26,  0,128, 21,  1, 13, 98, 44,  1,  0, 12, 36,127,  0, 34, 49,   /* 0x 170 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 180 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x 190 */
 64, 96, 12,  0, 33, 96,130,  1,127,  0, 34, 49,  5,  0, 64, 20,   /* 0x 1a0 */
 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,   /* 0x 1b0 */
  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,236,255, 64, 16,   /* 0x 1c0 */
127,  0, 34, 49,  2,  0,140, 37,  1, 13, 98, 44,  1,  0, 66, 56,   /* 0x 1d0 */
 33, 96,130,  1,  4,  0, 98, 40, 14,  0, 64, 20,  1,  0,140, 37,   /* 0x 1e0 */
 35, 24,195,  0,  4,  0,130, 41, 12,  0, 64, 20,  0,  0, 98,152,   /* 0x 1f0 */
  3,  0, 98,136,252,255,140, 37,  0,  0,194,184,  3,  0,194,168,   /* 0x 200 */
  4,  0, 99, 36,247,255,128, 21,  4,  0,198, 36,141,255,  0, 16,   /* 0x 210 */
127,  0, 34, 49, 35, 24,195,  0,  0,  0, 98,144,255,255,140, 37,   /* 0x 220 */
  0,  0,194,160,  1,  0, 99, 36,251,255,128, 21,  1,  0,198, 36,   /* 0x 230 */
132,255,  0, 16,127,  0, 34, 49, 33, 72,  0,  0,  1,  0, 11, 36,   /* 0x 240 */
 33, 64,128,  0,127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,   /* 0x 250 */
  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,   /* 0x 260 */
  2, 18,  9,  0,  1,  0, 66, 48,  6,  0, 64, 16,  1,  0,  3, 36,   /* 0x 270 */
  0,  0,  2,145,  1,  0,  8, 37,  0,  0,194,160,241,255,  0, 16,   /* 0x 280 */
  1,  0,198, 36,127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,   /* 0x 290 */
  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,   /* 0x 2a0 */
  2, 18,  9,  0,  1,  0, 66, 48, 64, 24,  3,  0, 33, 24, 98,  0,   /* 0x 2b0 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x 2c0 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x 2d0 */
  1,  0, 66, 48, 13,  0, 64, 20,255,255, 98, 36, 64, 24,  2,  0,   /* 0x 2e0 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x 2f0 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x 300 */
  1,  0, 66, 48,223,255,  0, 16, 33, 24, 98,  0,  2,  0,  2, 36,   /* 0x 310 */
 13,  0, 98, 20,253,255, 99, 36,127,  0, 34, 49,  5,  0, 64, 20,   /* 0x 320 */
 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,   /* 0x 330 */
  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48, 33, 24, 96,  1,   /* 0x 340 */
 12,  0,  0, 16,  1,  0, 76, 48,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 350 */
  0, 26,  3,  0, 33, 24, 98,  0,255,255,  2, 36, 70,  0, 98, 16,   /* 0x 360 */
 39, 16,  3,  0,  1,  0, 76, 48, 66, 24,  3,  0,  1,  0, 99, 36,   /* 0x 370 */
 33, 88, 96,  0,127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,   /* 0x 380 */
  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,   /* 0x 390 */
  2, 18,  9,  0,  1,  0, 66, 48, 64, 96, 12,  0, 33, 96,130,  1,   /* 0x 3a0 */
 26,  0,128, 21,  1,  5, 98, 44,  1,  0, 12, 36,127,  0, 34, 49,   /* 0x 3b0 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 3c0 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x 3d0 */
 64, 96, 12,  0, 33, 96,130,  1,127,  0, 34, 49,  5,  0, 64, 20,   /* 0x 3e0 */
 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,   /* 0x 3f0 */
  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,236,255, 64, 16,   /* 0x 400 */
127,  0, 34, 49,  2,  0,140, 37,  1,  5, 98, 44,  1,  0, 66, 56,   /* 0x 410 */
 33, 96,130,  1,  4,  0, 98, 40, 14,  0, 64, 20,  1,  0,140, 37,   /* 0x 420 */
 35, 24,195,  0,  4,  0,130, 41, 12,  0, 64, 20,  0,  0, 98,152,   /* 0x 430 */
  3,  0, 98,136,252,255,140, 37,  0,  0,194,184,  3,  0,194,168,   /* 0x 440 */
  4,  0, 99, 36,247,255,128, 21,  4,  0,198, 36,126,255,  0, 16,   /* 0x 450 */
127,  0, 34, 49, 35, 24,195,  0,  0,  0, 98,144,255,255,140, 37,   /* 0x 460 */
  0,  0,194,160,  1,  0, 99, 36,251,255,128, 21,  1,  0,198, 36,   /* 0x 470 */
117,255,  0, 16,127,  0, 34, 49, 33, 72,  0,  0,  1,  0, 11, 36,   /* 0x 480 */
 33, 64,128,  0,127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,   /* 0x 490 */
  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,   /* 0x 4a0 */
  2, 18,  9,  0,  1,  0, 66, 48,  6,  0, 64, 16,  1,  0,  3, 36,   /* 0x 4b0 */
  0,  0,  2,145,  1,  0,  8, 37,  0,  0,194,160,241,255,  0, 16,   /* 0x 4c0 */
  1,  0,198, 36,127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,   /* 0x 4d0 */
  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,   /* 0x 4e0 */
  2, 18,  9,  0,  1,  0, 66, 48, 64, 24,  3,  0, 33, 24, 98,  0,   /* 0x 4f0 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x 500 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x 510 */
  1,  0, 66, 48, 13,  0, 64, 20,255,255, 98, 36, 64, 24,  2,  0,   /* 0x 520 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x 530 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x 540 */
  1,  0, 66, 48,223,255,  0, 16, 33, 24, 98,  0,  2,  0,  2, 36,   /* 0x 550 */
 13,  0, 98, 20,253,255, 99, 36, 33, 24, 96,  1,127,  0, 34, 49,   /* 0x 560 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 570 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x 580 */
 12,  0,  0, 16,  1,  0, 76, 48,  0,  0,  2,145,  0, 26,  3,  0,   /* 0x 590 */
 33, 24, 98,  0,255,255,  2, 36, 92,  0, 98, 16,  1,  0,  8, 37,   /* 0x 5a0 */
 39, 16,  3,  0,  1,  0, 76, 48, 66, 24,  3,  0,  1,  0, 99, 36,   /* 0x 5b0 */
 33, 88, 96,  0, 13,  0,128, 17,127,  0, 34, 49,127,  0, 34, 49,   /* 0x 5c0 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 5d0 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x 5e0 */
 46,  0,  0, 16,  1,  0, 76, 36,127,  0, 34, 49,  5,  0, 64, 20,   /* 0x 5f0 */
 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,   /* 0x 600 */
  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48, 12,  0, 64, 16,   /* 0x 610 */
  1,  0,140, 37,127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,   /* 0x 620 */
  0,  0,  2,145,  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,   /* 0x 630 */
  2, 18,  9,  0,  1,  0, 66, 48, 24,  0,  0, 16,  3,  0, 76, 36,   /* 0x 640 */
127,  0, 34, 49,  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,   /* 0x 650 */
  1,  0,  8, 37, 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,   /* 0x 660 */
  1,  0, 66, 48, 64, 96, 12,  0, 33, 96,130,  1,127,  0, 34, 49,   /* 0x 670 */
  5,  0, 64, 20, 64, 72,  9,  0,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 680 */
 64, 16,  2,  0,  1,  0, 73, 36,  2, 18,  9,  0,  1,  0, 66, 48,   /* 0x 690 */
236,255, 64, 16,127,  0, 34, 49,  3,  0,140, 37,  1,  5, 98, 44,   /* 0x 6a0 */
  1,  0, 66, 56, 33, 96,130,  1,  4,  0, 98, 40, 14,  0, 64, 20,   /* 0x 6b0 */
  1,  0,140, 37, 35, 24,195,  0,  4,  0,130, 41, 12,  0, 64, 20,   /* 0x 6c0 */
  0,  0, 98,152,  3,  0, 98,136,252,255,140, 37,  0,  0,194,184,   /* 0x 6d0 */
  3,  0,194,168,  4,  0, 99, 36,247,255,128, 21,  4,  0,198, 36,   /* 0x 6e0 */
105,255,  0, 16,127,  0, 34, 49, 35, 24,195,  0,  0,  0, 98,144,   /* 0x 6f0 */
255,255,140, 37,  0,  0,194,160,  1,  0, 99, 36,251,255,128, 21,   /* 0x 700 */
  1,  0,198, 36, 96,255,  0, 16,127,  0, 34, 49, 33, 72,  0,  0,   /* 0x 710 */
 33,104, 32,  1,  1,  0, 11, 36, 33, 64,128,  0,255,255,173, 37,   /* 0x 720 */
  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,   /* 0x 730 */
  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,   /* 0x 740 */
  6,  0, 64, 16,  1,  0,  3, 36,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 750 */
  0,  0,194,160,241,255,  0, 16,  1,  0,198, 36,255,255,173, 37,   /* 0x 760 */
  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,   /* 0x 770 */
  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,   /* 0x 780 */
 64, 24,  3,  0, 33, 24, 98,  0,255,255,173, 37,  6,  0,161,  5,   /* 0x 790 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x 7a0 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,235,255, 64, 16,   /* 0x 7b0 */
  0,  0,  0,  0,  2,  0,  2, 36,  3,  0, 98, 20,253,255, 99, 36,   /* 0x 7c0 */
  9,  0,  0, 16, 33, 24, 96,  1,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x 7d0 */
  0, 26,  3,  0, 33, 24, 98,  0,255,255,  2, 36, 77,  0, 98, 16,   /* 0x 7e0 */
  1,  0, 99, 36, 33, 88, 96,  0,255,255,173, 37,  6,  0,161,  5,   /* 0x 7f0 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x 800 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48, 33, 96, 64,  0,   /* 0x 810 */
 64, 96, 12,  0,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x 820 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x 830 */
  6, 16,169,  1,  1,  0, 66, 48, 33, 96,130,  1, 26,  0,128, 21,   /* 0x 840 */
  1, 13, 98, 44,  1,  0, 12, 36,255,255,173, 37,  6,  0,161,  5,   /* 0x 850 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x 860 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48, 64, 96, 12,  0,   /* 0x 870 */
 33, 96,130,  1,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x 880 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x 890 */
  6, 16,169,  1,  1,  0, 66, 48,235,255, 64, 16,  0,  0,  0,  0,   /* 0x 8a0 */
  2,  0,140, 37,  1, 13, 98, 44,  1,  0, 66, 56, 33, 96,130,  1,   /* 0x 8b0 */
  4,  0, 98, 40, 14,  0, 64, 20,  1,  0,140, 37, 35, 24,195,  0,   /* 0x 8c0 */
  4,  0,130, 41, 12,  0, 64, 20,  0,  0, 98,152,  3,  0, 98,136,   /* 0x 8d0 */
252,255,140, 37,  0,  0,194,184,  3,  0,194,168,  4,  0, 99, 36,   /* 0x 8e0 */
247,255,128, 21,  4,  0,198, 36,141,255,  0, 16,255,255,173, 37,   /* 0x 8f0 */
 35, 24,195,  0,  0,  0, 98,144,255,255,140, 37,  0,  0,194,160,   /* 0x 900 */
  1,  0, 99, 36,251,255,128, 21,  1,  0,198, 36,132,255,  0, 16,   /* 0x 910 */
255,255,173, 37, 33, 72,  0,  0, 33,104, 32,  1,  1,  0, 11, 36,   /* 0x 920 */
 33, 64,128,  0,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x 930 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x 940 */
  6, 16,169,  1,  1,  0, 66, 48,  6,  0, 64, 16,  1,  0,  3, 36,   /* 0x 950 */
  0,  0,  2,145,  1,  0,  8, 37,  0,  0,194,160,241,255,  0, 16,   /* 0x 960 */
  1,  0,198, 36,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x 970 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x 980 */
  6, 16,169,  1,  1,  0, 66, 48, 64, 24,  3,  0, 33, 24, 98,  0,   /* 0x 990 */
255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,   /* 0x 9a0 */
  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,   /* 0x 9b0 */
  1,  0, 66, 48, 13,  0, 64, 20,255,255, 98, 36, 64, 24,  2,  0,   /* 0x 9c0 */
255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,   /* 0x 9d0 */
  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,   /* 0x 9e0 */
  1,  0, 66, 48,223,255,  0, 16, 33, 24, 98,  0,  2,  0,  2, 36,   /* 0x 9f0 */
 13,  0, 98, 20,253,255, 99, 36,255,255,173, 37,  6,  0,161,  5,   /* 0x a00 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x a10 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48, 33, 24, 96,  1,   /* 0x a20 */
 12,  0,  0, 16,  1,  0, 76, 48,  0,  0,  2,145,  1,  0,  8, 37,   /* 0x a30 */
  0, 26,  3,  0, 33, 24, 98,  0,255,255,  2, 36, 70,  0, 98, 16,   /* 0x a40 */
 39, 16,  3,  0,  1,  0, 76, 48, 66, 24,  3,  0,  1,  0, 99, 36,   /* 0x a50 */
 33, 88, 96,  0,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x a60 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x a70 */
  6, 16,169,  1,  1,  0, 66, 48, 64, 96, 12,  0, 33, 96,130,  1,   /* 0x a80 */
 26,  0,128, 21,  1,  5, 98, 44,  1,  0, 12, 36,255,255,173, 37,   /* 0x a90 */
  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,   /* 0x aa0 */
  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,   /* 0x ab0 */
 64, 96, 12,  0, 33, 96,130,  1,255,255,173, 37,  6,  0,161,  5,   /* 0x ac0 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x ad0 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,235,255, 64, 16,   /* 0x ae0 */
  0,  0,  0,  0,  2,  0,140, 37,  1,  5, 98, 44,  1,  0, 66, 56,   /* 0x af0 */
 33, 96,130,  1,  4,  0, 98, 40, 14,  0, 64, 20,  1,  0,140, 37,   /* 0x b00 */
 35, 24,195,  0,  4,  0,130, 41, 12,  0, 64, 20,  0,  0, 98,152,   /* 0x b10 */
  3,  0, 98,136,252,255,140, 37,  0,  0,194,184,  3,  0,194,168,   /* 0x b20 */
  4,  0, 99, 36,247,255,128, 21,  4,  0,198, 36,126,255,  0, 16,   /* 0x b30 */
255,255,173, 37, 35, 24,195,  0,  0,  0, 98,144,255,255,140, 37,   /* 0x b40 */
  0,  0,194,160,  1,  0, 99, 36,251,255,128, 21,  1,  0,198, 36,   /* 0x b50 */
117,255,  0, 16,255,255,173, 37, 33, 72,  0,  0, 33,104, 32,  1,   /* 0x b60 */
  1,  0, 11, 36, 33, 64,128,  0,255,255,173, 37,  6,  0,161,  5,   /* 0x b70 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x b80 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,  6,  0, 64, 16,   /* 0x b90 */
  1,  0,  3, 36,  0,  0,  2,145,  1,  0,  8, 37,  0,  0,194,160,   /* 0x ba0 */
241,255,  0, 16,  1,  0,198, 36,255,255,173, 37,  6,  0,161,  5,   /* 0x bb0 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x bc0 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48, 64, 24,  3,  0,   /* 0x bd0 */
 33, 24, 98,  0,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x be0 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x bf0 */
  6, 16,169,  1,  1,  0, 66, 48, 13,  0, 64, 20,255,255, 98, 36,   /* 0x c00 */
 64, 24,  2,  0,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x c10 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x c20 */
  6, 16,169,  1,  1,  0, 66, 48,223,255,  0, 16, 33, 24, 98,  0,   /* 0x c30 */
  2,  0,  2, 36, 13,  0, 98, 20,253,255, 99, 36, 33, 24, 96,  1,   /* 0x c40 */
255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,   /* 0x c50 */
  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,   /* 0x c60 */
  1,  0, 66, 48, 12,  0,  0, 16,  1,  0, 76, 48,  0,  0,  2,145,   /* 0x c70 */
  0, 26,  3,  0, 33, 24, 98,  0,255,255,  2, 36, 92,  0, 98, 16,   /* 0x c80 */
  1,  0,  8, 37, 39, 16,  3,  0,  1,  0, 76, 48, 66, 24,  3,  0,   /* 0x c90 */
  1,  0, 99, 36, 33, 88, 96,  0, 12,  0,128, 17,  0,  0,  0,  0,   /* 0x ca0 */
255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,   /* 0x cb0 */
  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,   /* 0x cc0 */
  1,  0, 66, 48, 46,  0,  0, 16,  1,  0, 76, 36,255,255,173, 37,   /* 0x cd0 */
  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,   /* 0x ce0 */
  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48,   /* 0x cf0 */
 12,  0, 64, 16,  1,  0,140, 37,255,255,173, 37,  6,  0,161,  5,   /* 0x d00 */
  6, 16,169,  1, 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,   /* 0x d10 */
  4,  0,  8, 37,  6, 16,169,  1,  1,  0, 66, 48, 24,  0,  0, 16,   /* 0x d20 */
  3,  0, 76, 36,255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1,   /* 0x d30 */
 31,  0, 13, 36,  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,   /* 0x d40 */
  6, 16,169,  1,  1,  0, 66, 48, 64, 96, 12,  0, 33, 96,130,  1,   /* 0x d50 */
255,255,173, 37,  6,  0,161,  5,  6, 16,169,  1, 31,  0, 13, 36,   /* 0x d60 */
  0,  0,  9,153,  3,  0,  9,137,  4,  0,  8, 37,  6, 16,169,  1,   /* 0x d70 */
  1,  0, 66, 48,235,255, 64, 16,  0,  0,  0,  0,  3,  0,140, 37,   /* 0x d80 */
  1,  5, 98, 44,  1,  0, 66, 56, 33, 96,130,  1,  4,  0, 98, 40,   /* 0x d90 */
 14,  0, 64, 20,  1,  0,140, 37, 35, 24,195,  0,  4,  0,130, 41,   /* 0x da0 */
 12,  0, 64, 20,  0,  0, 98,152,  3,  0, 98,136,252,255,140, 37,   /* 0x db0 */
  0,  0,194,184,  3,  0,194,168,  4,  0, 99, 36,247,255,128, 21,   /* 0x dc0 */
  4,  0,198, 36,105,255,  0, 16,255,255,173, 37, 35, 24,195,  0,   /* 0x dd0 */
  0,  0, 98,144,255,255,140, 37,  0,  0,194,160,  1,  0, 99, 36,   /* 0x de0 */
251,255,128, 21,  1,  0,198, 36, 96,255,  0, 16,255,255,173, 37,   /* 0x df0 */
 67, 83,  4, 52,192, 32,  4,  0, 67, 83,  4, 52,  0,  0,192,172,   /* 0x e00 */
252,255,132, 36,253,255,128, 20,  4,  0,198, 36,  3,  0,192,168,   /* 0x e10 */
  0,  0,192,184,252,255,132, 36,252,255,128, 20,  4,  0,198, 36,   /* 0x e20 */
160,  0, 10, 36,  9,248, 64,  1, 68,  0,  9, 36,  0,  0,164,143,   /* 0x e30 */
  4,  0,165,143,  8,  0,166,143, 12,  0,167,143, 16,  0,162,143,   /* 0x e40 */
 20,  0,163,143, 80, 69, 80, 74, 24,  0,191,143, 85, 80, 88, 33,   /* 0x e50 */
161,216,208,213,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,   /* 0x e60 */
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 45, 80, 83, 49, 83,   /* 0x e70 */
 84, 65, 82, 84,  0,  0,  0,  0, 80, 83, 49, 69, 78, 84, 82, 89,   /* 0x e80 */
 20,  0,  0,  0, 80, 83, 49, 67, 79, 78, 72, 76, 56,  0,  0,  0,   /* 0x e90 */
 80, 83, 49, 67, 79, 78, 72, 73, 64,  0,  0,  0, 80, 83, 49, 78,   /* 0x ea0 */
 50, 66, 48, 56, 68,  0,  0,  0, 80, 83, 49, 78, 50, 68, 48, 56,   /* 0x eb0 */
 72,  2,  0,  0, 80, 83, 49, 78, 50, 69, 48, 56,136,  4,  0,  0,   /* 0x ec0 */
 80, 83, 49, 78, 50, 66, 51, 50, 28,  7,  0,  0, 80, 83, 49, 78,   /* 0x ed0 */
 50, 68, 51, 50, 36,  9,  0,  0, 80, 83, 49, 78, 50, 69, 51, 50,   /* 0x ee0 */
104, 11,  0,  0, 80, 83, 49, 77, 83, 69, 84, 66,  0, 14,  0,  0,   /* 0x ef0 */
 80, 83, 49, 77, 83, 69, 84, 83,  8, 14,  0,  0, 80, 83, 49, 77,   /* 0x f00 */
 83, 69, 84, 65, 12, 14,  0,  0, 80, 83, 49, 77, 83, 69, 84, 85,   /* 0x f10 */
 28, 14,  0,  0, 80, 83, 49, 69, 88, 73, 84, 67, 48, 14,  0,  0,   /* 0x f20 */
 80, 83, 49, 80, 65, 72, 68, 82, 92, 14,  0,  0, 80, 83, 49, 69,   /* 0x f30 */
 79, 65, 83, 77,124, 14,  0,  0,255,255,255,255,124, 14            /* 0x f40 */
};