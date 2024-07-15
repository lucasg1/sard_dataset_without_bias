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
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
    printIntLine(data[0].intOne);
}
void FUN2(TwoIntsClass * &data)
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
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    FUN2(data);
    ; 
}
} 
