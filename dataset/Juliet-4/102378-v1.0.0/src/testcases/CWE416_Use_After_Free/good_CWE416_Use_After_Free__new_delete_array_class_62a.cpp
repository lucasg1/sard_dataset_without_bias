namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
}
void FUN1(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    delete [] data;
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    printIntLine(data[0].intOne);
}
void FUN1(TwoIntsClass * &data);
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
