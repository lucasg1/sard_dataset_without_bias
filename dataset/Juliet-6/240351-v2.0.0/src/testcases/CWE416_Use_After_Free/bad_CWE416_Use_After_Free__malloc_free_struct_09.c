void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        free(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        printStructLine(&data[0]);
<END>
    }
}
