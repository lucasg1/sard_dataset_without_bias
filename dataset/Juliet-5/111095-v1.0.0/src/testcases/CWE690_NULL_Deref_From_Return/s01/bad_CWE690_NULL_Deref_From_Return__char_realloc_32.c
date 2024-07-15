void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    data = NULL; 
    {
        char * data = *dataPtr1;
        data = (char *)realloc(data, 20*sizeof(char));
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
<START>
        strcpy(data, "Initialize");
<END>
        printLine(data);
        free(data);
    }
}
