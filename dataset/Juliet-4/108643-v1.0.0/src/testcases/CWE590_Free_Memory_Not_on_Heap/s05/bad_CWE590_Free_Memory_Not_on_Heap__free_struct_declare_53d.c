void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        twoIntsStruct dataBuffer[100];
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    FUN0(data);
}
void FUN2(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN2(data);
}
void FUN3(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN3(data);
}
void FUN2(twoIntsStruct * data)
{
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
