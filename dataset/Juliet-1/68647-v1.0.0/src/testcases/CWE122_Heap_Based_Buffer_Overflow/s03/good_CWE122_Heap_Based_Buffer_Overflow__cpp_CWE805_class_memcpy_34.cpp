namespace NAMESPACE0
{
typedef union
{
    TwoIntsClass * unionFirst;
    TwoIntsClass * unionSecond;
} unionType;
void FUN0()
{
    TwoIntsClass * data;
    unionType myUnion;
    data = NULL;
    data = new TwoIntsClass[100];
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
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
            memcpy(data, source, 100*sizeof(TwoIntsClass));
            printIntLine(data[0].intOne);
            delete [] data;
        }
    }
}
} 
