void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
        data = (twoIntsStruct *)malloc(50*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        break;
    }
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
        memmove(data, source, 100*sizeof(twoIntsStruct));
<END>
        printStructLine(&data[0]);
        free(data);
    }
}
