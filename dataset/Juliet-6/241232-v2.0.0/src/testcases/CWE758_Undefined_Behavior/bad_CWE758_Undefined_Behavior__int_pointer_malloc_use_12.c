void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            int * * pointer = (int * *)malloc(sizeof(int *));
            if (pointer == NULL) {exit(-1);}
<START>
            int * data = *pointer; 
<END>
            free(pointer);
            printIntLine(*data);
        }
    }
    else
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
}
