%module test
%{
extern double value();
extern void   setValue(double v);
extern int    fact(int);
extern int    mod(int n, int m);
%}

extern double value();
extern void   setValue(double v);
extern int    fact(int);
extern int    mod(int n, int m);
