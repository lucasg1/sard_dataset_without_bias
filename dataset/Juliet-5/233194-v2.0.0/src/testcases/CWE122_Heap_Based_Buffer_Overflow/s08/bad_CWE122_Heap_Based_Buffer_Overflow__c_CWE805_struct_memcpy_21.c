static int VAR0 = 0;
static twoIntsStruct * FUN0(twoIntsStruct * data)
{
    if(VAR0)
    {
        data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
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
        free(data);
    }
}
