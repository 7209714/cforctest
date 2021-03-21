#ifdef FORCSHAPE_EXPORTS //同專案名稱，只是後面固定為_EXPORTS
#define FORCSHAPE_API __declspec(dllexport) //請注意！正確的是Export要亮起
#else
#define FORCSHAPE_API __declspec(dllimport)
#endif
#include "define.h"
#include<iostream>
using namespace std;
//可以將class的物件宣告在外面變成全域
//Calculate cal;

extern "C" FORCSHAPE_API void printHW();
void printHW()
{
    Calculate cal;//宣告在function內，只有該function能使用
    return cal.printHW();
}
 
