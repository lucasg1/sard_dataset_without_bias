namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    data = NULL;
    {
        TwoIntsClass * data = *dataPtr1;
        data = new TwoIntsClass[50];
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
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
            memmove(data, source, 100*sizeof(TwoIntsClass));
<END>
            printIntLine(data[0].intOne);
            delete [] data;
        }
    }
}
} 
