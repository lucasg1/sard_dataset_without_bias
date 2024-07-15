static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    TwoIntsClass VAR1;
    int VAR2 = 100;
    VAR1.intOne = 0;
    VAR1.intTwo = 0;
    if(staticFive==5)
    {
        data = &VAR2;
    }
<START>
    printIntLine((reinterpret_cast<TwoIntsClass *>(data))->intTwo);
<END>
}
} 
