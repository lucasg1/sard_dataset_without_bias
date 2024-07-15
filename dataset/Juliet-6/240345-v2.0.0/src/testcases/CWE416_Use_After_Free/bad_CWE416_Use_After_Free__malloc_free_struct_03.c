void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    if(5==5)
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
    if(5==5)
    {
<START>
        printStructLine(&data[0]);
<END>
    }
}
