static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int[50];
    }
    {
        int source[100] = {0}; 
<START>
        memmove(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
