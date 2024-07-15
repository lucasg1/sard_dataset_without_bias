static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
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
