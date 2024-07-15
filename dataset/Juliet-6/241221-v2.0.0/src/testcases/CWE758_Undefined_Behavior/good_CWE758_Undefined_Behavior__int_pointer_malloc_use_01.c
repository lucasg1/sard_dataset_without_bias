void FUN0()
{
    {
        int * data;
        int * * pointer = (int * *)malloc(sizeof(int *));
        if (pointer == NULL) {exit(-1);}
        data = (int *)malloc(sizeof(int));
        if (data == NULL) {exit(-1);}
        *data = 5;
        *pointer = data; 
        {
            int * data = *pointer;
            printIntLine(*data);
        }
        free(pointer);
    }
}
