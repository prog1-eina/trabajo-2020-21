/******************************************************************************\
 * Programación 1. Trabajo obligatorio curso 2020-21
 * Autores: Miguel Ángel Latre
 * Modificado por: ¡¡¡PONED AQUÍ VUESTROS NOMBRES!!!
 * Ultima revisión: ¡¡¡!!!
 * Resumen: Fichero de interfaz de un módulo que ofrece funciones para
 *          implementar las opciones del menú del programa principal de este
 *          trabajo a partir de grupos de temperaturas ya obtenidas
 *          de un fichero.
\******************************************************************************/

#pragma once

#include <string>
#include "temperaturas.hpp"
using namespace std;

/*
 * Pre:  ---
 * Post: Ha escrito en la pantalla una tabla en la que se muestran los datos del
 *       registro «grupo»: el nombre de la localidad, el año y las temperaturas
 *       de cada mes, tanto en grados Celsius como Fahrenheit, con una precisión
 *       de un decimal, tal y como se muestra a continuación:
 *              Temperaturas medias mensuales
 *              ZARAGOZA (2019)
 *              ------------------------------------------ 
 *              Enero         6.9 °C   44.4 °F
 *              Febrero       9.9 °C   49.8 °F
 *              Marzo        12.8 °C   55.0 °F
 *              Abril        14.1 °C   57.4 °F
 *              Mayo         17.7 °C   63.9 °F
 *              Junio        24.2 °C   75.6 °F
 *              Julio        27.1 °C   80.8 °F
 *              Agosto       26.6 °C   79.9 °F
 *              Septiembre   22.3 °C   72.1 °F
 *              Octubre      18.3 °C   64.9 °F
 *              Noviembre    11.3 °C   52.3 °F
 *              Diciembre     9.2 °C   48.6 °F
 */
void listarTemperaturas(const GrupoTemps& grupo);


/*
 * Pre:  ---
 * Post: Ha escrito en la pantalla estadísticos (máximo, mínimo, media y
 *       desviación) en grados Celsius de los datos de temperatura del registro
 *       «grupo», con una precisión de un decimal, tal y como se muestra a
 *       continuación:
 *              Estadísticos
 *              TERUEL (2018)
 *              ------------------------------------------
 *              Temperatura media mensual máxima:  23.4 °C
 *              Temperatura media mensual mínima:   5.6 °C
 *              Temperatura media anual:           13.3 °C
 *              Desviación típica:                  6.8 °C
 */
void estadisticos(const GrupoTemps& grupo);


/*
 * Pre:  El vector «grupos» tiene una dimensión de «NUM_AGNOS» componentes.
 *       El valor del campo «localidad» de cada componente corresponde a una
 *       misma localidad, y el campo «agno» de cada componente tiene valores
 *       crecientes consecutivos. 
 * Post: Ha escrito en la pantalla la evolución de la temperatura media anual
 *       (en grados Celsius y con una precisión de un decimal)
 *       reflejada por los datos de temperatura de las distintas componentes del
 *       vector «grupos», tal y como se muestra a continuación:
 * 
 *               Evolución de temperaturas medias
 *               HUESCA
 *               ------------------------------------------
 *               2015   15.5 °C
 *               2016   14.6 °C   -0.9 °C
 *               2017   14.7 °C   +0.1 °C
 *               2018   14.8 °C   +0.1 °C
 *               2019   14.5 °C   -0.3 °C
 * 
 *       La primera columna de la tabla representa los años a los que
 *       corresponden las medias, la segunda, la temperatura media anual en sí
 *       y la tercera, la diferencia entre la temperatura media del año en
 *       cuestión con respecto al anterior. Va precedida de un signo «+» o un
 *       signo «-», dependiendo de si la diferencia representa un incremento o
 *       un decremento. En el caso del primer año, se omite esta información.
 */
void evolucion(const GrupoTemps grupos[]);


/*
 * Pre:  El parámetro «flujo» es «cout» o un «ofstream» asociado con un fichero
 *       de texto en el que se puede escribir.
 * Post: Ha escrito en «flujo» un gráfico con las temperaturas mensuales del 
 *       registro «grupo» con el formato que se muestra a continuación:
 * 
 *               Gráfico
 *               CALATAYUD (2015)
 *               ------------------------------------------
 *                  30 |                                                
 *                     |                                                
 *                     |                           *                    
 *                     |                           *                    
 *                     |                           *   *                
 *                  20 |                       *   *   *                
 *                     |                       *   *   *   *            
 *                     |                   *   *   *   *   *            
 *                     |                   *   *   *   *   *   *        
 *                     |               *   *   *   *   *   *   *        
 *                  10 |               *   *   *   *   *   *   *   *    
 *                     |           *   *   *   *   *   *   *   *   *    
 *                     |       *   *   *   *   *   *   *   *   *   *   *
 *                     |   *   *   *   *   *   *   *   *   *   *   *   *
 *                     |   *   *   *   *   *   *   *   *   *   *   *   *
 *                   0 |   *   *   *   *   *   *   *   *   *   *   *   *
 *                     |   *   *   *   *   *   *   *   *   *   *   *   *
 *                     |   *   *   *   *   *   *   *   *   *   *   *   *
 *                     |   *   *   *   *   *   *   *   *   *   *   *   *
 *                     |   *   *   *   *   *   *   *   *   *   *   *   *
 *                 -10 |   *   *   *   *   *   *   *   *   *   *   *   *
 *                     +------------------------------------------------
 *                         1   2   3   4   5   6   7   8   9  10  11  12
 */
void escribirGrafico(const GrupoTemps& grupo, ostream& flujo);


/*
 * Pre:  El vector «grupos» tiene una dimensión de «NUM_AGNOS» componentes.
 *       El valor del campo «localidad» de cada componente corresponde a una
 *       misma localidad, y el campo «agno» de cada componente tiene valores
 *       crecientes consecutivos. 
 * Post: Ha escrito en un fichero denominado «nombreFichero» los gráficos con
 *       las temperaturas mensuales de las componentes del vector «grupos», con
 *       exactamente el mismo formato que se muestra en la postcondición del
 *       procedimiento «escribirGrafico». Ha devuelto «true» si el fichero
 *       denominado «nombreFichero» se ha podido crear o escribir sin problemas
 *       y «false» en caso contrario.
 */
bool escribirGraficos(const GrupoTemps grupo[], const string nombreFichero);
