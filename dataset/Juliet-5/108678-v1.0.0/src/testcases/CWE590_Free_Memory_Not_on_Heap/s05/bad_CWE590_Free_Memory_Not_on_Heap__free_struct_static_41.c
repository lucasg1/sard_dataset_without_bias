void FUN0(twoIntsStruct * data)
{
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL; 
    {
        static twoIntsStruct dataBuffer[100];
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
