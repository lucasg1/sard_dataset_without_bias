static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
    }
    if(staticFive==5)
    {
<START>
<END>
        ; 
    }
}
} 
