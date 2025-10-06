#include<iostream>
#include<stdio.h>
#include<cuda_runtime.h>


__global__ void helloFromGPU(){
	printf("Hello from thread ID %d\n",threadIdx.x);
}

int main(){
	helloFromGPU<<<1,5>>>();
	cudaDeviceSyncronize();
	return 0;
}
