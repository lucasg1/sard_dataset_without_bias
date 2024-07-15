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
    data = new TwoIntsClass[50];
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
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
<START>
        memcpy(data, source, 100*sizeof(TwoIntsClass));
<END>
        printIntLine(data[0].intOne);
        delete [] data;
    }
}
} 
