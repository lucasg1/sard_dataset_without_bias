namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
TwoIntsClass * FUN0(TwoIntsClass * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
    }
    return data;
}
TwoIntsClass * FUN1(TwoIntsClass * data)
{
    if(VAR2)
    {
        data = new TwoIntsClass[100];
    }
    return data;
}
} 
namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
TwoIntsClass * FUN0(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    VAR1 = 0; 
    data = FUN0(data);
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
    ;
}
TwoIntsClass * FUN1(TwoIntsClass * data);
void FUN5()
{
    TwoIntsClass * data;
    data = NULL;
    VAR2 = 1; 
    data = FUN1(data);
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
    ;
}
} 
