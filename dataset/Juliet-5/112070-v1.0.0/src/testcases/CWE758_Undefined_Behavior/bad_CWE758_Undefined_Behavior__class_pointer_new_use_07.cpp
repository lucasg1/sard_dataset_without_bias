static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive==5)
    {
        {
            TwoIntsClass * * pointer = new TwoIntsClass *;
<START>
            TwoIntsClass * data = *pointer; 
<END>
            delete pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}
} 
