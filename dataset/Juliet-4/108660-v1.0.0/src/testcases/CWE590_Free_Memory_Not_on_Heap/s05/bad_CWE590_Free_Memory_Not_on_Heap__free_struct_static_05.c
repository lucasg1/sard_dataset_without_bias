static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    if(staticTrue)
    {
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
    }
    printStructLine(&data[0]);
<START>
    free(data);
<END>
}
