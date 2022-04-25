/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nuria
 *
 * Created on 18 de Abril de 2022, 21:35
 */

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

/*
 * 
 */
int globalMatrix_a[50][50];
int globalMatrix_b[50][50];

void createMatrix() {
    int i = 0, j = 0;

    for (i = 0; i < 50; i++) {
        for (j = 0; j < 50; j++) {
            globalMatrix_a[i][j] = rand();
            globalMatrix_b[i][j] = rand();
        }
    }
}

void matrixSum() {
    int resultMatrix[50][50];

    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 50; j++){
            resultMatrix[i][j] = globalMatrix_a[i][j] + globalMatrix_b[i][j];
        }   
    }
}

int main(int argc, char** argv) {
    createMatrix();

    return 0;
}

