//mathlib.h
#ifndef MATHLIB_H
#define MATHLIB_H

typedef double vec_t;
typedef vec_t vec3_t[3];

#define PI 3.1415926535897932

double abs( double num );
double pow( double num, int exp );
double sqrt( double num );
double root( double num, int exp );
int numDigits(double num);

//Trig functions, using degrees
double sin(double num);
double cos(double num);
double tan(double num);

//Vector Functions
void vecAdd( vec3_t c, const vec3_t a, const vec3_t b );
void vecSub( vec3_t c, const vec3_t a, const vec3_t b );
void vecMult( vec3_t c, const vec3_t a, const vec3_t b );
void vsMult( vec3_t c, const vec3_t a, double b );
void vsAdd( vec3_t c, const vec3_t a, double b );
void unitVec( vec3_t c, const vec3_t a );
double dotProduct( const vec3_t a, const vec3_t b );
void crossProduct( vec3_t c, const vec3_t a, const vec3_t b );
double magnitude( const vec3_t a );

#endif 
