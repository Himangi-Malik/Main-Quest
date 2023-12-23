class Solution {
public:
    vector<int> simpleSieve(int limit)
    {
        vector<int> prime1(limit+1, true);
        for(int i = 2; i*i<limit; i++ )
        {
            if(prime1[i])
            {
                for(int j = i*i; j<limit; j= j+i)
                prime1[j]=false;
            }
        }
        vector <int> prime;
        for(int k = 2; k < limit; k++)
        {
            if(prime1[k])
            prime.push_back(k);
        }
    return(prime);
    }
public:
    int segmentedSieve(int n)
    {
        
        int limit = floor(sqrt(n))+1;
        vector<int> prime = simpleSieve(limit);
        int count = prime.size();

        int low = limit;
        int high = limit + limit-1;

        while(low<n)
        {
            if(high>n)
            high = n;

            vector <bool> mark(limit + 1, true);
            for(int i = 0; i < prime.size();i++)
            {
                
                int lowLimit = floor(lowLimit/prime[i])*prime[i] ;
                if(lowLimit < limit)
                lowLimit = lowLimit + prime[i];

                for(int j = lowLimit; j<high; j += prime[i])
                mark[j-lowLimit]=false;
                
                
            }
            for(int k = 0; k<limit; k++)
            {
                if(mark[k]== true)
                count++;
            }
            low += limit;
            high += limit;


        }


    return count;

    }    
public:
    int countPrimes(int n) {
        int ans= segmentedSieve(n);
        return ans;
            
    }
};
