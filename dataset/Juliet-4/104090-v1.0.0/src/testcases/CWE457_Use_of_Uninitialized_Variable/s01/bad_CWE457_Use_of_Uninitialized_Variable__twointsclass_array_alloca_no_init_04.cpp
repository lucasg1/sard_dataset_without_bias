static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    if(STATIC_CONST_TRUE)
    {
        ; 
    }
    if(STATIC_CONST_TRUE)
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
