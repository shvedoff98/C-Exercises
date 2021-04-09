#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class LongestConsec
{
public:
    static string longestConsec(vector<string> &strarr, int k)
    {
        vector <string> cmp;
        string temp; int num = k;

        for (int i=0; i<strarr.size(); ++i)
        {
            temp += strarr[i]; --num;
            if (!num) { cmp.push_back(temp); num = k; i -= k-1; temp = "";}
        }
        vector <string> cmp2 = cmp;
        auto lambda = [] (const string& x , const string& y) { return x.size() > y.size(); };
        sort(cmp2.begin(), cmp2.end(), lambda); int var = cmp2[0].size();

        auto lambda_2 = [&] (const string& str) { return str.size() == var; };

        if ( k == 1 ) { return *find_if(strarr.begin(), strarr.end(), lambda_2); }
        return *find_if(cmp.begin(), cmp.end(), lambda_2);
    }
};


int main(int argc, char* argv[])
{
    LongestConsec x;
    vector <string> vc { "bTrQByboAR", "TCjRbxxidlSEv", "zcqFjPpFNwChkfmCZ", "IfHsbufMeyFDq", "JeyTMRUEkeKmIsWFuMYpScqs", "YBMXRoDFcAjrtImtgDh", "yeiDpikLi", "aGVbiszyAYLVLX", "OMygpbccVhjzsEyHzWbyoUUe", "NjPPYqRd", "IpHOfeEMBC", "nIDVuqWwrggWImlPyYIRH", "kZtPdinPMPAcgAtdzYCEDAgYT", "mXRdEgIEEKFFAkXrtIdQ", "dyTrBtvZVLzRR", "jyPKyiOYRRTDjQuSd", "BINPUmVe", "XPilVyxOGxrb", "dKNfJUofmoFAuTHZtu", "FpUpUofQzCZRZjiqO", "cANJbkmFH", "nZvbVA", "NbtbHpMZzziirvI", "ApLfpiKnP", "QBkrHIUCGezJoU", "DwVoODXTwpDquUM", "tSYGXYecTJvvlGDtvXTFyoS", "VEfSUsGocaBNE", "qoWFyScVZjntSAyKIaLhjUznB", "zUrNIqGfnPdLiaPPKKdOM", "iwMssWgvslvo" };
    cout << x.longestConsec(vc, 2) << "\n";
}
