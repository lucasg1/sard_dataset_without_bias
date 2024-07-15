void FUN0()
{
    if(5==5)
    {
        {
            wchar_t * * pointer = (wchar_t * *)malloc(sizeof(wchar_t *));
            if (pointer == NULL) {exit(-1);}
<START>
            wchar_t * data = *pointer; 
<END>
            free(pointer);
            printWLine(data);
        }
    }
}
