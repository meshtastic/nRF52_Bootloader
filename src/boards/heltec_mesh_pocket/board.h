/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _HELTEC_MESH_POCKET_H
#define _HELTEC_MESH_POCKET_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define LEDS_NUMBER           0

// Hold USER through reset to enter BLE OTA DFU.
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(1, 10)
#define BUTTON_2              BUTTON_1
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

#define BLEDIS_MANUFACTURER   "Heltec AutoMation"
#define BLEDIS_MODEL          "MeshPocket"

#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x0071
#define USB_DESC_CDC_ONLY_PID  0x0071

#define UF2_PRODUCT_NAME      "Heltec MeshPocket"
#define UF2_VOLUME_LABEL      "MESHPOCKET"
#define UF2_BOARD_ID          "nRF52840-HeltecMeshPocket-v1"
#define UF2_INDEX_URL         "https://heltec.org/project/meshpocket/"

#endif
