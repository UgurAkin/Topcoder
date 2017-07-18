#include <string>
using namespace std;
struct Substitute{
    //O(1)
    int getIndexInKey(char lookFor, string key){
        int i = 0;
        while(i < key.length()){
            if(key[i] == lookFor){
                return (i+1)%10;
            }
            i++;
        }
        return -1;
    }
    int getValue(string key, string code){
        int resultSeq = 0;
        int pow = 1;
        for(int i = code.length() - 1 ; i >= 0; i--){     
            int curCorNumInKey = getIndexInKey(code[i],key);
            if(curCorNumInKey >= 0){
                resultSeq += curCorNumInKey * pow;
                pow *= 10;
                }
            }
        return resultSeq;
        }
    };

