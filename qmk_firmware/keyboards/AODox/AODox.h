/* Copyright 2019 Pete Adriano DeBiase
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k010, k011, k012, k013, k014, k015, k016,\
    k10, k11, k12, k13, k14, k15, k16, k18, k110, k111, k112, k113, k114, k115, k116,\
    k20, k21, k22, k23, k24, k25, k26, k28, k210, k211, k212, k213, k214, k215, k216,\
    k30, k31, k32, k33, k34, k35, k37, k39, k311, k312, k313, k314, k315, k316,\
    k40, k41, k42, k43, k44, k45, k46, k47, k49, k410, k411, k412, k413, k414, k415, k416\
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, KC_NO, KC_NO, KC_NO, k010, k011, k012, k013, k014, k015, k016},\
    {k10, k11, k12, k13, k14, k15, k16, KC_NO, k18, KC_NO, k110, k111, k112, k113, k114, k115, k116},\
    {k20, k21, k22, k23, k24, k25, k26, KC_NO, k28, KC_NO, k210, k211, k212, k213, k214, k215, k216},\
    {k30, k31, k32, k33, k34, k35, KC_NO, k37, KC_NO, k39, KC_NO, k311, k312, k313, k314, k315, k316},\
    {k40, k41, k42, k43, k44, k45, k46, k47, KC_NO, k49, k410, k411, k412, k413, k414, k415, k416},\
}
