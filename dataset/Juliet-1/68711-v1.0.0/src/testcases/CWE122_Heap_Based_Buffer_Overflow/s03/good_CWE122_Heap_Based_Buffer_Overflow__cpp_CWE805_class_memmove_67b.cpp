namespace NAMESPACE0
{
typedef struct _structType
{
    TwoIntsClass * structFirst;
} structType;
void FUN0(structType myStruct);
void FUN1()
{
    TwoIntsClass * data;
    structType myStruct;
    data = NULL;
    data = new TwoIntsClass[100];
    myStruct.structFirst = data;
    FUN0(myStruct);
}
} 
namespace NAMESPACE0
{
typedef struct _structType
{
    TwoIntsClass * structFirst;
} structType;
void FUN0(structType myStruct)
{
    TwoIntsClass * data = myStruct.structFirst;
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
