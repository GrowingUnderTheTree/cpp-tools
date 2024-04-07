#pragma once
#ifndef regressionmodel_h

#endif // !regressionmodel_h
#define regressionmodel_h
#include <iostream>
#include <numeric>
#include <cmath>
class decisiontree;

class decisiontree
{
public:
    double entropyoftwoattrsum = 0;
    double entropyofoneattr(double x,double y) {
        double ans = ((-1 * x) * log2(x)) - ((-1 * y) * log2(y));
    return ans;
    }
    double entropyoftwoattr(int frequency, int sum, int arrlim, double x , double y, double arrx[10000],double arry[10000]){
        for(int freq = 0; freq < frequency; freq++){
            for(int i = 0; i < arrlim; i++){
                double tempans = ((arrx[i]+arry[i])/sum) * entropyofoneattr(arrx[i],arry[i]);
                entropyoftwoattrsum += tempans;
            }
        }
        return entropyoftwoattrsum;
    }
    void informationgain(double targetentropy, int initialbranch, double tinyentropyarr[10000]) {
        //WHAT THE FUCK I HAVE NO IDEA
    }
};