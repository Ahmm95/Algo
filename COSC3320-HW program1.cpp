#include <iostream>
#include <vector>
#include <string>

#include <iostream>
using namespace std;

int main(){
	
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;

namespace PAQuestion1 {
class Program {
    static void Main(string[] args)
    {
        int[, ] matrix1A = new int[128, 128];
        int[, ] matrix1B = new int[128, 128];
        initializeMatrix(matrix1A);
        initializeMatrix(matrix1B);
        getTimeForAdding(matrix1A, matrix1B);
        int[, ] matrix2A = new int[256, 256];
        int[, ] matrix2B = new int[256, 256];
        initializeMatrix(matrix2A);
        initializeMatrix(matrix2B);
        getTimeForAdding(matrix2A, matrix2B);
        int[, ] matrix3A = new int[512, 512];
        int[, ] matrix3B = new int[512, 512];
        initializeMatrix(matrix3A);
        initializeMatrix(matrix3B);
        getTimeForAdding(matrix3A, matrix3B);
        int[, ] matrix4A = new int[1024, 1024];
        int[, ] matrix4B = new int[1024, 1024];
        initializeMatrix(matrix4A);
        initializeMatrix(matrix4B);
        getTimeForAdding(matrix4A, matrix4B);
        int[, ] matrix5A = new int[2048, 2048];
        int[, ] matrix5B = new int[2048, 2048];
        initializeMatrix(matrix5A);
        initializeMatrix(matrix5B);
        getTimeForAdding(matrix5A, matrix5B);
        int[, ] matrix6A = new int[4096, 4096];
        int[, ] matrix6B = new int[4096, 4096];
        initializeMatrix(matrix6A);
        initializeMatrix(matrix6B);
        getTimeForAdding(matrix6A, matrix6B);
        int[, ] matrix7A = new int[8192, 8192];
        int[, ] matrix7B = new int[8192, 8192];
        initializeMatrix(matrix7A);
        initializeMatrix(matrix7B);
        getTimeForAdding(matrix7A, matrix7B);
        int[, ] matrix8A = new int[16384, 16384];
        int[, ] matrix8B = new int[16384, 16384];
        initializeMatrix(matrix8A);
        initializeMatrix(matrix8B);
        getTimeForAdding(matrix8A, matrix8B);
        int[, ] matrix9A = new int[32768, 32768];
        int[, ] matrix9B = new int[32768, 32768];
        initializeMatrix(matrix9A);
        initializeMatrix(matrix9B);
        getTimeForAdding(matrix9A, matrix9B);
        int[, ] matrix10A = new int[65536, 65536];
        int[, ] matrix10B = new int[65536, 65536];
        initializeMatrix(matrix10A);
        initializeMatrix(matrix10B);
        getTimeForAdding(matrix10A, matrix10B);
        Console.WriteLine("Finished");
        Console.Read();
    }
public
    static void initializeMatrix(int[, ] matrix)
    {
        Console.WriteLine("Initialize Matrix of size " + matrix.GetLength(0) + "," + matrix.GetLength(1));
        for (int k = 0; k < matrix.GetLength(0); k++)
            for (int j = 0; j < matrix.GetLength(1); j++)
                matrix[k, j] = j;
    }
public
    static void getTimeForAdding(int[, ] matrixA, int[, ] matrixB)
    {
        int n = matrixA.GetLength(0);
        int[, ] matrixC = new int[matrixA.GetLength(0), matrixA.GetLength(1)];
        Console.WriteLine("Version 1");
        Stopwatch time = Stopwatch.StartNew();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                matrixC[i, j] = matrixA[i, j] + matrixB[i, j];
        time.Stop();
        Console.WriteLine("Time it took for Version 1 for matrices of length:" + matrixC.GetLength(0) + "," + matrixC.GetLength(1) + " was "
            + time.Elapsed + " time\n");

        Console.WriteLine("Version 2");
        time = Stopwatch.StartNew();
        for (int j = 0; j < n; j++)
            for (int i = 0; i < n; i++)
                matrixC[i, j] = matrixA[i, j] + matrixB[i, j];
        time.Stop();
        Console.WriteLine("Time it took for Version 2 for matrices of length:" + matrixC.GetLength(0) + "," + matrixC.GetLength(1) + " was "
            + time.Elapsed + " time\n");
    }

