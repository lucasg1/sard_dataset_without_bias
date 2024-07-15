namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1(TwoIntsClass * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL; 
    {
        TwoIntsClass dataBuffer[100];
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
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN4(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(TwoIntsClass * data)
{
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
} 
