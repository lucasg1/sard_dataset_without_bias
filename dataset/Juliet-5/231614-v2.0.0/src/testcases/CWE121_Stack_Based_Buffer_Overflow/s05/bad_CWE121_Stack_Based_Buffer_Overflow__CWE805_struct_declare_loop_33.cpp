namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    twoIntsStruct VAR1[50];
    twoIntsStruct VAR2[100];
    data = VAR1;
    {
        twoIntsStruct * data = dataRef;
        {
            twoIntsStruct source[100];
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
                    source[i].intOne = 0;
                    source[i].intTwo = 0;
                }
            }
            {
                size_t i;
                for (i = 0; i < 100; i++)
                {
<START>
                    data[i] = source[i];
<END>
                }
                printStructLine(&data[0]);
            }
        }
    }
}
} 
