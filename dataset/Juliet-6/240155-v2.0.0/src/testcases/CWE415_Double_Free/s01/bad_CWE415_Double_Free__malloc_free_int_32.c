void FUN0()
{
    int * data;
    int * *dataPtr1 = &data;
    int * *dataPtr2 = &data;
    data = NULL;
    {
        int * data = *dataPtr1;
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
        *dataPtr1 = data;
    }
    {
        int * data = *dataPtr2;
        free(data);
    }
}
