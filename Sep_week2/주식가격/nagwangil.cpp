#include <string>
#include <vector>

using namespace std;
vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for (int i = 0; i < prices.size(); i++)
    {
        int time = 0;

        if (i + 1 == prices.size())
        {
            answer.push_back(0);
            break;
        }
        for (int j = i+1; j < prices.size(); j++)
        {
            time++;
                       
            if(prices[i] > prices[j])
            {
                
                answer.push_back(time);
                break;
            }
            if (j + 1 == prices.size())
            {
                answer.push_back(time);
            }

        }
    }


    return answer;
}
