#include "average.h"

#include <numeric>


double average(const double data[], int length)
{
	if (length == 0)
	{
		return 0;
	}

	double total = 0;

	for (int i = 0; i < length; i++)
	{
		total += data[i];
	}

	return total / length;

	// or just:
	// return std::accumulate(data, data + length, 0.0) / length;
}
