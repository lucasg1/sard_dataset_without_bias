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
    data = new TwoIntsClass[100];
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN5(TwoIntsClass * data);
void FUN0(TwoIntsClass * data)
{
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN5(TwoIntsClass * data)
{
    {
        TwoIntsClass source[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                source[i].intOne = 0;
                source[i].intTwo = 0;
            }
        }
        memmove(data, source, 100*sizeof(TwoIntsClass));
        printIntLine(data[0].intOne);
        delete [] data;
    }
}
} 
