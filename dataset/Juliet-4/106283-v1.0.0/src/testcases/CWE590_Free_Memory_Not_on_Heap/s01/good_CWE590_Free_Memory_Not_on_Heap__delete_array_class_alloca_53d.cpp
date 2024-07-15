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
void FUN3(TwoIntsClass * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(TwoIntsClass * data);
void FUN5()
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
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
    printIntLine(data[0].intOne);
    delete [] data;
}
} 
