/*
 * inputsTp.h
 *
 *  Created on: 12 may. 2022
 *      Author: ungim
 */

#ifndef INPUTSTP_H_
#define INPUTSTP_H_

void rellenarInt(int* variableRecibida, char textoAMostrar[]);

void rellenarFloat(float* variableRecibida, char textoAMostrar[]);

void rellenarArray(char arrayRecibido[], char textoAMostrar[]);

int countPassengers (Passenger* list, int size);

int countPassengersPrices (Passenger* list, int size);

int calculateAveragePrice (Passenger* list, int size);

int countPassengrOverAveragePrice (Passenger* list, int size);

#endif /* INPUTSTP_H_ */
