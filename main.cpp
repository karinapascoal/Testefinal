/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: karina
 *Alteração
 * Created on 28 de Maio de 2016, 16:42
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;

const bool LerArquivo(const std::string&);

int main(int argc, char** argv) {
    
    const std::string FILENAME ("x.ini");
    std::ifstream input;
    int numero;
    std::string file1, file2, filedat;
    input.open (FILENAME.c_str());
    if(!input)
        {
        std::cerr<<"Arquivo: "<<__FILE__<<"\n"
                 <<"Linha: "<<__LINE__ -3<<"\nnao encontrado."<<std::endl;
        std::cerr<<"Execucao cancelada."<<std::endl;
        abort();
    }
//    while (getline(input, numero))
//    {
        int i, contador (0);
        float soma, media, num, desvp;
        do  
        {   
            for (i = 0; i <= numero ; i++)
            {            
            input>>num;  
            soma += num;
            contador++;            
            }
            media = soma/(contador - 1);
                    
            for (i = 0; i < numero; i++)             
            {
            desvp = numero - media;
            soma+= desvp*desvp;
            };

            desvp = sqrt ( soma / numero );

        } 
            
    while (!input.eof());
    cout<<"Soma = "<<soma<<endl;
            cout<<"Contador: "<<contador<<endl;
            
//        float soma, media;
//        std::vector<float> x;
//           for (i = 0; i < contador; i++)             //x.size ----> tamanho da lista
//            {
//              soma += x[i];
//            };
//
//        media = soma/x.size();
        std::cout<<"Media = "<<media<<std::endl;

//    }
    
    input.close();
    input>>file1
         >>file2
         >>filedat;
    
    LerArquivo("x.ini");
    
    
    }

const bool LerArquivo(const std::string&_FILENAME)
{
     std::ifstream input (_FILENAME.c_str());
 if(!input)
    {
        std::cout<<"Nao encontrou o arquivo"<<std::endl;
    }
    input.close();

    return true;
}



