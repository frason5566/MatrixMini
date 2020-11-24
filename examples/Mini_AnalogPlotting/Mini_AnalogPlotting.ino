/*******************
  Mini Analog Plotting Example
 * Description: Demonstrates how to use Serial Plotter to
 *              show how the analog input change.
 * Note:        After uploading the code, open the Serial Plotter
 *              insted of Serial Monitor.
 *               Tools-> Serial Plotter(Ctrl+Shift+L)
 * Author:      Frason Fan
 * modified 18 Nov 2020
 *  
 * www.matrixrobotics.com
*/
#include "MatrixMini.h"

void setup() {
  Mini.begin();
  Serial.begin(115200);
  Serial.println("\nMATRIX Mini Test - Analog Plotting\n");
  Serial.println("Starting Up ... ");
}

void loop() {
  Serial.print(Mini.A1.get());
  Serial.print(" ");
  Serial.println(Mini.A3.get());
}
