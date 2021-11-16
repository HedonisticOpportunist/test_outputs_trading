/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

double calculateSimpleMovingAverage(std::vector<double> prices)
{
    double sum = 0.0;
    int count = 0;
    int timeframe = 3;
    double movingAverage = 0.0; 

    for (unsigned int i = 0; i < prices.size(); ++i )
    {
        sum += prices[i];
        ++count;

        if (count >= timeframe) 
        {
            movingAverage = double (sum / timeframe);
            sum -= double(prices[count - timeframe]);
            std::cout << movingAverage << std::endl;
        }
    }

    return movingAverage;
}

int main()
{
    std::vector<double> input_data = { 1, 3, 5, 6, 8, 12, 18, 21, 22, 25 };
    std::cout<< calculateSimpleMovingAverage(input_data) << std::endl;
    return 0;
}
