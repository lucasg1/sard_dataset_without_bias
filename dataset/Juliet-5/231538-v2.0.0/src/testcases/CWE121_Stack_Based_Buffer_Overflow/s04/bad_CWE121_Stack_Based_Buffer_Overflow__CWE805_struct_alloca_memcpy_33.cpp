namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    twoIntsStruct * VAR1 = (twoIntsStruct *)ALLOCA(50*sizeof(twoIntsStruct));
    twoIntsStruct * VAR2 = (twoIntsStruct *)ALLOCA(100*sizeof(twoIntsStruct));
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
<START>
            memcpy(data, source, 100*sizeof(twoIntsStruct));
<END>
            printStructLine(&data[0]);
        }
    }
}
} 
