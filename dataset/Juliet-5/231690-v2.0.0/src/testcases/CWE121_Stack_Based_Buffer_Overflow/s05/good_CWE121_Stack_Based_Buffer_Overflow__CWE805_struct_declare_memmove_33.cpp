namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    twoIntsStruct VAR1[50];
    twoIntsStruct VAR2[100];
    data = VAR2;
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
            memmove(data, source, 100*sizeof(twoIntsStruct));
            printStructLine(&data[0]);
        }
    }
}
} 
