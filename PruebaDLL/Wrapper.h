#ifndef WRAPPER_H
#define WRAPPER_H

extern "C" __declspec(dllexport) void ConVector(int);

extern "C" __declspec(dllexport) void insertar(int, int);

extern "C" __declspec(dllexport) int elemento(int);

extern "C" __declspec(dllexport) int tam();

extern "C" __declspec(dllexport) void DesVector();

#endif