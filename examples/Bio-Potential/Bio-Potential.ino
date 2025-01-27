// LibEXG
// https://github.com/upsidedownlabs/libexg

// Upside Down Labs invests time and resources providing this open source code,
// please support Upside Down Labs and open-source hardware by purchasing
// products from Upside Down Labs!

// Copyright (c) 2021 Moteen Shah moteenshah.02@gmail.com
// Copyright (c) 2021 Upside Down Labs - contact@upsidedownlabs.tech

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <libexg.h>

#define BAUD_RATE 115200
float data_0, data_1, data_2, data_3, data_4, data_5;
LibEXG libEXG(true);

void setup()
{
  Serial.begin(BAUD_RATE);
}

void loop()
{
  // put your main code here, to run repeatedly:
  data_0 = libEXG.getData(EMG_MODE, A0, CHANNEL_0);
  data_1 = libEXG.getData(EMG_MODE, A1, CHANNEL_1);
  data_2 = libEXG.getData(EMG_MODE, A2, CHANNEL_2);
  data_3 = libEXG.getData(EMG_MODE, A3, CHANNEL_3);
  data_4 = libEXG.getData(EMG_MODE, A4, CHANNEL_4);
  data_5 = libEXG.getData(EMG_MODE, A5, CHANNEL_5);
 
    Serial.println(data_0);
    Serial.println(data_1);
    Serial.println(data_2);
    Serial.println(data_3);
    Serial.println(data_4);
    Serial.println(data_5);
}
