#include <iostream>
#include "neuron.h"

int main(void)
{
	neuron::Neuron<> neuron;

	std::cout << "Transfer function = "
		      << neuron.TransferFunction(neuron.Summation())
		      << std::endl;
	return 0;
}