TwoIntsClass * VAR0;
TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0();
void FUN1()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        static TwoIntsClass dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}
} 
extern TwoIntsClass * VAR0;
extern TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    TwoIntsClass * data = VAR0;
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
} 
