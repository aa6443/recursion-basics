#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};
int main(){
    ep harry;
    union money m1;
    m1.rice=34;
    cout<<m1.rice;
    
    return 0;
}
