/******************************************************************************\
 * Programación 1. Trabajo obligatorio curso 2020-21
 * Autores: Miguel Ángel Latre
 * Modificado por: ¡¡¡PONED AQUÍ VUESTROS NOMBRES!!!
 * Ultima revisión: ¡¡¡!!!
 * Resumen: Fichero de interfaz de un módulo para trabajar con registros que 
 *          representan grupos de temperaturas mensuales de una localidad en un
 *          año, con funciones que permiten obtener esos datos de los ficheros
 *          descritos en el enunciado del trabajo.
\******************************************************************************/

#pragma once

#include <string>
using namespace std;

const unsigned int NUM_MESES = 12;
const unsigned int AGNO_INICIAL = 2015;
const unsigned int AGNO_FINAL = 2019;
const unsigned int NUM_AGNOS = AGNO_FINAL - AGNO_INICIAL + 1;
const string RUTA_DATOS = "datos/";


struct GrupoTemps {
    // Define los campos necesarios para representar el nombre de una localidad,
    // un año y el grupo de 12 temperaturas mensuales de esa localidad 
    // en ese año.
};


/*
 * Pre:  En el directorio «RUTA_DATOS» existen ficheros denominados 
 *       «climatologia-XXXX.csv» para cada valor XXXX entre «AGNO_INICIAL» y 
 *       «AGNO_FINAL» que siguen la sintaxis de la regla <fichero-climatología>
 *       del enunciado.
 * Post: Ha solicitado al usuario una localidad y un año. Si el año está entre
 *       «AGNO_INICIAL» y «AGNO_FINAL» y en el fichero «climatologia-XXXX.csv»,
 *       siendo XXXX el año introducido por el usuario, hay datos
 *       correspondientes a la localidad introducida por el usuario, ha
 *       inicializado el registro «temperaturas» con los datos adecuados de
 *       temperaturas medias mensuales y ha devuelto «true».
 *       Si el año no está entre «AGNO_INICIAL» y «AGNO_FINAL» o no hay datos
 *       para la localidad solicitada o si no se pueden leer los ficheros,
 *       muestra un mensaje de error al usuario y devuelve «false». 
 */
bool obtenerGrupoTemps(GrupoTemps& grupo);


/*
 * Pre:  En el directorio «RUTA_DATOS» existen ficheros denominados 
 *       «climatologia-XXXX.csv» para cada valor XXXX entre «AGNO_INICIAL» y 
 *       «AGNO_FINAL» que siguen la sintaxis de la regla <fichero-climatología>
 *       del enunciado.
 * Post: Ha solicitado al usuario una localidad. Si en todos los ficheros
 *       «climatologia-XXXX.csv» hay datos correspondientes a la localidad
 *       introducida por el usuario, ha inicializado los registros
 *       «temperaturas» con los datos adecuados de
 *       temperaturas medias mensuales y ha devuelto «true».
 *       Si no hay datos para la localidad solicitada en alguno de los ficheros
 *       o si no se pueden leer los ficheros, muestra un mensaje de error al
 *       usuario y devuelve «false». 
 */
bool obtenerGrupoTempsLocalidad(GrupoTemps grupos[]);

