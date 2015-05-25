#ifndef _NEURON_
#define _NEURON_
	
#define SIGMOID(xj)	1 / (1 + exp(-xj))

#include <random>
#include <math.h>
#include <vector>

namespace neuron
{
	template<typename T = double>
	class Neuron
	{
	public:
		Neuron(void)
			: num_inputs(8)
		{
			std::default_random_engine rand;
			std::uniform_real_distribution<T> dis(0, 1);

			for (auto i = 0; i < num_inputs; i++)
				weights.push_back(dis(rand));
		}

		T Summation(void)
		{
			for (auto i : weights) sum_of_weights += i;
			return sum_of_weights;
		}

		T TransferFunction(T xj)
		{
			return tanh(xj);
		}

	private:
		const int num_inputs;
		T sum_of_weights;
		std::vector<T> weights;
	};
}
#endif