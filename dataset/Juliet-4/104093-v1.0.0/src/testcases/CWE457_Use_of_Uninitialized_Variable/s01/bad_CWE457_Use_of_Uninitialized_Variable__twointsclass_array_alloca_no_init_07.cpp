static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
    {
        for(int i=0; i<10; i++)
        {
<START>
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
<END>
        }
    }
}
} 
