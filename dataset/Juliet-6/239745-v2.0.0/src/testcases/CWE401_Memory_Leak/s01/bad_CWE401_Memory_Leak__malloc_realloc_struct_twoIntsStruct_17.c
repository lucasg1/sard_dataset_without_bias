void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            struct _twoIntsStruct * data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
            if (data == NULL) {exit(-1);}
            data[0].intOne = 0;
            data[0].intTwo = 0;
            printStructLine((twoIntsStruct *)&data[0]);
<START>
            data = (struct _twoIntsStruct *)realloc(data, (130000)*sizeof(struct _twoIntsStruct));
<END>
            if (data != NULL)
            {
                data[0].intOne = 1;
                data[0].intTwo = 1;
                printStructLine((twoIntsStruct *)&data[0]);
                free(data);
            }
        }
    }
}
