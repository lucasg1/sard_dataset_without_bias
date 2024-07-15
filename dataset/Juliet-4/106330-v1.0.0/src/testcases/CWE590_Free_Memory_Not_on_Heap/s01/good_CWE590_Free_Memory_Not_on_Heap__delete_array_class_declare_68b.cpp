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
        TwoIntsClass * dataBuffer = new TwoIntsClass[100];
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
    VAR1 = data;
    FUN0();
}
} 
extern TwoIntsClass * VAR0;
extern TwoIntsClass * VAR1;
namespace NAMESPACE2
{
void FUN0()
{
    TwoIntsClass * data = VAR1;
    printIntLine(data[0].intOne);
    delete [] data;
}
} 
